#include "script_component.hpp"

/*
 * Author: Dennis | CHX31
 * Gets the group position of the given member to display it on cTab
 *
 * Arguments:
 * 0: Member object <OBJECT>
 *
 * Return Value:
 * Group position tag to be displayed on cTab <STRING> (e.g. "C-1", "C-2", or "?.") or "ERROR"
 *
 * Example:
 * [player] call crusader_utilities_fnc_getGroupPositionTag
 *
 * Public: Yes
 */

params [["_member", objNull, [objNull]]];

if (isNull _member) exitWith { "ERROR" };

private _tag = GETVAR(_member, QGVAR(callsign), "");

if (_tag isEqualTo "") exitWith {
    private _name = name _member;
    private _rawParts = _name splitString " ";
    private _parts = [];
    private _inNickname = false;
    private _quote = toString [34];

    // Ignore nickname segments in quotes, e.g. Fw. Paul "pulle" Richter -> ["Fw.", "Paul", "Richter"]
    {
        private _token = _x;
        if (_token != "") then {
            private _quoteCount = { _x == 34 } count (toArray _token);
            private _hasQuote = _quoteCount > 0;

            if (_inNickname) then {
                if ((_quoteCount mod 2) == 1) then {
                    _inNickname = false;
                };
            } else {
                if (_hasQuote) then {
                    if ((_quoteCount mod 2) == 1) then {
                        _inNickname = true;
                    };
                } else {
                    _parts pushBack _token;
                };
            };
        };
    } forEach _rawParts;

    private _initialen = "?.";
    switch (count _parts) do {
        case 1: {
            _initialen = ((_parts # 0) select [0, 1]) + ".";
        };
        case 2: {
            _initialen = ((_parts # 0) select [0, 1]) + "." + ((_parts # 1) select [0, 1]) + ".";
        };
        case 3: {
            _initialen = ((_parts # 1) select [0, 1]) + "." + ((_parts # 2) select [0, 1]) + ".";
        };
        default {
            // 0 or 4+ parts: use initials from parts 1 and 2 if available, else "?."
            if (count _parts >= 3) then {
                _initialen = ((_parts # 1) select [0, 1]) + "." + ((_parts # 2) select [0, 1]) + ".";
            };
        };
    };

    _initialen
};

_tag

