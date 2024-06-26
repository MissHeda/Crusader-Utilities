/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	                                                            PLEASE NOTE
// This addon contains content derived from:
// - BettIR BW Compat                       | by seven10                | https://steamcommunity.com/sharedfiles/filedetails/?id=2419798213
// - USP Gear Fix                           | by combatant              | https://steamcommunity.com/sharedfiles/filedetails/?id=2026102601 (!!! Has missing NVGs, add in future to support all & add attachments !!!)
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class BettIR_Config {
    class CompatibleAttachments {

        // BW Mod
        class bwa3_acc_varioray_irlaser {
            offset[] = {0.050000001,0.28,0.059999999};
        };
        class bwa3_acc_varioray_irlaser_black: bwa3_acc_varioray_irlaser {};
        class bwa3_acc_llm01_irlaser: bwa3_acc_varioray_irlaser {};
        class bwa3_acc_llm01_irlaser_green: bwa3_acc_varioray_irlaser {};
        class bwa3_acc_llm01_irlaser_tan: bwa3_acc_varioray_irlaser {};
        class bwa3_acc_llm01_irlaser_underbarrel: bwa3_acc_varioray_irlaser {};
    };
    class CompatibleNightvisionGoggles {

        // USP Mod
        class USP_GPNVG18 {
            offset[]={0.1,0.15000001,0.30000001};
        };
        class USP_GPNVG18_TAN: USP_GPNVG18 {};
        class USP_GPNVG18_TAN2: USP_GPNVG18 {};
        class USP_GPNVG18_GM_TAN: USP_GPNVG18 {};
        class USP_GPNVG18_WP_GM_TAN: USP_GPNVG18 {};
        class USP_GPNVG18_GM_TAR_TAN: USP_GPNVG18 {};
        class USP_GPNVG18_WP_GM_TAR_TAN: USP_GPNVG18 {};
        class USP_GPNVG18_TAR_TAN: USP_GPNVG18 {};
        class USP_GPNVG18_TAR_TAN2: USP_GPNVG18 {};
        class USP_GPNVG18_WP_GM_TAR_TAN: USP_GPNVG18 {};
        class USP_PVS15: USP_GPNVG18 {};
        class USP_PVS31: USP_GPNVG18 {};
        class USP_PVS31_COMPACT: USP_GPNVG18 {};
        class USP_PVS31_HIGH: USP_GPNVG18 {};
        class USP_PVS31_LOW: USP_GPNVG18 {};
        class USP_PVS31_MONOL: USP_GPNVG18 {};
        class USP_PVS31_MONOR: USP_GPNVG18 {};
        class USP_PVS31_TAN: USP_GPNVG18 {};
        class USP_PVS31_TAN2: USP_GPNVG18 {};
        class USP_NSEAS: USP_GPNVG18 {};
        class USP_PVS14: USP_GPNVG18 {};
    };
};