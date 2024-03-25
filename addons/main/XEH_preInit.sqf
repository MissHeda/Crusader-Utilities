#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_CRUSADER "Kommandokräfte Crusader - Utility"

// Zeus via SteamID 64 enable
[
    QGVAR(zeusEnable),
    "CHECKBOX",
    "Zeus Steam ID System",
    [CBA_SETTINGS_CRUSADER],
    [true],
    true
] call CBA_Settings_fnc_init;

// Zeus via SteamID 64 List
[
    QGVAR(zeusIDs),
    "EDITBOX",
    "Zeus Steam ID Liste",
    [CBA_SETTINGS_CRUSADER],
    "76561197977381857, 76561198258492468",
    1,
    {
        private _string = missionNamespace getVariable [QGVAR(zeusIDs), []];
        private _array = _string call CBA_fnc_removeWhitespace; 
        _array = [_array, ","] call CBA_fnc_split;
        missionNamespace setVariable [QGVAR(zeusIDs), _array, true];
    }
] call CBA_Settings_fnc_init;

ADDON = true;
