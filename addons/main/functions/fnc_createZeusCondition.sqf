#include "script_component.hpp"
/*
 * Author: Miss Heda
 * Checks if the players steamID 64 is in the CBA settings list
 *
 * Arguments:
 * 0: Object
 *
 * Return Value:
 * Bool
 *
 * Example:
 * [player] call crusader_main_fnc_createZeusCondition;
 *
 * Public: No
 */

params ["_caller"];

private _UID = getPlayerUID _caller;
private _allowedZeus = missionNamespace getVariable [QGVAR(crusader_zeusIDs), []];

if (_allowedZeus findIf { _UID == _x } != -1 && isNil "ace_zeus_zeus") exitWith {
	true;
};
	
false;