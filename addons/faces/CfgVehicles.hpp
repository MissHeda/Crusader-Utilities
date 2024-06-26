class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class Crusader_Camo_Cream_Apply {
                    displayName = CSTRING(Interaction_Apply);
                    condition = QUOTE([ARR_2(_player,'Apply')] call FUNC(conditionCamoCream));
                    statement = QUOTE(_player call FUNC(toggleCamoCream));
                    showDisabled = 0;
                    icon = QPATHTOF(assets\ui\Interaction_CamoCream_Apply.paa);
                };
                
                class Crusader_Camo_Cream_Remove {
                    displayName = CSTRING(Interaction_Remove);
                    condition = QUOTE([ARR_2(_player,'Remove')] call FUNC(conditionCamoCream));
                    statement = QUOTE(_player call FUNC(toggleCamoCream));
                    showDisabled = 0;
                    icon = QPATHTOF(assets\ui\Interaction_CamoCream_Remove.paa);
                };
            };
        };
    };
};
