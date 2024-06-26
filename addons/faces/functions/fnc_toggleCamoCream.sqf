#include "..\script_component.hpp"
/*
 * Author: Miss Heda
 * Changes the head to it's camo \ no-camo varriant
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * Bool
 *
 * Example:
 * [player] call crusader_faces_fnc_toggleCamoCream;
 *
 * Public: No
 */

params ["_unit"];

private _face = face _unit; // Get players face
private _faceToChangeTo = ""; // Define here to be able to use it in switch
private _titelText = ""; // Define here to be able to use it in switch
private _totalTime = GVAR(camoCreamRequiredTime); // Time for the ace interaction
private _faceHashMap = GVAR(allowedFacesHashMap); // Get hashmap
private _isCurrentSelectTrue = "";

private _fnc_statement = { // Statement for sucess of progressbar
    params ["_args"];
    _args params ["_unit", "_faceToChangeTo"];

	[_unit, _faceToChangeTo] remoteExec ["setFace"];
};

{
	if ((_y select 0) == _face) exitWith { // If the head == 0 (non camo) set camo varriant & apply string
		_faceToChangeTo = (_y select 1);
		_titelText = LLSTRING(ProgressBar_Applying);
	};

	if ((_y select 1) == _face) exitWith { // If the head == 1 (camo) set non camo varriant & remove string
		_faceToChangeTo = (_y select 0);
		_titelText = LLSTRING(ProgressBar_Removing);
	};

} forEach _faceHashMap;

[
	_totalTime, // Time from CBA
	[_unit, _faceToChangeTo], // Arguments to be used in statement or condition
	_fnc_statement, // Statement (code to be executed when it's a success)
	{}, // Statement (code to be executed when it's not a success)
	_titelText, // Titel of the bar
	{ true }, // Condition
	[], // Exceptions for checking ace_common_fnc_canInteractWith
	false // Create progress bar as dialog, this blocks user input
] call ace_common_fnc_progressBar;