#include "..\script_component.hpp"
/*
 * Author: bux578 
 * Handles the XEH killed event.
 * COPIED FROM ACE: https://github.com/acemod/ACE3/blob/master/addons/respawn/functions/fnc_handleKilled.sqf
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Killer <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [ACE_player, bad_dude] call crusader_utilities_fnc_handleKilled;
 *
 * Public: No
 */

params ["_unit"];

// Saves the gear when the player! (and only him) is killed
if (ACE_player == _unit) then {
    profileNameSpace setVariable [QGVAR(unitGear), [_unit] call CBA_fnc_getLoadout]; // Use profileNameSpace cause of _unit not working in SP
    profileNameSpace setVariable [QGVAR(activeWeaponAndMuzzle), [currentWeapon _unit, currentMuzzle _unit, currentWeaponMode _unit]];
};
