#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "crusader_main"
        };
        author = "Miss Heda";
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };

    class training_mag_compat_SAW_556
	{
		units[] = {
			""
		};
		weapons[] = {
			""
		};
		magazines[] = {
			"BWA3_30Rnd_556x45_G36_Training_Blank",
			"BWA3_30Rnd_556x45_G36_Training_Rubber"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"training_mag_common"};
	};
};

#include "CfgBettIR.hpp"
#include "CfgCustomRanks.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"