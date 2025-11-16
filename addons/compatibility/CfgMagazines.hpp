class CfgAmmo {
    class BWA3_B_86x70_Ball;

    // 1) Solid Monolithic
    class Crusader_B_86x70_Solid : BWA3_B_86x70_Ball {
        displayName      = "8,6x70mm Solid Monolithic";
        descriptionShort = "";
        hit           = 26;
        caliber       = 3.8;
        typicalSpeed  = 925;
        airFriction   = -0.00084;
        deflecting    = 10;
    };

    // 2) Hybrid
    class Crusader_B_86x70_Hybrid : BWA3_B_86x70_Ball {
        displayName      = "8,6x70mm Hybrid";
        descriptionShort = "";
        hit           = 28;
        caliber       = 3.0;
        typicalSpeed  = 935;
        airFriction   = -0.00078;
        deflecting    = 13;
    };

    // 3) AP Solid
    class Crusader_B_86x70_AP_Solid : BWA3_B_86x70_Ball {
        displayName      = "8,6x70mm AP Solid";
        descriptionShort = "";
        hit           = 25;
        caliber       = 4.4;
        typicalSpeed  = 920;
        airFriction   = -0.00086;
        deflecting    = 9;
    };
};

class CfgMagazines {
    class SPS_AI_AXMC_338_300gr_Scenar_Mag;
    class SPS_AI_AXMC_338_300gr_Scenar_Tracer_Mag;
    class SPS_AI_AXMC_338_300gr_Scenar_IR_Mag;

    class SPS_AI_AXMC_338_300gr_HPBT_Mag;

    class SPS_AI_AXMC_338_API526_Mag;

    class SPS_AI_AXMC_338_250gr_Naturalis_Mag;
    class SPS_AI_AXMC_338_250gr_Naturalis_Tracer_Mag;
    class SPS_AI_AXMC_338_250gr_Naturalis_IR_Mag;

    class SPS_AI_AXMC_338_300gr_Berger_Mag;
    class SPS_AI_AXMC_338_300gr_Berger_Mag_Tracer;
    class SPS_AI_AXMC_338_300gr_Berger_Mag_IR;

    class BWA3_10Rnd_86x70_G29;

    // --- Icons ---
    #define G29_ICON_STD  "\bwa3_g29\ui\bwa3_g29_mag_x_ca.paa"
    #define G29_ICON_TRAC "\bwa3_g29\ui\bwa3_g29_mag_tracer_x_ca.paa"

    // --- SCENAR 300gr ---
    class Crusader_G29_86x70_Scenar_300_Mag : SPS_AI_AXMC_338_300gr_Scenar_Mag {
        scope = 2; scopeArsenal = 2;
        displayName = "G29 10Rnd 8,6x70mm Scenar 300gr (Match)";
        displayNameShort = "Scenar 300gr";
        picture = G29_ICON_STD; count = 10;
    };
    class Crusader_G29_86x70_Scenar_300_Tracer_Mag : SPS_AI_AXMC_338_300gr_Scenar_Tracer_Mag {
        scope = 2; scopeArsenal = 2;
        displayName = "G29 10Rnd 8,6x70mm Scenar 300gr Tracer";
        displayNameShort = "Scenar Tracer";
        picture = G29_ICON_TRAC; count = 10;
    };
    class Crusader_G29_86x70_Scenar_300_IR_Mag : SPS_AI_AXMC_338_300gr_Scenar_IR_Mag {
        scope = 2; scopeArsenal = 2;
        displayName = "G29 10Rnd 8,6x70mm Scenar 300gr IR";
        displayNameShort = "Scenar IR";
        picture = G29_ICON_TRAC; count = 10;
    };

    // --- HPBT 300gr (OTM) ---
    class Crusader_G29_86x70_HPBT_300_Mag : SPS_AI_AXMC_338_300gr_HPBT_Mag {
        scope = 2; scopeArsenal = 2;
        displayName = "G29 10Rnd 8,6x70mm HPBT 300gr (OTM)";
        displayNameShort = "HPBT 300gr";
        picture = G29_ICON_STD; count = 10;
    };

    // --- API-526 (AP-I) ---
    class Crusader_G29_86x70_API526_Mag : SPS_AI_AXMC_338_API526_Mag {
        scope = 2; scopeArsenal = 2;
        displayName = "G29 10Rnd 8,6x70mm API-526 (AP-I)";
        displayNameShort = "API-526";
        picture = G29_ICON_STD; count = 10;
    };

    // --- Naturalis 250gr (Exp) ---
    class Crusader_G29_86x70_Naturalis_250_Mag : SPS_AI_AXMC_338_250gr_Naturalis_Mag {
        scope = 2; scopeArsenal = 2;
        displayName = "G29 10Rnd 8,6x70mm Naturalis 250gr (Exp)";
        displayNameShort = "Naturalis 250";
        picture = G29_ICON_STD; count = 10;
    };
    class Crusader_G29_86x70_Naturalis_250_Tracer_Mag : SPS_AI_AXMC_338_250gr_Naturalis_Tracer_Mag {
        scope = 2; scopeArsenal = 2;
        displayName = "G29 10Rnd 8,6x70mm Naturalis 250gr Tracer";
        displayNameShort = "Naturalis Tracer";
        picture = G29_ICON_TRAC; count = 10;
    };
    class Crusader_G29_86x70_Naturalis_250_IR_Mag : SPS_AI_AXMC_338_250gr_Naturalis_IR_Mag {
        scope = 2; scopeArsenal = 2;
        displayName = "G29 10Rnd 8,6x70mm Naturalis 250gr IR";
        displayNameShort = "Naturalis IR";
        picture = G29_ICON_TRAC; count = 10;
    };

    // --- Berger 300gr (Match) ---
    class Crusader_G29_86x70_Berger_300_Mag : SPS_AI_AXMC_338_300gr_Berger_Mag {
        scope = 2; scopeArsenal = 2;
        displayName = "G29 10Rnd 8,6x70mm Berger 300gr (Match)";
        displayNameShort = "Berger 300gr";
        picture = G29_ICON_STD; count = 10;
    };
    class Crusader_G29_86x70_Berger_300_Tracer_Mag : SPS_AI_AXMC_338_300gr_Berger_Mag_Tracer {
        scope = 2; scopeArsenal = 2;
        displayName = "G29 10Rnd 8,6x70mm Berger 300gr Tracer";
        displayNameShort = "Berger Tracer";
        picture = G29_ICON_TRAC; count = 10;
    };
    class Crusader_G29_86x70_Berger_300_IR_Mag : SPS_AI_AXMC_338_300gr_Berger_Mag_IR {
        scope = 2; scopeArsenal = 2;
        displayName = "G29 10Rnd 8,6x70mm Berger 300gr IR";
        displayNameShort = "Berger IR";
        picture = G29_ICON_TRAC; count = 10;
    };

    class Crusader_10Rnd_86x70_G29_Solid : BWA3_10Rnd_86x70_G29 {
        scope = 2; scopeArsenal = 2;
        displayName = "G29 10Rnd 8,6x70mm Solid Monolithic";
        displayNameShort = "Solid";
        picture = G29_ICON_STD; count = 10;
        ammo = "Crusader_B_86x70_Solid";
    };

    class Crusader_10Rnd_86x70_G29_Hybrid : BWA3_10Rnd_86x70_G29 {
        scope = 2; scopeArsenal = 2;
        displayName = "G29 10Rnd 8,6x70mm Hybrid";
        displayNameShort = "Hybrid";
        picture = G29_ICON_STD; count = 10;
        ammo = "Crusader_B_86x70_Hybrid";
    };

    class Crusader_10Rnd_86x70_G29_APSolid : BWA3_10Rnd_86x70_G29 {
        scope = 2; scopeArsenal = 2;
        displayName = "G29 10Rnd 8,6x70mm AP Solid";
        displayNameShort = "AP Solid";
        picture = G29_ICON_STD; count = 10;
        ammo = "Crusader_B_86x70_AP_Solid";
    };
};

class CfgWeapons {
    class BWA3_G29;
    class Rifle_Base_F;
    class Rifle_Long_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };

    //Blacklist G29 so only new one is showing
    class BWA3_G29: Rifle_Long_Base_F {
        scope = 0; 
        scopeArsenal = 0;
    };

    class Crusader_BWA3_G29 : BWA3_G29 {
        scope = 2; 
        scopeArsenal = 2;
        baseWeapon  = "Crusader_BWA3_G29";
        magazines[] = {
            // SPS-based (inkl. Tracer/IR)
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
    };
};