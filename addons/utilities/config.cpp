#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_main",
            "ace_optionsmenu",
            "ace_respawn",
            "ace_interaction",
            "ace_zeus",
            "cba_main",
            "crusader_main"
        };
        author = "Miss Heda";
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgMainMenuGui.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"