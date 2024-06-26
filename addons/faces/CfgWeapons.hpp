class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class Crusader_CamoCream: ACE_ItemCore {
		displayName = CSTRING(CamoCream_DisplayName);
		descriptionShort = CSTRING(CamoCream_DescShort);
        picture = QPATHTOF(assets\ui\CamoCream.paa);
		author = "Miss Heda";
        scope = 2;
        
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.1;
        };
    };
};