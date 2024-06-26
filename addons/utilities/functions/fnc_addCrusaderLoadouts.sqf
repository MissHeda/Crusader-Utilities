#include "..\script_component.hpp"
/*
 * Author: Miss Heda
 * Adds the crusader loadouts to a object
 *
 * Arguments:
 * 0: cursorObject <OBJECT>
 * 1: add to ace main action <BOOL> (default: false)
 * 1: position <ARRAY> (optional, default: "")
 *
 * Return Value:
 * Bool
 *
 * Example:
 * [cursorObject, false, 2, [0,0,1]] call crusader_utilities_fnc_addCrusaderLoadouts;
 *
 * Public: No
 */

params ["_object", "_addToMainAction", "_range", "_position"];

/*
 * Argument:
 * 0: Action name <STRING>
 * 1: Name of the action shown in the menu <STRING>
 * 2: Icon <STRING>
 * 3: Statement <CODE>
 * 4: Condition <CODE>
 * 5: Insert children code <CODE> (Optional)
 * 6: Action parameters <ANY> (Optional)
 * 7: Position (Position array, Position code or Selection Name) <ARRAY>, <CODE> or <STRING> (Optional)
 * 8: Distance <NUMBER> (Optional)
 * 9: Other parameters [showDisabled,enableInside,canCollapse,runOnHover,doNotCheckLOS] <ARRAY> (Optional)
 * 10: Modifier function <CODE> (Optional)
 */

switch (true) do {
    case (_range isEqualTo ""): { _range = 1; };
    case (_position isEqualTo ""): { _position = [0,0,0]; };
};

private _mainInteraction = [QGVAR(Loadouts),LLSTRING(Interaction_LoadoutCommand_Loadouts), QPATHTOF(assets\ui\CrusaderLogo_64.paa), 
{ }, { true }, 
{ 
    params ["_target", "_caller", "_arguments"];
    private _actions = []; 
 
    // ---------------------- Alpha ----------------------
	
    private _alpha = [QGVAR(Loadouts_Alpha),LLSTRING(Interaction_LoadoutCommand_Alpha), "", 
    { }, { true }, {
        

        // Truppführer
        private _truppfuehrer = [QGVAR(LoadoutCommand_Alpha_Truppfuehrer),LLSTRING(LoadoutCommand_Alpha_Truppfuehrer), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Alpha_Truppfuehrer),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Funker - JTAC
        private _funkerJTAC = [QGVAR(LoadoutCommand_Alpha_FunkerJTAC),LLSTRING(LoadoutCommand_Alpha_FunkerJTAC), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Alpha_FunkerJTAC),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Kommando Medic
        private _kommandoMedic = [QGVAR(LoadoutCommand_Alpha_KommandoMedic),LLSTRING(LoadoutCommand_Alpha_KommandoMedic), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Alpha_KommandoMedic),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Aufklärungsfeldwebel TEO
        private _aufklaerungsfeldwebelTEO = [QGVAR(LoadoutCommand_Alpha_AufklaerungsfeldwebelTEO),LLSTRING(LoadoutCommand_Alpha_AufklaerungsfeldwebelTEO), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Alpha_AufklaerungsfeldwebelTEO),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Waffenspezialist Assaulter
        private _waffenspezialistAssaulter = [QGVAR(LoadoutCommand_Alpha_WaffenspezialistAssaulter),LLSTRING(LoadoutCommand_Alpha_WaffenspezialistAssaulter), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Alpha_WaffenspezialistAssaulter),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Öffnungstechniker Breacher
        private _oeffnungstechnikerBreacher = [QGVAR(LoadoutCommand_Alpha_OeffnungstechnikerBreacher),LLSTRING(LoadoutCommand_Alpha_OeffnungstechnikerBreacher), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Alpha_OeffnungstechnikerBreacher),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;

        private _actions = []; 
        _actions pushBack [_truppfuehrer, [], _target];
        _actions pushBack [_funkerJTAC, [], _target];
        _actions pushBack [_kommandoMedic, [], _target];
        _actions pushBack [_aufklaerungsfeldwebelTEO, [], _target];
        _actions pushBack [_waffenspezialistAssaulter, [], _target];
        _actions pushBack [_oeffnungstechnikerBreacher, [], _target];
        _actions 

    }, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;

    // ---------------------- Bravo ----------------------
    // Note: Bravo uses the same strings as alpha due to them having the same names
	
    private _bravo = [QGVAR(Loadouts_Bravo),LLSTRING(Interaction_LoadoutCommand_Bravo), "", 
    { }, { true }, {
        

        // Truppführer
        private _truppfuehrer = [QGVAR(LoadoutCommand_Alpha_Truppfuehrer),LLSTRING(LoadoutCommand_Alpha_Truppfuehrer), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Bravo_Truppfuehrer),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Funker - JTAC
        private _funkerJTAC = [QGVAR(LoadoutCommand_Alpha_FunkerJTAC),LLSTRING(LoadoutCommand_Alpha_FunkerJTAC), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Bravo_FunkerJTAC),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Kommando Medic
        private _kommandoMedic = [QGVAR(LoadoutCommand_Alpha_KommandoMedic),LLSTRING(LoadoutCommand_Alpha_KommandoMedic), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Bravo_KommandoMedic),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Aufklärungsfeldwebel TEO
        private _aufklaerungsfeldwebelTEO = [QGVAR(LoadoutCommand_Alpha_AufklaerungsfeldwebelTEO),LLSTRING(LoadoutCommand_Alpha_AufklaerungsfeldwebelTEO), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Bravo_AufklaerungsfeldwebelTEO),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Waffenspezialist Assaulter
        private _waffenspezialistAssaulter = [QGVAR(LoadoutCommand_Alpha_WaffenspezialistAssaulter),LLSTRING(LoadoutCommand_Alpha_WaffenspezialistAssaulter), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Bravo_WaffenspezialistAssaulter),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Öffnungstechniker Breacher
        private _oeffnungstechnikerBreacher = [QGVAR(LoadoutCommand_Alpha_OeffnungstechnikerBreacher),LLSTRING(LoadoutCommand_Alpha_OeffnungstechnikerBreacher), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Bravo_OeffnungstechnikerBreacher),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        private _actions = []; 
        _actions pushBack [_truppfuehrer, [], _target];
        _actions pushBack [_funkerJTAC, [], _target];
        _actions pushBack [_kommandoMedic, [], _target];
        _actions pushBack [_aufklaerungsfeldwebelTEO, [], _target];
        _actions pushBack [_waffenspezialistAssaulter, [], _target];
        _actions pushBack [_oeffnungstechnikerBreacher, [], _target];
        _actions 

    }, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;

    // ---------------------- Charlie ----------------------

    private _charlie = [QGVAR(Loadouts_Charlie),LLSTRING(Interaction_LoadoutCommand_Charlie), "", 
    { }, { true }, {


        // Truppführer - Notfallsanitäter
        private _truppfuehrerNotfallsanitaeter = [QGVAR(LoadoutCommand_Charlie_TruppfuehrerNotfallsanitaeter),LLSTRING(LoadoutCommand_Charlie_TruppfuehrerNotfallsanitaeter), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Charlie_TruppfuehrerNotfallsanitaeter),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Truppfeldwebel - Notfallsanitäter
        private _truppfeldwebelNotfallsanitaeter = [QGVAR(LoadoutCommand_Charlie_TruppfeldwebelNotfallsanitaeter),LLSTRING(LoadoutCommand_Charlie_TruppfeldwebelNotfallsanitaeter), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Charlie_TruppfeldwebelNotfallsanitaeter),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Einsatzsanitäter - CFR-C
        private _einsatzsanitaeterCFRC = [QGVAR(LoadoutCommand_Charlie_EinsatzsanitaeterCFRC),LLSTRING(LoadoutCommand_Charlie_EinsatzsanitaeterCFRC), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Charlie_EinsatzsanitaeterCFRC),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Sanitätsoffizier – Arzt
        private _sanitaetsoffizierArzt = [QGVAR(LoadoutCommand_Charlie_SanitaetsoffizierArzt),LLSTRING(LoadoutCommand_Charlie_SanitaetsoffizierArzt), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Charlie_SanitaetsoffizierArzt),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        private _actions = [];
        _actions pushBack [_truppfuehrerNotfallsanitaeter, [], _target];
        _actions pushBack [_truppfeldwebelNotfallsanitaeter, [], _target];
        _actions pushBack [_einsatzsanitaeterCFRC, [], _target];
        _actions pushBack [_sanitaetsoffizierArzt, [], _target];
        _actions 

    }, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction; 
    
    // ---------------------- Delta ----------------------

    private _delta = [QGVAR(Loadouts_Delta),LLSTRING(Interaction_LoadoutCommand_Delta), "", 
    { }, { true }, {


        // Beobachter
        private _beobachter = [QGVAR(LoadoutCommand_Delta_Spotter),LLSTRING(LoadoutCommand_Delta_Spotter), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Delta_Spotter),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Sniper
        private _sniper = [QGVAR(LoadoutCommand_Delta_Sniper),LLSTRING(LoadoutCommand_Delta_Sniper), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Delta_Sniper),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        private _actions = [];
        _actions pushBack [_beobachter, [], _target];
        _actions pushBack [_sniper, [], _target];
        _actions 

    }, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction; 

    // ---------------------- Echo ----------------------

    private _echo = [QGVAR(Loadouts_Echo),LLSTRING(Interaction_LoadoutCommand_Echo), "", 
    { }, { true }, {

        // Gruppenführer
        private _gruppenfuehrer = [QGVAR(LoadoutCommand_Echo_Gruppenfuehrer),LLSTRING(LoadoutCommand_Echo_Gruppenfuehrer), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Echo_Gruppenfuehrer),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Stv. Gruppenführer
        private _stvGruppenfuehrer = [QGVAR(LoadoutCommand_Echo_StvGruppenfuehrer),LLSTRING(LoadoutCommand_Echo_StvGruppenfuehrer), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Echo_StvGruppenfuehrer),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Funker
        private _funker = [QGVAR(LoadoutCommand_Echo_Funker),LLSTRING(LoadoutCommand_Echo_Funker), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Echo_Funker),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Sanitäter
        private _sanitaeter = [QGVAR(LoadoutCommand_Echo_Sanitaeter),LLSTRING(LoadoutCommand_Echo_Sanitaeter), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Echo_Sanitaeter),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Assaulter/AT
        private _assaulterAT = [QGVAR(LoadoutCommand_Echo_AssaulterAT),LLSTRING(LoadoutCommand_Echo_AssaulterAT), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Echo_AssaulterAT),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;
        

        // DMR Schütze
        private _dMRSchuetze = [QGVAR(LoadoutCommand_Echo_DMRSchuetze),LLSTRING(LoadoutCommand_Echo_DMRSchuetze), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Echo_DMRSchuetze),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Pionier/Breacher
        private _pionierBreacher = [QGVAR(LoadoutCommand_Echo_PionierBreacher),LLSTRING(LoadoutCommand_Echo_PionierBreacher), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Echo_PionierBreacher),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Schwerer Waffenträger
        private _schwererWaffentraeger = [QGVAR(LoadoutCommand_Echo_SchwererWaffentraeger),LLSTRING(LoadoutCommand_Echo_SchwererWaffentraeger), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_Echo_SchwererWaffentraeger),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        private _actions = [];
        _actions pushBack [_gruppenfuehrer, [], _target];
        _actions pushBack [_stvGruppenfuehrer, [], _target];
        _actions pushBack [_funker, [], _target];
        _actions pushBack [_sanitaeter, [], _target];
        _actions pushBack [_assaulterAT, [], _target];
        _actions pushBack [_dMRSchuetze, [], _target];
        _actions pushBack [_pionierBreacher, [], _target];
        _actions pushBack [_schwererWaffentraeger, [], _target];
        _actions 

    }, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction; 

    // ---------------------- T.O.C. ----------------------

    private _toc = [QGVAR(Loadouts_TOC),LLSTRING(Interaction_LoadoutCommand_TOC), "", 
    { }, { true }, {


        // TOC-Kommandeur
        private _tOCKommandeur = [QGVAR(LoadoutCommand_TOC_TOCKommandeur),LLSTRING(LoadoutCommand_TOC_TOCKommandeur), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_TOC_TOCKommandeur),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Operations-Offizier
        private _operationsOffizier = [QGVAR(LoadoutCommand_TOC_OperationsOffizier),LLSTRING(LoadoutCommand_TOC_OperationsOffizier), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_TOC_OperationsOffizier),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        // Kommunikations-Offizier
        private _kommunikationsOffizier = [QGVAR(LoadoutCommand_TOC_KommunikationsOffizier),LLSTRING(LoadoutCommand_TOC_KommunikationsOffizier), "", 
        { 
            params ["_target", "_caller", "_arguments"]; 

            [_caller, GETMVAR(GVAR(LoadoutCommand_TOC_KommunikationsOffizier),[])] call CBA_fnc_setLoadout;
        }, { true }, {}, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


        private _actions = [];
        _actions pushBack [_tOCKommandeur, [], _target];
        _actions pushBack [_operationsOffizier, [], _target];
        _actions pushBack [_kommunikationsOffizier, [], _target];
        _actions 

    }, [], [0,0,0], 1] call ace_interact_menu_fnc_createAction;


    _actions pushBack [_alpha, [], _target];
    _actions pushBack [_bravo, [], _target]; 
    _actions pushBack [_charlie, [], _target]; 
    _actions pushBack [_delta, [], _target]; 
    _actions pushBack [_echo, [], _target]; 
    _actions pushBack [_toc, [], _target]; 
 
    _actions 
}, [], _position, _range] call ace_interact_menu_fnc_createAction; 

/*
 * Argument:
 * 0: Object the action should be assigned to <OBJECT>
 * 1: Type of action, 0 for actions, 1 for self-actions <NUMBER>
 * 2: Parent path of the new action <ARRAY> (Example: `["ACE_SelfActions", "ACE_Equipment"]`)
 * 3: Action <ARRAY>
*/

if (_addToMainAction) then {
	[_object, 0, ["ACE_MainActions"], _mainInteraction] call ace_interact_menu_fnc_addActionToObject; 
} else {
	[_object, 0, [], _mainInteraction] call ace_interact_menu_fnc_addActionToObject; 
};
