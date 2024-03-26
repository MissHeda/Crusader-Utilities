#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_CRUSADER "Kommandokräfte Crusader - Utilities"

// Zeus via SteamID 64 enable
[
    QGVAR(zeusEnable),
    "CHECKBOX",
    [LLSTRING(SETTING_ZeusSystem_Enable),LLSTRING(SETTING_ZeusSystem_Enable_DESC)],
    [CBA_SETTINGS_CRUSADER, LSTRING(SETTING_SubCategory_ZeusSystem)],
    [true],
    true
] call CBA_Settings_fnc_init;

// Zeus via SteamID 64 List
[
    QGVAR(zeusIDs),
    "EDITBOX",
    [LLSTRING(SETTING_ZeusSystem_List),LLSTRING(SETTING_ZeusSystem_List_DESC)],
    [CBA_SETTINGS_CRUSADER, LSTRING(SETTING_SubCategory_ZeusSystem)],
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
