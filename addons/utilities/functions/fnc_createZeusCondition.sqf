#include "..\script_component.hpp"
/*
 * Author: Miss Heda
 * Checks if the players steamID 64 is in the CBA settings list & if the player already has zeus
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Bool
 *
 * Example:
 * [player] call crusader_utilities_fnc_createZeusCondition;
 *
 * Public: No
 */

private _UID = getPlayerUID player;
private _allowedZeus = missionNamespace getVariable [QGVAR(zeusIDs), []];

if (!isNull getAssignedCuratorLogic player) exitWith { false };

((isNil QACEGVAR(zeus,zeus)) && {
    switch (ACEGVAR(zeus,canCreateZeus)) do {
        case CAN_CREATE_ADMIN:   {isServer || {IS_ADMIN_LOGGED}};
        case CAN_CREATE_CONSOLE: {call BIS_fnc_isDebugConsoleAllowed};
        case CAN_CREATE_ALL:     {true};
        default {false};
    }
}) || (
	GVAR(zeusEnable) && ([false,true] select (_allowedZeus findIf { _UID == _x } != -1)) // Check for ID in list & if user already has zeus
)