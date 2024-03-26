#include "..\script_component.hpp"
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

private _UID = getPlayerUID player;
private _allowedZeus = missionNamespace getVariable [QGVAR(zeusIDs), []];

if (!(GVAR(zeusEnable))) exitWith { false }; // Exit when Zeus System is disabled
if (!isNull getAssignedCuratorLogic player) exitWith { false }; // Don't allow if we already are a zeus, intentionally using player instead of ace_player
if (_allowedZeus findIf { _UID == _x } != -1 && isNil QACEGVAR(zeus,zeus)) exitWith { // Check for ID in list & if user already has zeus
	true
};

false;
