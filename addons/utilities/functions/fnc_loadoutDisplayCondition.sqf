#include "..\script_component.hpp"
/*
 * Author: Miss Heda
 * Checks if ace can display the loadout interaction
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Parent Group <STRING>
 * 2: Loadout <NUMBER>
 *
 * Return Value:
 * Bool
 *
 * Example:
 * [player, "Save", 1] call crusader_utilities_fnc_loadoutDisplayCondition;
 *
 * Public: No
 */

params ["_unit", "_interactionGroup", "_loadoutNumber"];

if !(GVAR(loadoutSystemEnable)) exitWith { // Exit when system is disabled
    false;
};

_interactionGroup = toLower _interactionGroup; // Convert string to lower case
private _aceInteraction = GVAR(loadoutSystemInteractions);  //  0 = none   1 = all    2 = save & load    3 = save    4 = load

switch (_interactionGroup) do {

    case "save": { 
        if !(_aceInteraction in [1,2,3]) exitWith { false; };
        true;
    };

    case "load": {
        if !(_aceInteraction in [1,2,4]) exitWith { false; }; // Exit if interaction is disabled
        
        private _loadout = format [QGVAR(loadout_%1), _loadoutNumber];
        private _condition = profileNamespace getVariable [_loadout, []];

        [false, true] select (_condition isNotEqualTo []); // If nothing is set the variable will be []
    };

    case "spawn": {
        if !(_aceInteraction in [1,5]) exitWith { false; }; // Exit if interaction is disabled
        
        if (_loadoutNumber == 0) exitWith { true; }; // Default (server side setting)
        private _loadout = format [QGVAR(loadout_%1), _loadoutNumber];
        private _condition = profileNamespace getVariable [_loadout, []];

        [false, true] select (_condition isNotEqualTo []); // If nothing is set the variable will be []
    };

    case "respawn": { 
        if !(_aceInteraction in [1,5]) exitWith { false; }; // Exit if interaction is disabled
        
        if (_loadoutNumber == 0) exitWith { true; }; // Gear before respawn (user) setting
        private _loadout = format [QGVAR(loadout_%1), _loadoutNumber];
        private _condition = profileNamespace getVariable [_loadout, []];

        [false, true] select (_condition isNotEqualTo []); // If nothing is set the variable will be []
    };
};
