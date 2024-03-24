class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class GVAR(create) {
                displayName = ACECSTRING(Zeus,CreateZeus);
                condition = QUOTE(_player call FUNC(createZeusCondition));
                exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                statement = QUOTE(ACEGVAR(zeus,zeus) = objNull; [ARR_2(QQACEGVAR(zeus,createZeus),ACE_player)] call CBA_fnc_serverEvent);
                showDisabled = 1;
                icon = "\A3\Ui_F_Curator\Data\Logos\arma3_curator_eye_32_ca.paa";
            };
        };
    };
};
