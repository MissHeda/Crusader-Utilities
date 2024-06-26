#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "crusader_CamoCream"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Characters_F",
			"A3_Characters_F_Heads",
            "ace_interaction",
            "cba_main",
            "crusader_main"
        };
        author = "Miss Heda";
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFaces.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"