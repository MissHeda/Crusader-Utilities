/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//	                                                            PLEASE NOTE
// This addon contains content derived from:
// - TFTW Female Characters                | by Iceman                | https://steamcommunity.com/sharedfiles/filedetails/?id=2021778690
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class CfgFaces {
    class Man_A3 {
        class Default;
        class Carter: Default {
            author = "Iceman";
            displayname = "Carter";
            head = "female_head_bun";
            texture = QPATHTOF(assets\models\female_head_bun\female_head_bun_texture_carter.paa);
            material = QPATHTOF(assets\models\female_head_bun\female_head_bun.rvmat);
            materialWounded1 = QPATHTOF(assets\models\female_head_bun\female_head_bun.rvmat);
            materialWounded2 = QPATHTOF(assets\models\female_head_bun\female_head_bun.rvmat);
            textureHL = QPATHTOF(assets\models\female_head_bun\female_head_bun_hl_co.paa);
            materialHL = QPATHTOF(assets\models\female_head_bun\female_head_bun_hl.rvmat);
            textureHL2 = QPATHTOF(assets\models\female_head_bun\female_head_bun_hl_co.paa);
            materialHL2 = QPATHTOF(assets\models\female_head_bun\female_head_bun_hl.rvmat);
        };
        
        class Carter_Tactical: Carter {
            displayname = "Carter (Tactical)";
            texture = QPATHTOF(assets\models\female_head_bun\female_head_bun_texture_carter_tactical.paa);
        };
        
        class Medrano: Carter {
            displayname = "Medrano";
            texture = QPATHTOF(assets\models\female_head_bun\female_head_bun_texture_medrano.paa);
        };
        
        class Medrano_Tactical: Carter {
            displayname = "Medrano (Tactical)";
            texture = QPATHTOF(assets\models\female_head_bun\female_head_bun_texture_medrano_tactical.paa);
        };
    };
};

class CfgHeads {
    class DefaultHead_A3;
    class female_head_bun: DefaultHead_A3 {
        model = QPATHTOF(assets\models\female_head_bun\female_head_bun.p3d);
        selectionHeadWound = "injury_head";
        selectionPersonality = "personality";
    };
};
