#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "crusader_main",
            "BettIR_Core",
            "sps_ai_axmc",
            "bwa3_g29",
            "bwa3_weapons",
            "USP_Gear_Core",
            "tfar_core"
        };
        author = "Miss Heda";
        url = ECSTRING(main,URL);
        magazines[] = {
            // SPS-based Crusader-Mags
            "Crusader_G29_86x70_Scenar_300_Mag",
            "Crusader_G29_86x70_Scenar_300_Tracer_Mag",
            "Crusader_G29_86x70_Scenar_300_IR_Mag",
            "Crusader_G29_86x70_HPBT_300_Mag",
            "Crusader_G29_86x70_API526_Mag",
            "Crusader_G29_86x70_Naturalis_250_Mag",
            "Crusader_G29_86x70_Naturalis_250_Tracer_Mag",
            "Crusader_G29_86x70_Naturalis_250_IR_Mag",
            "Crusader_G29_86x70_Berger_300_Mag",
            "Crusader_G29_86x70_Berger_300_Tracer_Mag",
            "Crusader_G29_86x70_Berger_300_IR_Mag",
            // Custom (without Tracer/IR)
            "Crusader_10Rnd_86x70_G29_Solid",
            "Crusader_10Rnd_86x70_G29_Hybrid",
            "Crusader_10Rnd_86x70_G29_APSolid"
        };
        ammo[] = {
            "Crusader_B_86x70_Solid",
            "Crusader_B_86x70_Hybrid",
            "Crusader_B_86x70_AP_Solid"
        };
        VERSION_CONFIG;
    };
};

#include "CfgBettIR.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"