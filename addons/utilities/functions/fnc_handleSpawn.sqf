#include "..\script_component.hpp"
/*
 * Author: Miss Heda
 * Sets the inital spawn loadout
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call crusader_utilities_fnc_handleSpawn;
 *
 * Public: No
 */

params ["_unit"];

if !(GVAR(loadoutSystemEnable) || GVAR(spawnLoadoutEnable)) exitWith { }; // Exit when loadout system is disabled OR exit if spawn loadout is disabled
if (missionName in ["mainmenu", "Arsenal"]) exitWith { }; // Exit if the mission is the main menu or arsenal (to prohibit errors that might pop up due to a mod missing in the loadout)

[{
	params ["_unit"];

	if ((getPlayerUID _unit) != (getPlayerUID player)) exitWith {
		false
	};

	isPlayer _unit;

}, {
	params ["_unit"];
	switch (profileNameSpace getVariable [QGVAR(spawnLoadout), nil]) do {
		case 1: {[_unit, profileNameSpace getVariable [QGVAR(loadout_1), []]] call CBA_fnc_setLoadout; }; // Give the player their custom loadout 1
		case 2: {[_unit, profileNameSpace getVariable [QGVAR(loadout_2), []]] call CBA_fnc_setLoadout; }; // Give the player their custom loadout 2
		case 3: {[_unit, profileNameSpace getVariable [QGVAR(loadout_3), []]] call CBA_fnc_setLoadout; }; // Give the player their custom loadout 3
		case 4: {[_unit, profileNameSpace getVariable [QGVAR(loadout_4), []]] call CBA_fnc_setLoadout; }; // Give the player their custom loadout 4
		case 5: {[_unit, profileNameSpace getVariable [QGVAR(loadout_5), []]] call CBA_fnc_setLoadout; }; // Give the player their custom loadout 5
		case 6: {[_unit, profileNameSpace getVariable [QGVAR(loadout_6), []]] call CBA_fnc_setLoadout; }; // Give the player their custom loadout 6
		default { }; // If noting is specified do nothing
	};
}, [_unit]] call CBA_fnc_waitUntilAndExecute; // Use cba to ensure unit is player (cause this fnc is unscheduled and waituntil only works in scheduled)
