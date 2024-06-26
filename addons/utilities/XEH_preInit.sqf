#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_UTILITIES "Kommandokräfte Crusader - Utilities"
#define CBA_SETTINGS_LOADOUTS "Kommandokräfte Crusader - Loadouts"

// Enable Zeus via SteamID 64
[
    QGVAR(zeusEnable),
    "CHECKBOX",
    [LLSTRING(SETTING_ZeusSystem_Enable),LLSTRING(SETTING_ZeusSystem_Enable_DESC)],
    [CBA_SETTINGS_UTILITIES, LSTRING(SETTING_SubCategory_ZeusSystem)],
    [true],
    true
] call CBA_Settings_fnc_init;

// Zeus via SteamID 64 List
[
    QGVAR(zeusIDs),
    "EDITBOX",
    [LLSTRING(SETTING_ZeusSystem_List),LLSTRING(SETTING_ZeusSystem_List_DESC)],
    [CBA_SETTINGS_UTILITIES, LSTRING(SETTING_SubCategory_ZeusSystem)],
    "76561197977381857, 76561198258492468",
    1,
    {
        private _string = missionNamespace getVariable [QGVAR(zeusIDs), []];
        private _array = _string call CBA_fnc_removeWhitespace; 
        _array = [_array, ","] call CBA_fnc_split;
        _array pushBack "_SP_PLAYER_";
        missionNamespace setVariable [QGVAR(zeusIDs), _array, true];
    }
] call CBA_Settings_fnc_init;

// Enable Loadout Interactions
[
    QGVAR(loadoutSystemEnable),
    "CHECKBOX",
    [LLSTRING(SETTING_LoadoutSystem_Enable),LLSTRING(SETTING_LoadoutSystem_Enable_DESC)],
    [CBA_SETTINGS_UTILITIES, LSTRING(SETTING_SubCategory_LoadoutSystem)],
    [true],
    true
] call CBA_Settings_fnc_init;

// Ace Interactions
[
    QGVAR(loadoutSystemInteractions),
    "LIST",
    [LLSTRING(SETTING_LoadoutSystemInteractions_Enable), LLSTRING(SETTING_LoadoutSystemInteractions_Enable_DESC)],
    [CBA_SETTINGS_UTILITIES, LSTRING(SETTING_SubCategory_LoadoutSystem)],
    [[0, 1, 2, 3, 4, 5], [LLSTRING(SETTING_LoadoutSystemInteractions_None), LLSTRING(SETTING_LoadoutSystemInteractions_All), LLSTRING(SETTING_LoadoutSystemInteractions_Save_Load), LLSTRING(SETTING_LoadoutSystemInteractions_Save), LLSTRING(SETTING_LoadoutSystemInteractions_Load), LLSTRING(SETTING_LoadoutSystemInteractions_Settings)], 1],
    true
] call CBA_fnc_addSetting;

// Enable Spawn Loadout
[
    QGVAR(spawnLoadoutEnable),
    "CHECKBOX",
    [LLSTRING(SETTING_SpawnLoadout_Enable),LLSTRING(SETTING_SpawnLoadout_Enable_DESC)],
    [CBA_SETTINGS_UTILITIES, LSTRING(SETTING_SubCategory_LoadoutSystem)],
    [true],
    true
] call CBA_Settings_fnc_init;

// Enable Respawn Loadout
[
    QGVAR(respawnLoadoutEnable),
    "CHECKBOX",
    [LLSTRING(SETTING_RespawnLoadout_Enable),LLSTRING(SETTING_RespawnLoadout_Enable_DESC)],
    [CBA_SETTINGS_UTILITIES, LSTRING(SETTING_SubCategory_LoadoutSystem)],
    [true],
    true
] call CBA_Settings_fnc_init;

// Remove Players Bodies
[
    QGVAR(deletePlayersBodyRespawnEnable),
    "CHECKBOX",
    [LLSTRING(SETTING_DeletePlayersBody_Enable),LLSTRING(SETTING_DeletePlayersBody_Enable_DESC)],
    [CBA_SETTINGS_UTILITIES, LSTRING(SETTING_SubCategory_LoadoutSystem)],
    [false],
    true
] call CBA_Settings_fnc_init;

// ------------- Alpha -------------

// Loadout command Alpha Truppführer
[
    QGVAR(LoadoutCommand_Alpha_Truppfuehrer),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Alpha_Truppfuehrer),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Alpha)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Alpha_Truppfuehrer),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Alpha_Truppfuehrer),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Alpha_Truppfuehrer),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Alpha_Truppfuehrer),_array);
    }
] call CBA_Settings_fnc_init;

// Loadout command Alpha Funker - JTAC
[
    QGVAR(LoadoutCommand_Alpha_FunkerJTAC),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Alpha_FunkerJTAC),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Alpha)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Alpha_FunkerJTAC),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Alpha_FunkerJTAC),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Alpha_FunkerJTAC),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Alpha_FunkerJTAC),_array);
    }
] call CBA_Settings_fnc_init;

// Loadout command Alpha Kommando Medic
[
    QGVAR(LoadoutCommand_Alpha_KommandoMedic),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Alpha_KommandoMedic),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Alpha)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Alpha_KommandoMedic),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Alpha_KommandoMedic),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Alpha_KommandoMedic),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Alpha_KommandoMedic),_array);
    }
] call CBA_Settings_fnc_init;

// Loadout command Alpha Aufklärungsfeldwebel TEO
[
    QGVAR(LoadoutCommand_Alpha_AufklaerungsfeldwebelTEO),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Alpha_AufklaerungsfeldwebelTEO),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Alpha)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Alpha_AufklaerungsfeldwebelTEO),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Alpha_AufklaerungsfeldwebelTEO),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Alpha_AufklaerungsfeldwebelTEO),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Alpha_AufklaerungsfeldwebelTEO),_array);
    }
] call CBA_Settings_fnc_init;

// Loadout command Alpha Waffenspezialist Assaulter
[
    QGVAR(LoadoutCommand_Alpha_WaffenspezialistAssaulter),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Alpha_WaffenspezialistAssaulter),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Alpha)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Alpha_WaffenspezialistAssaulter),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Alpha_WaffenspezialistAssaulter),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Alpha_WaffenspezialistAssaulter),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Alpha_WaffenspezialistAssaulter),_array);
    }
] call CBA_Settings_fnc_init;

// Loadout command Alpha Öffnungstechniker Breacher
[
    QGVAR(LoadoutCommand_Alpha_OeffnungstechnikerBreacher),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Alpha_OeffnungstechnikerBreacher),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Alpha)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Alpha_OeffnungstechnikerBreacher),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Alpha_OeffnungstechnikerBreacher),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Alpha_OeffnungstechnikerBreacher),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Alpha_OeffnungstechnikerBreacher),_array);
    }
] call CBA_Settings_fnc_init;

// ------------- Bravo -------------

// Loadout command Bravo Truppführer
[
    QGVAR(LoadoutCommand_Bravo_Truppfuehrer),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Alpha_Truppfuehrer),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Bravo)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Bravo_Truppfuehrer),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Bravo_Truppfuehrer),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Bravo_Truppfuehrer),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Bravo_Truppfuehrer),_array);
    }
] call CBA_Settings_fnc_init;

// Loadout command Bravo Funker - JTAC
[
    QGVAR(LoadoutCommand_Bravo_FunkerJTAC),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Alpha_FunkerJTAC),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Bravo)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Bravo_FunkerJTAC),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Bravo_FunkerJTAC),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Bravo_FunkerJTAC),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Bravo_FunkerJTAC),_array);
    }
] call CBA_Settings_fnc_init;

// Loadout command Bravo Kommando Medic
[
    QGVAR(LoadoutCommand_Bravo_KommandoMedic),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Alpha_KommandoMedic),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Bravo)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Bravo_KommandoMedic),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Bravo_KommandoMedic),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Bravo_KommandoMedic),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Bravo_KommandoMedic),_array);
    }
] call CBA_Settings_fnc_init;

// Loadout command Bravo Aufklärungsfeldwebel TEO
[
    QGVAR(LoadoutCommand_Bravo_AufklaerungsfeldwebelTEO),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Alpha_AufklaerungsfeldwebelTEO),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Bravo)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Bravo_AufklaerungsfeldwebelTEO),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Bravo_AufklaerungsfeldwebelTEO),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Bravo_AufklaerungsfeldwebelTEO),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Bravo_AufklaerungsfeldwebelTEO),_array);
    }
] call CBA_Settings_fnc_init;

// Loadout command Bravo Waffenspezialist Assaulter
[
    QGVAR(LoadoutCommand_Bravo_WaffenspezialistAssaulter),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Alpha_WaffenspezialistAssaulter),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Bravo)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Bravo_WaffenspezialistAssaulter),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Bravo_WaffenspezialistAssaulter),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Bravo_WaffenspezialistAssaulter),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Bravo_WaffenspezialistAssaulter),_array);
    }
] call CBA_Settings_fnc_init;

// Loadout command Bravo Öffnungstechniker Breacher
[
    QGVAR(LoadoutCommand_Bravo_OeffnungstechnikerBreacher),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Alpha_OeffnungstechnikerBreacher),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Bravo)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Bravo_OeffnungstechnikerBreacher),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Bravo_OeffnungstechnikerBreacher),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Bravo_OeffnungstechnikerBreacher),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Bravo_OeffnungstechnikerBreacher),_array);
    }
] call CBA_Settings_fnc_init;

// ------------- Charlie -------------

// Truppführer - Notfallsanitäter
[
    QGVAR(LoadoutCommand_Charlie_TruppfuehrerNotfallsanitaeter),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Charlie_TruppfuehrerNotfallsanitaeter),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Charlie)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Charlie_TruppfuehrerNotfallsanitaeter),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Charlie_TruppfuehrerNotfallsanitaeter),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Charlie_TruppfuehrerNotfallsanitaeter),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Charlie_TruppfuehrerNotfallsanitaeter),_array);
    }
] call CBA_Settings_fnc_init;

// Truppfeldwebel - Notfallsanitäter
[
    QGVAR(LoadoutCommand_Charlie_TruppfeldwebelNotfallsanitaeter),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Charlie_TruppfeldwebelNotfallsanitaeter),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Charlie)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Charlie_TruppfeldwebelNotfallsanitaeter),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Charlie_TruppfeldwebelNotfallsanitaeter),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Charlie_TruppfeldwebelNotfallsanitaeter),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Charlie_TruppfeldwebelNotfallsanitaeter),_array);
    }
] call CBA_Settings_fnc_init;

// Einsatzsanitäter - CFR-C
[
    QGVAR(LoadoutCommand_Charlie_EinsatzsanitaeterCFRC),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Charlie_EinsatzsanitaeterCFRC),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Charlie)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Charlie_EinsatzsanitaeterCFRC),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Charlie_EinsatzsanitaeterCFRC),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Charlie_EinsatzsanitaeterCFRC),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Charlie_EinsatzsanitaeterCFRC),_array);
    }
] call CBA_Settings_fnc_init;

// Sanitätsoffizier – Arzt
[
    QGVAR(LoadoutCommand_Charlie_SanitaetsoffizierArzt),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Charlie_SanitaetsoffizierArzt),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Charlie)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Charlie_SanitaetsoffizierArzt),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Charlie_SanitaetsoffizierArzt),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Charlie_SanitaetsoffizierArzt),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Charlie_SanitaetsoffizierArzt),_array);
    }
] call CBA_Settings_fnc_init;

// ------------- Delta -------------

// Loadout command Delta Spotter
[
    QGVAR(LoadoutCommand_Delta_Spotter),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Delta_Spotter),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Delta)],
    '[[["ptv_hk433s_b","BWA3_muzzle_snds_QDSS","rhsusf_acc_anpeq15_bk","ptv_xps3xmag",["rhs_mag_30Rnd_556x45_M855_PMAG",30],[],"ptv_acc_grip4"],[],["MPP_PDP_BLK_9","ptv_trant9","ptv_dbalpl","optic_MRD_black",["MPP_23rnd_9MM_147FMJ_PDP",23],[],""],["GHOST_U_CRYE_G3_GHILLIE_MULTI",[["ACE_tourniquet",4],["ACE_IR_Strobe_Item",1],["ACE_CableTie",4],["ACE_EarPlugs",1],["ACE_splint",2],["ACE_elasticBandage",4],["ACE_packingBandage",8],["ACE_quikclot",4],["ACE_epinephrine",2],["ACE_morphine",2],["kat_guedel",1],["kat_chestSeal",2],["WBK_HeadLampItem",1],["ItemcTabHCam",1],["ACE_Flashlight_KSF1",1],["KNB_Notebook",1],["MRH_BluForTransponder",1],["kat_gasmaskFilter",1],["USP_M50_FC2_BLK2",1],["kat_Painkiller",1,10],["rhs_mag_30Rnd_556x45_M855_Stanag",2,30],["rhs_mag_30Rnd_556x45_M855_PMAG",1,30],[["UNSC_Knife","","","",[],[],""],1]]],["GHOST_V_TSF_3_2_MULTI_FLAG",[["ACE_Fortify",1],["ACE_EntrenchingTool",1],["ACE_fieldDressing",2],["ACE_packingBandage",2],["ACE_morphine",2],["ACE_tourniquet",2],["ACE_CableTie",5],["ACE_IR_Strobe_Item",1],["ACE_wirecutter",1],["ACE_ATragMX",1],["ACE_Kestrel4500",1],["BWA3_DM51A1",3,1],["BWA3_DM25",3,1],["ACE_Chemlight_IR",3,1],["ACE_Chemlight_HiGreen",1,1],["BWA3_DM32_Orange",2,1],["BWA3_DM32_Green",2,1],["BWA3_DM32_Purple",1,1],["rhs_mag_30Rnd_556x45_M855_PMAG",6,30],["MPP_23rnd_9MM_147JHP_PDP",2,23]]],["BWA3_Kitbag_Multi",[["ACE_salineIV_500",1],["ACE_salineIV_250",1],["AMP_Door_Wedge",2],["dzn_tripod_rifle",1],["STY_Item_CamoNet_BLUFOR",1],["ACE_Tripod",1],["ACE_MapTools",1],["rhs_mag_an_m14_th3",1,1],["rhs_mag_mk84",3,1]]],"USP_OPSCORE_FASTMT_FCV_OD_CTW","Balaclava_Crocodile_Gsg9_GreyG",["ACE_Vector","","","",[],[],""],["ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ChemicalDetector_01_watch_F",""]],[["KJW_TwoPrimaryWeapons_secondPrimaryEquipped",false],["KJW_TwoSecondaryWeapons_secondSecondaryInfo",["MPP_PDP_BLK_9","ptv_trant9","ptv_dbalpl","optic_MRD_black",["MPP_23rnd_9MM_147FMJ_PDP",23],[],""]],["KJW_TwoPrimaryWeapons_secondPrimaryInfo",[]],["KJW_TwoPrimaryWeapons_primaryPrimaryInfo",["ptv_hk433s_b","BWA3_muzzle_snds_QDSS","rhsusf_acc_anpeq15_bk","ptv_xps3xmag",["rhs_mag_30Rnd_556x45_M855_PMAG",30],[],"ptv_acc_grip4"]],["aceax_textureOptions",[]],["KJW_TwoSecondaryWeapons_secondSecondaryEquipped",true],["ace_earplugs",true],["KJW_TwoSecondaryWeapons_primarySecondaryInfo",["rhs_weap_tr8","","","",[],[],""]]]]',
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Delta_Spotter),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Delta_Spotter),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Delta_Spotter),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Delta_Spotter),_array);
    }
] call CBA_Settings_fnc_init;

// Loadout command Delta Sniper
[
    QGVAR(LoadoutCommand_Delta_Sniper),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Delta_Sniper),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Delta)],
    '[[["BWA3_MP7","BWA3_muzzle_snds_Rotex_II","rhsusf_acc_anpeq15side_bk","BWA3_optic_EOTech",["BWA3_40Rnd_46x30_MP7",40],[],""],[],[],["GHOST_U_CRYE_G3_GHILLIE_MULTI",[["ACE_tourniquet",4],["ACE_IR_Strobe_Item",1],["ACE_CableTie",4],["ACE_MapTools",1],["ACE_EarPlugs",1],["ACE_splint",2],["ACE_elasticBandage",4],["ACE_packingBandage",8],["ACE_quikclot",4],["ACE_epinephrine",2],["ACE_morphine",2],["kat_guedel",1],["kat_chestSeal",2],["WBK_HeadLampItem",1],["ItemcTabHCam",1],["ACE_Flashlight_KSF1",1],["KNB_Notebook",1],["MRH_BluForTransponder",1],["kat_gasmaskFilter",1],["USP_M50_FC2_BLK2",1],["kat_Painkiller",1,10],[["UNSC_Knife","","","",[],[],""],1]]],["GHOST_V_TSF_3_2_MULTI_FLAG",[["ACE_MapTools",1],["ACE_RangeCard",1],["ACE_Fortify",1],["ACE_EntrenchingTool",1],["ACE_fieldDressing",1],["ACE_packingBandage",1],["ACE_morphine",1],["ACE_tourniquet",1],["BWA3_optic_NSV80",1],["ACE_CableTie",5],["ACE_IR_Strobe_Item",1],["BWA3_DM51A1",3,1],["BWA3_DM25",3,1],["ACE_Chemlight_IR",3,1],["ACE_Chemlight_HiGreen",1,1],["BWA3_DM32_Orange",2,1],["BWA3_DM32_Green",2,1],["BWA3_DM32_Purple",1,1],["BWA3_10Rnd_86x70_G29",5,10],["BWA3_40Rnd_46x30_MP7",2,40],["MPP_23rnd_9MM_147JHP_PDP",2,23]]],["BWA3_AssaultPack_Multi",[["ACE_salineIV_500",1],["ACE_salineIV_250",1],["AMP_Door_Wedge",2],["dzn_tripod_rifle",1],["rhs_mag_an_m14_th3",1,1],["rhs_mag_mk84",3,1]]],"USP_OPSCORE_FASTMT_FCV_OD_CTW","Balaclava_Crocodile_Gsg9_GreyG",["Laserdesignator_02","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","TFAR_anprc152_21","ItemCompass","TFAR_microdagr",""]],[["KJW_TwoPrimaryWeapons_secondPrimaryEquipped",true],["KJW_TwoSecondaryWeapons_secondSecondaryInfo",["MPP_PDP_BLK_9","ptv_trant9","ptv_dbalpl","optic_MRD_black",["MPP_23rnd_9MM_147FMJ_PDP",23],[],""]],["KJW_TwoPrimaryWeapons_secondPrimaryInfo",["BWA3_MP7","BWA3_muzzle_snds_Rotex_II","rhsusf_acc_anpeq15side_bk","BWA3_optic_EOTech",["BWA3_40Rnd_46x30_MP7",40],[],""]],["KJW_TwoPrimaryWeapons_primaryPrimaryInfo",["BWA3_G29","BWA3_muzzle_snds_Rotex_Monoblock","","BWA3_optic_M5Xi_MSR_pip",["BWA3_10Rnd_86x70_G29",10],[],"BWA3_bipod_Harris_tan"]],["aceax_textureOptions",[]],["KJW_TwoSecondaryWeapons_secondSecondaryEquipped",false],["ace_earplugs",true],["KJW_TwoSecondaryWeapons_primarySecondaryInfo",[]]]]',
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Delta_Sniper),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Delta_Sniper),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Delta_Sniper),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Delta_Sniper),_array);
    }
] call CBA_Settings_fnc_init;

// ------------- Echo -------------

// Gruppenführer
[
    QGVAR(LoadoutCommand_Echo_Gruppenfuehrer),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Echo_Gruppenfuehrer),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Echo)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Echo_Gruppenfuehrer),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Echo_Gruppenfuehrer),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Echo_Gruppenfuehrer),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Echo_Gruppenfuehrer),_array);
    }
] call CBA_Settings_fnc_init;

// Stv. Gruppenführer
[
    QGVAR(LoadoutCommand_Echo_StvGruppenfuehrer),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Echo_StvGruppenfuehrer),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Echo)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Echo_StvGruppenfuehrer),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Echo_StvGruppenfuehrer),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Echo_StvGruppenfuehrer),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Echo_StvGruppenfuehrer),_array);
    }
] call CBA_Settings_fnc_init;

// Funker
[
    QGVAR(LoadoutCommand_Echo_Funker),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Echo_Funker),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Echo)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Echo_Funker),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Echo_Funker),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Echo_Funker),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Echo_Funker),_array);
    }
] call CBA_Settings_fnc_init;

// Sanitäter
[
    QGVAR(LoadoutCommand_Echo_Sanitaeter),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Echo_Sanitaeter),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Echo)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Echo_Sanitaeter),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Echo_Sanitaeter),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Echo_Sanitaeter),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Echo_Sanitaeter),_array);
    }
] call CBA_Settings_fnc_init;

// Assaulter/AT
[
    QGVAR(LoadoutCommand_Echo_AssaulterAT),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Echo_AssaulterAT),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Echo)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Echo_AssaulterAT),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Echo_AssaulterAT),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Echo_AssaulterAT),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Echo_AssaulterAT),_array);
    }
] call CBA_Settings_fnc_init;

// DMR Schütze
[
    QGVAR(LoadoutCommand_Echo_DMRSchuetze),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Echo_DMRSchuetze),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Echo)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Echo_DMRSchuetze),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Echo_DMRSchuetze),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Echo_DMRSchuetze),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Echo_DMRSchuetze),_array);
    }
] call CBA_Settings_fnc_init;

// Pionier/Breacher
[
    QGVAR(LoadoutCommand_Echo_PionierBreacher),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Echo_PionierBreacher),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Echo)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Echo_PionierBreacher),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Echo_PionierBreacher),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Echo_PionierBreacher),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Echo_PionierBreacher),_array);
    }
] call CBA_Settings_fnc_init;

// Schwerer Waffenträger
[
    QGVAR(LoadoutCommand_Echo_SchwererWaffentraeger),
    "EDITBOX",
    LLSTRING(LoadoutCommand_Echo_SchwererWaffentraeger),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_Echo)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_Echo_SchwererWaffentraeger),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_Echo_SchwererWaffentraeger),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_Echo_SchwererWaffentraeger),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_Echo_SchwererWaffentraeger),_array);
    }
] call CBA_Settings_fnc_init;

// ------------- TOC -------------

// TOC-Kommandeur
[
    QGVAR(LoadoutCommand_TOC_TOCKommandeur),
    "EDITBOX",
    LLSTRING(LoadoutCommand_TOC_TOCKommandeur),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_TOC)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_TOC_TOCKommandeur),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_TOC_TOCKommandeur),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_TOC_TOCKommandeur),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_TOC_TOCKommandeur),_array);
    }
] call CBA_Settings_fnc_init;

// Operations-Offizier
[
    QGVAR(LoadoutCommand_TOC_OperationsOffizier),
    "EDITBOX",
    LLSTRING(LoadoutCommand_TOC_OperationsOffizier),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_TOC)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_TOC_OperationsOffizier),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_TOC_OperationsOffizier),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_TOC_OperationsOffizier),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_TOC_OperationsOffizier),_array);
    }
] call CBA_Settings_fnc_init;

// Kommunikations-Offizier
[
    QGVAR(LoadoutCommand_TOC_KommunikationsOffizier),
    "EDITBOX",
    LLSTRING(LoadoutCommand_TOC_KommunikationsOffizier),
    [CBA_SETTINGS_LOADOUTS, LSTRING(Interaction_LoadoutCommand_TOC)],
    "",
    1,
    {
        if (GETMVAR(GVAR(LoadoutCommand_TOC_KommunikationsOffizier),[]) == "") exitWith {
            SETMVAR(GVAR(LoadoutCommand_TOC_KommunikationsOffizier),[]);
        };
        private _string = GETMVAR(GVAR(LoadoutCommand_TOC_KommunikationsOffizier),[]);
        private _array = parseSimpleArray _string; 
        SETMVAR(GVAR(LoadoutCommand_TOC_KommunikationsOffizier),_array);
    }
] call CBA_Settings_fnc_init;

ADDON = true;
