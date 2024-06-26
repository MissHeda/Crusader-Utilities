/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	                                                            PLEASE NOTE
// This addon contains content derived from:
// - ACE3 Designator Thermal                | by MIJAMIJAMIJA           | https://steamcommunity.com/sharedfiles/filedetails/?id=2366561364
// - Nightstalker TWS Scopes Pro            | by SN Mods                | https://steamcommunity.com/sharedfiles/filedetails/?id=1751899005
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class ItemInfo;
class InventoryOpticsItem_Base_F;
class CfgWeapons {
    class Binocular;
    class Laserdesignator: Binocular {
        visionMode[] = {
            "Normal",
            "NVG",
            "TI"
        };
        thermalMode[] = {
            0, //white-hot 
            1, //black-hot
            2, //green-hot
            3, //green/black-hot
            4, //red-hot
            5 //red/black-hot
        };
    };

    class ACE_Vector: Binocular {
        visionMode[] = {
            "Normal",
            "NVG",
            "TI"
        };
        thermalMode[] = {
            0, //white-hot 
            1, //black-hot
            2, //green-hot
            3, //green/black-hot
            4, //red-hot
            5 //red/black-hot
        };
    };

    class ACE_VectorDay: ACE_Vector {
        visionMode[] = {
            "Normal",
            "NVG",
            "TI"
        };
        thermalMode[] = {
            0, //white-hot 
            1, //black-hot
            2, //green-hot
            3, //green/black-hot
            4, //red-hot
            5 //red/black-hot
        };
    };

    class optic_tws;
    class optic_tws_pro: optic_tws {
        scope = 2;
        scopeArsenal=2;
        mass = 12;
        author = "SN";
        displayName = "TWS Pro";
        model = "\A3\weapons_f\acc\acco_tws_F";
        picture = "\a3\Weapons_F\acc\Data\UI\icon_optic_tws_ca.paa";
        descriptionShort = "Thermal Weapon Sight<br />Magnification: 4x-25x";
        weaponInfoType = "RscOptics_tws";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 2;
            modelOptics = "\A3\Weapons_f\acc\reticle_tws";
            optics = 1;
            opticType = 1;
            class OpticsModes {
                class SN_TWS {
                    cameraDir = "";
                    discreteDistance[] = {100,200,300,400,500,600,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500};
                    discreteDistanceInitIndex = 2;
                    discretefov[] = {0.062,0.008}; //no step zooming
                    discreteInitIndex = 0;
                    distanceZoomMax = 1500;
                    distanceZoomMin = 100;
                    memoryPointCamera = "opticView";
                    opticsDisablePeripherialVision = 1;
                    opticsFlare = 1;
                    opticsID = 1;
                    opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
                    opticsZoomInit = 0.0625; //Default
                    opticsZoomMax = 0.062; //0.092 = Wide / 0.062 = Narrow
                    opticsZoomMin = 0.008;
                    thermalMode[] = {0,1}; //WHOT
                    useModelOptics = 1;
                    visionMode[] = {"Normal","Ti","NVG"};
                };
            };
        };
    };

    class optic_Nightstalker;
    class optic_Nightstalker_pro: optic_Nightstalker {
        scope = 2;
        scopeArsenal=2;
        mass = 12;
        author = "SN";
        displayName = "Nightstalker Pro";
        picture = "\a3\Weapons_F\acc\Data\UI\icon_optic_Nightstalker_ca.paa";
        model = "\A3\weapons_f\acc\acco_Nightstalker_F";
        descriptionShort = "Nightstalker Sight<br />Magnification: 4x-25x";
        weaponInfoType = "RscOptics_nightstalker";
        class ItemInfo: InventoryOpticsItem_Base_F {
            mass = 2;
            modeloptics = "\A3\Weapons_f\acc\reticle_nightstalker_F";
            optics = 1;
            opticType = 1;
            class OpticsModes {
                class NCTALKEP {
                    cameraDir = "";
                    discreteDistance[] = {100,200,300,400,500,600,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500};
                    discreteDistanceInitIndex = 1;
                    discreteInitIndex = 0;
                    distanceZoomMax = 1500;
                    distanceZoomMin = 100;
                    memoryPointCamera = "opticView";
                    opticsDisablePeripherialVision = 1		;
                    opticsFlare = 1;
                    opticsID = 1;
                    opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
                    /*Default
                    opticsZoomInit = 0.0625;
                    opticsZoomMax = 0.0625;
                    opticsZoomMin = 0.025;
                    */
                    opticsZoomInit = 0.052;
                    opticsZoomMax = 0.062; //0.092=Wider
                    opticsZoomMin = 0.008;					
                    thermalMode[] = {5,6};
                    useModelOptics = 1;
                    visionMode[] = {"Normal","NVG","Ti"};
                };
                class Iron {
                    discreteDistance[] = {200};
                    discreteDistanceInitIndex = 1;
                    discreteInitIndex = 0;
                    distancezoommax = 1000;
                    distancezoommin = 100;
                    memorypointcamera = "eye";
                    opticsDisablePeripherialVision = 0;
                    opticsflare = 0;
                    opticsid = 2;
                    opticsPPEffects[] = {"",""};
                    opticszoominit = 0.75;
                    opticsZoomMax = 1.25;
                    opticsZoomMin = 0.25;
                    thermalMode[] = {5,6};
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
    };
};

class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail {
    class compatibleItems {
        optic_tws_pro = 1;
        optic_Nightstalker_pro = 1;
    };
};

