/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	                                                            PLEASE NOTE
// This addon contains content derived from:
// - USP Gear Fix                           | by combatant              | https://steamcommunity.com/sharedfiles/filedetails/?id=2026102601
// - BettIR USP Compatibility Ruby          | by t3quila                | https://steamcommunity.com/sharedfiles/filedetails/?id=3479359499
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class BettIR_Config {
    class CompatibleAttachments {

        // ---- BW Mod ----
        
        class bwa3_acc_varioray_irlaser {
            offset[] = {0.035,0.25,0.047};
        };
        class bwa3_acc_varioray_irlaser_black: bwa3_acc_varioray_irlaser {};
        class bwa3_acc_llm01_irlaser: bwa3_acc_varioray_irlaser {};
        class bwa3_acc_llm01_irlaser_green: bwa3_acc_varioray_irlaser {};
        class bwa3_acc_llm01_irlaser_tan: bwa3_acc_varioray_irlaser {};
        class bwa3_acc_llm01_irlaser_underbarrel: bwa3_acc_varioray_irlaser {};


        // ---- Project True Viking Mod ----

        class ptv_LLM {
            offset[] = {0.05,0.3,0.074};
        };
        class ptv_LLM01: ptv_LLM {};
        class ptv_LLM_des: ptv_LLM {};

    };
    class CompatibleNightvisionGoggles {

        // ---- USP Mod ----
        // GPNVG18 Base
        class USP_GPNVG18_R {
            offset[] = {-0.039999999, 0.2, 0.13249999};
        };
        class USP_GPNVG18_BLK: USP_GPNVG18_R {};
        class USP_GPNVG18_BLK2: USP_GPNVG18_BLK {};
        class USP_GPNVG18_TAN: USP_GPNVG18_BLK {};
        class USP_GPNVG18_TAN2: USP_GPNVG18_BLK {};
        class USP_GPNVG18_TAR_BLK: USP_GPNVG18_BLK {};
        class USP_GPNVG18_TAR_BLK2: USP_GPNVG18_TAR_BLK {};
        class USP_GPNVG18_TAR_TAN: USP_GPNVG18_TAR_BLK {};
        class USP_GPNVG18_TAR_TAN2: USP_GPNVG18_TAR_BLK {};
        class USP_GPNVG18_CB_BLK: USP_GPNVG18_R {};
        class USP_GPNVG18_CB_TAN: USP_GPNVG18_CB_BLK {};
        class USP_GPNVG18_CB2_BLK: USP_GPNVG18_R {};
        class USP_GPNVG18_CB2_TAN: USP_GPNVG18_CB2_BLK {};
        class USP_GPNVG18_CB3_BLK: USP_GPNVG18_R {};
        class USP_GPNVG18_CB3_TAN: USP_GPNVG18_CB3_BLK {};
        class USP_GPNVG18_CB_TAR_BLK: USP_GPNVG18_R {};
        class USP_GPNVG18_CB_TAR_TAN: USP_GPNVG18_CB_TAR_BLK {};
        class USP_GPNVG18_CB2_TAR_BLK: USP_GPNVG18_R {};
        class USP_GPNVG18_CB2_TAR_TAN: USP_GPNVG18_CB2_TAR_BLK {};
        class USP_GPNVG18_CB3_TAR_BLK: USP_GPNVG18_R {};
        class USP_GPNVG18_CB3_TAR_TAN: USP_GPNVG18_CB3_TAR_BLK {};
        class USP_GPNVG18_GM_BLK: USP_GPNVG18_R {};
        class USP_GPNVG18_GM_TAN: USP_GPNVG18_GM_BLK {};
        class USP_GPNVG18_GM_TAR_BLK: USP_GPNVG18_GM_BLK {};
        class USP_GPNVG18_GM_TAR_TAN: USP_GPNVG18_GM_BLK {};
        class USP_GPNVG18_WP_BLK: USP_GPNVG18_R {};
        class USP_GPNVG18_WP_BLK2: USP_GPNVG18_WP_BLK {};
        class USP_GPNVG18_WP_TAN: USP_GPNVG18_WP_BLK {};
        class USP_GPNVG18_WP_TAN2: USP_GPNVG18_WP_BLK {};
        class USP_GPNVG18_WP_CB_BLK: USP_GPNVG18_R {};
        class USP_GPNVG18_WP_CB_TAN: USP_GPNVG18_WP_CB_BLK {};
        class USP_GPNVG18_WP_CB2_BLK: USP_GPNVG18_R {};
        class USP_GPNVG18_WP_CB2_TAN: USP_GPNVG18_WP_CB2_BLK {};
        class USP_GPNVG18_WP_CB3_BLK: USP_GPNVG18_R {};
        class USP_GPNVG18_WP_CB3_TAN: USP_GPNVG18_WP_CB3_BLK {};
        class USP_GPNVG18_WP_CB_TAR_BLK: USP_GPNVG18_R {};
        class USP_GPNVG18_WP_CB_TAR_TAN: USP_GPNVG18_WP_CB_TAR_BLK {};
        class USP_GPNVG18_WP_CB2_TAR_BLK: USP_GPNVG18_R {};
        class USP_GPNVG18_WP_CB2_TAR_TAN: USP_GPNVG18_WP_CB2_TAR_BLK {};
        class USP_GPNVG18_WP_CB3_TAR_BLK: USP_GPNVG18_R {};
        class USP_GPNVG18_WP_CB3_TAR_TAN: USP_GPNVG18_WP_CB3_TAR_BLK {};
        class USP_GPNVG18_WP_TAR_BLK: USP_GPNVG18_WP_BLK {};
        class USP_GPNVG18_WP_TAR_BLK2: USP_GPNVG18_WP_TAR_BLK {};
        class USP_GPNVG18_WP_TAR_TAN: USP_GPNVG18_WP_TAR_BLK {};
        class USP_GPNVG18_WP_TAR_TAN2: USP_GPNVG18_WP_TAR_BLK {};
        class USP_GPNVG18_WP_GM_BLK: USP_GPNVG18_R {};
        class USP_GPNVG18_WP_GM_TAN: USP_GPNVG18_WP_GM_BLK {};
        class USP_GPNVG18_WP_GM_TAR_BLK: USP_GPNVG18_WP_GM_BLK {};
        class USP_GPNVG18_WP_GM_TAR_TAN: USP_GPNVG18_WP_GM_BLK {};

        // NSEAS
        class USP_NSEAS_R {
            offset[] = {-0.050000001, 0.1708, 0.1};
        };
        class USP_NSEAS: USP_NSEAS_R {};

        // PVS14
        class USP_PVS14_R {
            offset[] = {-0.072499998, 0.13349999, 0.094599999};
        };
        class USP_PVS14: USP_PVS14_R {};
        class USP_PVS14_TAR: USP_PVS14 {};
        class USP_PVS14_WP: USP_PVS14_R {};
        class USP_PVS14_WP_TAR: USP_PVS14_WP {};

        // PVS15
        class USP_PVS15_R {
            offset[] = {-0.0381, 0, 0.12};
        };
        class USP_PVS15: USP_PVS15_R {};
        class USP_PVS15_TAR: USP_PVS15 {};
        class USP_PVS15_WP: USP_PVS15_R {};
        class USP_PVS15_WP_TAR: USP_PVS15_WP {};

        // PVS31
        class USP_PVS31_R {
            offset[] = {-0.076200001, 0, 0.12};
        };
        class USP_PVS31_BLK: USP_PVS31_R {};
        class USP_PVS31_MID_BLK: USP_PVS31_R {};
        class USP_PVS31_HIGH_BLK: USP_PVS31_R {};
        class USP_PVS31_LOW_BLK: USP_PVS31_R {};
        class USP_PVS31_MONOL_BLK: USP_PVS31_R {};
        class USP_PVS31_MONOR_BLK: USP_PVS31_R {};
        class USP_PVS31_BLK2: USP_PVS31_BLK {};
        class USP_PVS31_TAN: USP_PVS31_BLK {};
        class USP_PVS31_TAN2: USP_PVS31_BLK {};
        class USP_PVS31_HIGH_BLK2: USP_PVS31_HIGH_BLK {};
        class USP_PVS31_HIGH_TAN: USP_PVS31_HIGH_BLK {};
        class USP_PVS31_HIGH_TAN2: USP_PVS31_HIGH_BLK {};
        class USP_PVS31_LOW_BLK2: USP_PVS31_LOW_BLK {};
        class USP_PVS31_LOW_TAN: USP_PVS31_LOW_BLK {};
        class USP_PVS31_LOW_TAN2: USP_PVS31_LOW_BLK {};
        class USP_PVS31_MID_BLK2: USP_PVS31_MID_BLK {};
        class USP_PVS31_MID_TAN: USP_PVS31_MID_BLK {};
        class USP_PVS31_MID_TAN2: USP_PVS31_MID_BLK {};
        class USP_PVS31_TAR: USP_PVS31_BLK {};
        class USP_PVS31_TAR_BLK2: USP_PVS31_BLK {};
        class USP_PVS31_TAR_TAN: USP_PVS31_BLK {};
        class USP_PVS31_TAR_TAN2: USP_PVS31_BLK {};
        class USP_PVS31_TAR_HIGH: USP_PVS31_BLK {};
        class USP_PVS31_TAR_HIGH_BLK2: USP_PVS31_BLK {};
        class USP_PVS31_TAR_HIGH_TAN: USP_PVS31_BLK {};
        class USP_PVS31_TAR_HIGH_TAN2: USP_PVS31_BLK {};
        class USP_PVS31_TAR_LOW: USP_PVS31_BLK {};
        class USP_PVS31_TAR_LOW_BLK2: USP_PVS31_BLK {};
        class USP_PVS31_TAR_LOW_TAN: USP_PVS31_BLK {};
        class USP_PVS31_TAR_LOW_TAN2: USP_PVS31_BLK {};
        class USP_PVS31_TAR_MID: USP_PVS31_BLK {};
        class USP_PVS31_TAR_MID_BLK2: USP_PVS31_BLK {};
        class USP_PVS31_TAR_MID_TAN: USP_PVS31_BLK {};
        class USP_PVS31_TAR_MID_TAN2: USP_PVS31_BLK {};
        class USP_PVS31_WP_BLK: USP_PVS31_R {};
        class USP_PVS31_WP_MID_BLK: USP_PVS31_R {};
        class USP_PVS31_WP_HIGH_BLK: USP_PVS31_R {};
        class USP_PVS31_WP_LOW_BLK: USP_PVS31_R {};
        class USP_PVS31_WP_MONOL_BLK: USP_PVS31_R {};
        class USP_PVS31_WP_MONOR_BLK: USP_PVS31_R {};
        class USP_PVS31_WP_BLK2: USP_PVS31_WP_BLK {};
        class USP_PVS31_WP_TAN: USP_PVS31_WP_BLK {};
        class USP_PVS31_WP_TAN2: USP_PVS31_WP_BLK {};
        class USP_PVS31_WP_HIGH_BLK2: USP_PVS31_WP_HIGH_BLK {};
        class USP_PVS31_WP_HIGH_TAN: USP_PVS31_WP_HIGH_BLK {};
        class USP_PVS31_WP_HIGH_TAN2: USP_PVS31_WP_HIGH_BLK {};
        class USP_PVS31_WP_LOW_BLK2: USP_PVS31_WP_LOW_BLK {};
        class USP_PVS31_WP_LOW_TAN: USP_PVS31_WP_LOW_BLK {};
        class USP_PVS31_WP_LOW_TAN2: USP_PVS31_WP_LOW_BLK {};
        class USP_PVS31_WP_MID_BLK2: USP_PVS31_WP_MID_BLK {};
        class USP_PVS31_WP_MID_TAN: USP_PVS31_WP_MID_BLK {};
        class USP_PVS31_WP_MID_TAN2: USP_PVS31_WP_MID_BLK {};
        class USP_PVS31_WP_TAR_BLK: USP_PVS31_WP_BLK {};
        class USP_PVS31_WP_TAR_BLK2: USP_PVS31_WP_BLK {};
        class USP_PVS31_WP_TAR_TAN: USP_PVS31_WP_BLK {};
        class USP_PVS31_WP_TAR_TAN2: USP_PVS31_WP_BLK {};
        class USP_PVS31_WP_TAR_HIGH_BLK: USP_PVS31_WP_BLK {};
        class USP_PVS31_WP_TAR_HIGH_BLK2: USP_PVS31_WP_BLK {};
        class USP_PVS31_WP_TAR_HIGH_TAN: USP_PVS31_WP_BLK {};
        class USP_PVS31_WP_TAR_HIGH_TAN2: USP_PVS31_WP_BLK {};
        class USP_PVS31_WP_TAR_LOW_BLK: USP_PVS31_WP_BLK {};
        class USP_PVS31_WP_TAR_LOW_BLK2: USP_PVS31_WP_BLK {};
        class USP_PVS31_WP_TAR_LOW_TAN: USP_PVS31_WP_BLK {};
        class USP_PVS31_WP_TAR_LOW_TAN2: USP_PVS31_WP_BLK {};
        class USP_PVS31_WP_TAR_MID_BLK: USP_PVS31_WP_BLK {};
        class USP_PVS31_WP_TAR_MID_BLK2: USP_PVS31_WP_BLK {};
        class USP_PVS31_WP_TAR_MID_TAN: USP_PVS31_WP_BLK {};
        class USP_PVS31_WP_TAR_MID_TAN2: USP_PVS31_WP_BLK {};
    };
};