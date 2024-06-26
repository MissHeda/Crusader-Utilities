#include "..\script_component.hpp"
/*
 * Author: Miss Heda
 * Sets the custom respawn loadout
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Corpse <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, body] call crusader_utilities_fnc_handleRespawn;
 *
 * Public: No
 */

params ["_unit", "_body"];

if !(GVAR(loadoutSystemEnable)) exitWith {}; // Exit when loadout system is disabled
private _loadout = _body call CBA_fnc_getLoadout;
if (GVAR(deletePlayersBodyRespawnEnable)) then { // If enabled delete the players body
	deleteVehicle _body;
};
if !(GVAR(respawnLoadoutEnable)) exitWith {}; // Exit if respawn loadout is disabled
if !(isPlayer _unit) exitWith {}; // Exit if unit is not player

switch (profileNameSpace getVariable [QGVAR(respawnLoadout), nil]) do {
	case 0: { [_unit, profileNameSpace getVariable QGVAR(unitGear), profileNameSpace getVariable QGVAR(activeWeaponAndMuzzle)] call ACEFUNC(respawn,restoreGear); }; // Gives the player exact same loadout before death
	case 1: { [_unit, profileNameSpace getVariable QGVAR(loadout_1)] call CBA_fnc_setLoadout; }; // Give the player their custom loadout 1
	case 2: { [_unit, profileNameSpace getVariable QGVAR(loadout_2)] call CBA_fnc_setLoadout; }; // Give the player their custom loadout 2
	case 3: { [_unit, profileNameSpace getVariable QGVAR(loadout_3)] call CBA_fnc_setLoadout; }; // Give the player their custom loadout 3
	case 4: { [_unit, profileNameSpace getVariable QGVAR(loadout_4)] call CBA_fnc_setLoadout; }; // Give the player their custom loadout 4
	case 5: { [_unit, profileNameSpace getVariable QGVAR(loadout_5)] call CBA_fnc_setLoadout; }; // Give the player their custom loadout 5
	case 6: { [_unit, profileNameSpace getVariable QGVAR(loadout_6)] call CBA_fnc_setLoadout; }; // Give the player their custom loadout 6
	default { }; // If noting is specified do nothing
};
