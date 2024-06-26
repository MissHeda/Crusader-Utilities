/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	                                                            PLEASE NOTE
// This addon contains content derived from:
// - USP Gear Fix                           | by combatant              | https://steamcommunity.com/sharedfiles/filedetails/?id=2026102601
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class ItemInfo;
class InventoryOpticsItem_Base_F;
class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class InventoryItem_Base_F;
    class ItemCore;
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    //////////////////// AMP Image replacer ////////////////////
    class AMP_Door_Wedge: ACE_ItemCore {
        picture = QPATHTOF(assets\ui\DoorWedge_OVERRIDE.paa); // Override for BreachingCharge mods image
    };

    //////////////////// BW MOD MAGAZINE WELL ADD BY US ////////////////////
    class BWA3_G36A1: Rifle_Base_F {
        magazines[] = {"BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36_Tracer","BWA3_30Rnd_556x45_G36_Tracer_Dim","BWA3_30Rnd_556x45_G36_SD","BWA3_30Rnd_556x45_G36_AP"};
        magazineWell[] = {"BWmodMagazineWell"}; // in Magazines
    };

    //////////////////// UPS ACE Config ////////////////////
    class UniformItem: InventoryItem_Base_F
    {
    };
    class HeadgearItem: InventoryItem_Base_F
    {
    };
    class H_HelmetB: ItemCore
    {
        class ItemInfo: HeadgearItem
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_MICH_TC2000: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_MICH_TC2000_CT: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_HEAD_MICH_TC2002_TAN: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_HEAD_RBH_ATTACK_TAN: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_CRYE_AIRFRAME: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_CRYE_AIRFRAME_CT3: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_CRYE_AIRFRAME_CP: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=35;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=7;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_CRYE_AIRFRAME_CPC3: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=35;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=7;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_CRYE_AIRFRAME_CM: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPS_FASTXP: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPS_FASTXP_CT: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPS_FASTXP_CU: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPS_FASTXP_CO: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPS_FASTXP_BLK_MC: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPS_FASTXP_BLK_MC_01: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPS_FASTXP_BLK_MC_02: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPS_FASTXP_BLK_MC_03: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPS_FASTXP_BLK_MC_04: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPS_FASTXP_BLK_MC_05: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPS_FASTXP_BLK_MC_06: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPS_FASTXP_BLK_MC_07: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPS_FASTXP_BLK_MC_08: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_M: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_MW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_MG: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_MGW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_MGS: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_MGSW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_MGT: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_MGTW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_MS: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_MSW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_MT: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_MTW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_M: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_MW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_MG: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_MGW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_MGS: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_MGSW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_MGT: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_MGTW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_MS: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_MSW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_MT: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_MTW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_C: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CM: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CMW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CMG: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CMGS: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CMGSW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CMGT: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CMGTW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CMS: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CMSW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CMT: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CMTW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CG: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CGW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CGS: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CGSW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CGT: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CGTW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CS: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CSW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CT: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_CTW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_W: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_G: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_GW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_GS: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_GSW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_GT: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_GTW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_S: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_SW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_T: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMTC_TW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_C: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CM: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CMW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CMG: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CMGS: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CMGSW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CMGT: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CMGTW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CMS: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CMSW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CMT: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CMTW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CG: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CGW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CGS: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CGSW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CGT: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CGTW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CS: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CSW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CT: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_CTW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_W: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_M: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_MW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_MG: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_MGW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_MGS: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_MGSW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_MGT: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_MGTW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_MS: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_MSW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_MT: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_MTW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_C: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CM: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CMW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CMG: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CMGS: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CMGSW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CMGT: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CMGTW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CMS: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CMSW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CMT: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CMTW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CG: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CGW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CGS: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CGSW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CGT: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CGTW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CS: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CSW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CT: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_CTW: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_W: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_FULL_C: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_FULL: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_G: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_GW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_GS: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_GSW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_GT: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_GTW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_S: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_SW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_T: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_FCV_TW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_G: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_GW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_GS: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_GSW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_GT: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_GTW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_S: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_SW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_T: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_OPSCORE_FASTMT_TW: H_HelmetB
    {
        class ItemInfo: ItemInfo
        {
            mass=30;
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=6;
                    passThrough=0.5;
                };
            };
        };
    };
    class USP_BASEBALL_CAP_CT3: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=0;
                    passThrough=0.30000001;
                };
            };
        };
    };
    class USP_BASEBALL_CAP_CT3O: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=0;
                    passThrough=0.30000001;
                };
            };
        };
    };
    class USP_BASEBALL_CAPB_CT3: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=0;
                    passThrough=0.30000001;
                };
            };
        };
    };
    class USP_BASEBALL_CAPB_CT3O: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=0;
                    passThrough=0.30000001;
                };
            };
        };
    };
    class USP_PELTOR_COMTAC3: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=0;
                    passThrough=0.30000001;
                };
            };
        };
    };
    class USP_PELTOR_COMTAC3_OFF: H_HelmetB
    {
        ace_hearing_protection=0.80000001;
        ace_hearing_lowerVolume=0;
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName="HitHead";
                    armor=0;
                    passThrough=0.30000001;
                };
            };
        };
    };
    class USPF_OPS_FASTXP_CT_AOR1: USP_OPS_FASTXP_CT
    {
        displayName="[USPF] Ops-Core Fast CT (AOR1)";
        picture="\usp_gear_head\data\ui\ops_fastxp_aor1_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\usp_gear_head\data\tex\ops_fastxp_aor1_co.paa",
            "\usp_gear_head\data\tex\peltor_comtac2_co.paa"
        };
    };
    class USPF_OPS_FASTXP_CT_AOR2: USP_OPS_FASTXP_CT
    {
        displayName="[USPF] Ops-Core Fast CT (AOR2)";
        picture="\usp_gear_head\data\ui\ops_fastxp_aor2_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\usp_gear_head\data\tex\ops_fastxp_aor2_co.paa",
            "\usp_gear_head\data\tex\peltor_comtac2_co.paa"
        };
    };
    class USPF_OPS_FASTXP_CT_MC: USP_OPS_FASTXP_CT
    {
        displayName="[USPF] Ops-Core Fast CT (MC)";
        picture="\usp_gear_head\data\ui\ops_fastxp_mc_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\usp_gear_head\data\tex\ops_fastxp_mc_co.paa",
            "\usp_gear_head\data\tex\peltor_comtac2_co.paa"
        };
    };
    class USPF_OPS_FASTXP_CT_TNP2: USP_OPS_FASTXP_CT
    {
        displayName="[USPF] Ops-Core Fast CT (TNP)";
        picture="\usp_gear_head\data\ui\ops_fastxp_tan_paint_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\usp_gear_head\data\tex\ops_fastxp_tan_paint_co.paa",
            "\usp_gear_head\data\tex\peltor_comtac2_co.paa"
        };
    };
    class USPF_OPS_FASTXP_CU_AOR1: USP_OPS_FASTXP_CU
    {
        displayName="[USPF] Ops-Core Fast CU (AOR1)";
        picture="\usp_gear_head\data\ui\ops_fastxp_aor1_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\usp_gear_head\data\tex\ops_fastxp_aor1_co.paa",
            "\usp_gear_head\data\tex\peltor_comtac2_co.paa"
        };
    };
    class USPF_OPS_FASTXP_CU_AOR2: USP_OPS_FASTXP_CU
    {
        displayName="[USPF] Ops-Core Fast CU (AOR2)";
        picture="\usp_gear_head\data\ui\ops_fastxp_aor2_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\usp_gear_head\data\tex\ops_fastxp_aor2_co.paa",
            "\usp_gear_head\data\tex\peltor_comtac2_co.paa"
        };
    };
    class USPF_OPS_FASTXP_CU_MC: USP_OPS_FASTXP_CU
    {
        displayName="[USPF] Ops-Core Fast CU (MC)";
        picture="\usp_gear_head\data\ui\ops_fastxp_mc_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\usp_gear_head\data\tex\ops_fastxp_mc_co.paa",
            "\usp_gear_head\data\tex\peltor_comtac2_co.paa"
        };
    };
    class USPF_OPS_FASTXP_CU_TNP2: USP_OPS_FASTXP_CU
    {
        displayName="[USPF] Ops-Core Fast CU (TNP)";
        picture="\usp_gear_head\data\ui\ops_fastxp_tan_paint_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\usp_gear_head\data\tex\ops_fastxp_tan_paint_co.paa",
            "\usp_gear_head\data\tex\peltor_comtac2_co.paa"
        };
    };
    class USPF_OPS_FASTXP_CO_AOR1: USP_OPS_FASTXP_CO
    {
        displayName="[USPF] Ops-Core Fast CO (AOR1)";
        picture="\usp_gear_head\data\ui\ops_fastxp_aor1_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\usp_gear_head\data\tex\ops_fastxp_aor1_co.paa",
            "\usp_gear_head\data\tex\peltor_comtac2_co.paa"
        };
    };
    class USPF_OPS_FASTXP_CO_AOR2: USP_OPS_FASTXP_CO
    {
        displayName="[USPF] Ops-Core Fast CO (AOR2)";
        picture="\usp_gear_head\data\ui\ops_fastxp_aor2_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\usp_gear_head\data\tex\ops_fastxp_aor2_co.paa",
            "\usp_gear_head\data\tex\peltor_comtac2_co.paa"
        };
    };
    class USPF_OPS_FASTXP_CO_MC: USP_OPS_FASTXP_CO
    {
        displayName="[USPF] Ops-Core Fast CO (MC)";
        picture="\usp_gear_head\data\ui\ops_fastxp_mc_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\usp_gear_head\data\tex\ops_fastxp_mc_co.paa",
            "\usp_gear_head\data\tex\peltor_comtac2_co.paa"
        };
    };
    class USPF_OPS_FASTXP_CO_TNP2: USP_OPS_FASTXP_CO
    {
        displayName="[USPF] Ops-Core Fast CO (TNP)";
        picture="\usp_gear_head\data\ui\ops_fastxp_tan_paint_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\usp_gear_head\data\tex\ops_fastxp_tan_paint_co.paa",
            "\usp_gear_head\data\tex\peltor_comtac2_co.paa"
        };
    };
};


class CfgVehicles
{
    class Bag_Base;
    class USP_TACTICAL_PACK: Bag_Base
    {
        maximumLoad=240;
    };
    class USP_TACTICAL_PACK_CCT: Bag_Base
    {
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        mass=80;
    };
    class USP_TACTICAL_PACK_CCT2: Bag_Base
    {
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        mass=80;
    };
    class USP_TACTICAL_PACK_CCT3: Bag_Base
    {
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        mass=80;
    };
    class USP_TACTICAL_PACK_CCT4: Bag_Base
    {
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        mass=80;
    };
    class USP_TACTICAL_PACK_CCT5: Bag_Base
    {
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        mass=80;
    };
    class USP_TACTICAL_PACK_CCT6: Bag_Base
    {
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        mass=80;
    };
    class USP_TACTICAL_PACK_CCT7: Bag_Base
    {
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        mass=80;
    };
    class USP_TACTICAL_PACK_CCT8: Bag_Base
    {
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        mass=80;
    };
    class USP_PATROL_PACK: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CB: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CB_CS: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CB_CS_FH: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CB_CS_FH_RP_ZT: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CB_CS_FH_RP: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CB_CS_FH_ZT: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CB_CS_RP: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CB_CS_RP_ZT: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CB_CS_ZT: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CB_FH: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CB_FH_RP: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CB_FH_RP_ZT: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CB_FH_ZT: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CB_RP: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CB_RP_ZT: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CB_ZT: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CS: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CS_FH: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CS_FH_ZT: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_CS_ZT: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_FH: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_FH_ZT: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_PATROL_PACK_ZT: Bag_Base
    {
        maximumLoad=340;
    };
    class USP_45L_RUCKSACK: Bag_Base
    {
        maximumLoad=400;
    };
};