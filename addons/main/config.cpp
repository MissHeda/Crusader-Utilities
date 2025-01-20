#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_common",
            "ace_main",
            "cba_main"
        };
        author = "Miss Heda";
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

/* As of 2.02 this is broken and handeled by mod.cpp : https://community.bistudio.com/wiki/Mod.cpp/bin_File_Format
class CfgMods {
    class PREFIX {
        dir = "@crusader_utilities";
        name = "Kommandokräfte Crusader - Utilities";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = CSTRING(URL);
        description = "";
    };
};
*/

delete enableDebugConsole;
enableDebugConsole[] = { "76561198258492468" };
zeusCompositionScriptLevel = 2;