#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_UTILITIES "Kommandokräfte Crusader - Utilities"

// Enable Camo Cream
[
    QGVAR(camoCreamEnable),
    "CHECKBOX",
    [LLSTRING(SETTING_CamoCream_Enable),LLSTRING(SETTING_CamoCream_Enable_DESC)],
    [CBA_SETTINGS_UTILITIES, LSTRING(SETTING_SubCategory_CamoCream)],
    [true],
    true
] call CBA_Settings_fnc_init;

// Require Item
[
    QGVAR(camoCreamRequireItem),
    "CHECKBOX",
    [LLSTRING(SETTING_CamoCream_RequireItem),LLSTRING(SETTING_CamoCream_RequireItem_DESC)],
    [CBA_SETTINGS_UTILITIES, LSTRING(SETTING_SubCategory_CamoCream)],
    [true],
    true
] call CBA_Settings_fnc_init;

// Apply Time
[
    QGVAR(camoCreamRequiredTime),
    "TIME",
    [LLSTRING(SETTING_CamoCream_RequiredTime),LLSTRING(SETTING_CamoCream_RequiredTime_DESC)],
    [CBA_SETTINGS_UTILITIES, LSTRING(SETTING_SubCategory_CamoCream)],
    [1, 15, 5],
    true
] call CBA_Settings_fnc_init;

// Custom Faces HashMap
[
    QGVAR(allowedFacesHashMap),
    "EDITBOX",
    [LLSTRING(SETTING_allowedFacesHashMap),LLSTRING(SETTING_allowedFacesHashMap_DESC)],
    [CBA_SETTINGS_UTILITIES, LSTRING(SETTING_SubCategory_CamoCream)],
    "[Carter, Carter_Tactical], [Medrano, Medrano_Tactical]",
    1,
    {
        private _string = GVAR(allowedFacesHashMap); // Get current var
        private _hashMap = createHashMap; // Create hashMap to use later
        private _array = _string call CBA_fnc_removeWhitespace; // Remove spaces
        _array = [_array, "[", "['"] call CBA_fnc_replace; // Add ' to the right of every [
        _array = [_array, "]", "']"] call CBA_fnc_replace; // Add ' to the left of every ]
        _array = [_array, ",", "','"] call CBA_fnc_replace; // Add ' to both left and right of every ,
        _array = [_array, "]','[", "],["] call CBA_fnc_replace; // Due to the function adding ' to the element separator (,) we need to remove that
        _array = "[" + _array + "]"; // Add array brackets to make it usable with parseSimpleArray
        _array = parseSimpleArray _array; // Convert string to array

        {
            if !(count _x >= 2 ) exitWith {}; // Exit current iteration if element does not have 2 entries
            _hashMap set [(_x select 0), _x]; // Adds current element to hashmap with first face as key
        } forEach _array;

        missionNamespace setVariable [QGVAR(allowedFacesHashMap), _hashMap, true]; // Save hashMap to var
    }
] call CBA_Settings_fnc_init;

ADDON = true;
