#include "..\script_component.hpp"
/*
 * Author: Miss Heda
 * Checks if the units head is in the set array to display the ace interaction
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Apply \ Remove <STRING>
 *
 * Return Value:
 * Bool
 *
 * Example:
 * [player, "Apply"] call crusader_faces_fnc_conditionCamoCream;
 *
 * Public: No
 */

params ["_unit", "_type"];

if !(GVAR(camoCreamEnable)) exitWith { // Exit when system is disabled
    false;
};

_type = toLower _type; // Convert type string to lower case
private _face = face _unit; // Get players face
private _facesHashMap = GVAR(allowedFacesHashMap); // Get hashmap from CBA
private _hasTrueValue = [];
private _incorrectClassName = [];

{ //Check if the faces exist as className
	{
		if (!isClass (configFile >> "CfgFaces" >> "Man_A3" >> _x)) exitWith { // If className does not exit do this code
			if !(missionNamespace getVariable [QGVAR(incorrectClassName_ErrorMessageCooldown), false]) then { // If cooldown is false sebd systemChat message
				
				systemChat (format ["ERROR: ""%1"" is not a valid className!", _x]);
				missionNamespace setVariable [QGVAR(incorrectClassName_ErrorMessageCooldown), true, true];

				[{
					missionNamespace setVariable [QGVAR(incorrectClassName_ErrorMessageCooldown), false, true];
				}, [], 3] call CBA_fnc_waitAndExecute;
			};

			_incorrectClassName pushBack _x;
		};
	} forEach _y;
} forEach _facesHashMap;

// Kill script if the incorrect classname is detected
if (_incorrectClassName isNotEqualTo []) exitWith { false; };

switch (_type) do {
	case "apply": {
		
		if (GVAR(camoCreamRequireItem) && [false, true] select (_face in _facesHashMap)) exitWith { // If require item is enabled, check for face and exit with item check (fnc will return bool)
			[_unit, "Crusader_CamoCream"] call ACEFUNC(common,hasItem); 
		};

		[false, true] select (_face in _facesHashMap); // This check only applies when require item is turned off
	};
	case "remove": {

		{
			if (_face == (_y select 1)) then { // Select camo face from current element
				_hasTrueValue pushBack true; // PushBack true into _hasTrueValue array
			};
		} forEach _facesHashMap;

		[false, true] select (true in _hasTrueValue); // Sets true or false depending on if the face is set as a cammo face
	};
};