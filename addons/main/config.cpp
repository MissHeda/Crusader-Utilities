#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "ace_main"
        };
        author = "Miss Heda";
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@crusader_utility";
        name = "Kommandokräfte Crusader - Utility";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = CSTRING(URL);
        description = "";
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"