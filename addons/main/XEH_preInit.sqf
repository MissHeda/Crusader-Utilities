#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_CRUSADER "Kommandokräfte Crusader - Utility"

// Zeus via SteamID 64
[
    QGVAR(crusader_zeusIDs),
    "EDITBOX",
    "Zeus Steam IDs",
    CBA_SETTINGS_CRUSADER,
    "['76561197977381857', '76561198258492468']",
    1,
    {
        private _string = missionNamespace getVariable [QGVAR(crusader_zeusIDs), []];
        private _array = parseSimpleArray _string;
        missionNamespace setVariable [QGVAR(crusader_zeusIDs), _array, true];
    }
] call CBA_Settings_fnc_init;

ADDON = true;
