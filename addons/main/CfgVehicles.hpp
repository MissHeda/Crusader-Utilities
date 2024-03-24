class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class GVAR(create) {
                displayName = ACECSTRING(CreateZeus);
                condition = QUOTE(call FUNC(createZeusCondition));
                exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};
                statement = QUOTE(ACEGVAR(zeus) = objNull; [ARR_2(QQACEGVAR(createZeus),ACE_player)] call CBA_fnc_serverEvent);
                showDisabled = 1;
                icon = "\A3\Ui_F_Curator\Data\Logos\arma3_curator_eye_32_ca.paa";
            };
        };
    };
};
