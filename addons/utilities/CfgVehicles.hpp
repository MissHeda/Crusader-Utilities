class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACEGVAR(zeus,create) { // Override ace zeus with new conditon
                condition = QUOTE(call FUNC(createZeusCondition));
            };
            class Crusader_Loadout_System {
                displayName = CSTRING(Interaction_LoadoutSystem);
                icon = QPATHTOF(assets\ui\CrusaderLogo_64.paa);

                class Save_Loadout {
                    displayName = CSTRING(Interaction_LoadoutSystem_Save);
                    icon = QPATHTOF(assets\ui\Crusader_Interaction_Save.paa);

                    class Save_Loadout_1 {
                        displayName = CSTRING(Interaction_LoadoutSystem_Loadout_1);
                        condition = QUOTE([ARR_3(_player,'Save',1)] call FUNC(loadoutDisplayCondition));
                        statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(loadout_1),(_player call CBA_fnc_getLoadout))]);
                        showDisabled = 0;
                        icon = QPATHTOF(assets\ui\Crusader_Interaction_Save.paa);
                    };
                    class Save_Loadout_2: Save_Loadout_1 {
                        displayName = CSTRING(Interaction_LoadoutSystem_Loadout_2);
                        condition = QUOTE([ARR_3(_player,'Save',2)] call FUNC(loadoutDisplayCondition));
                        statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(loadout_2),(_player call CBA_fnc_getLoadout))]);
                    };
                    class Save_Loadout_3: Save_Loadout_1 {
                        displayName = CSTRING(Interaction_LoadoutSystem_Loadout_3);
                        condition = QUOTE([ARR_3(_player,'Save',3)] call FUNC(loadoutDisplayCondition));
                        statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(loadout_3),(_player call CBA_fnc_getLoadout))]);
                    };
                    class Save_Loadout_4: Save_Loadout_1 {
                        displayName = CSTRING(Interaction_LoadoutSystem_Loadout_4);
                        condition = QUOTE([ARR_3(_player,'Save',4)] call FUNC(loadoutDisplayCondition));
                        statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(loadout_4),(_player call CBA_fnc_getLoadout))]);
                    };
                    class Save_Loadout_5: Save_Loadout_1 {
                        displayName = CSTRING(Interaction_LoadoutSystem_Loadout_5);
                        condition = QUOTE([ARR_3(_player,'Save',5)] call FUNC(loadoutDisplayCondition));
                        statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(loadout_5),(_player call CBA_fnc_getLoadout))]);
                    };
                    class Save_Loadout_6: Save_Loadout_1 {
                        displayName = CSTRING(Interaction_LoadoutSystem_Loadout_6);
                        condition = QUOTE([ARR_3(_player,'Save',6)] call FUNC(loadoutDisplayCondition));
                        statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(loadout_6),(_player call CBA_fnc_getLoadout))]);
                    };
                };

                class Load_Loadout {
                    displayName = CSTRING(Interaction_LoadoutSystem_Load);
                    icon = QPATHTOF(assets\ui\Crusader_Interaction_Rearm.paa);

                    class Load_Loadout_1 {
                        displayName = CSTRING(Interaction_LoadoutSystem_Loadout_1);
                        condition = QUOTE([ARR_3(_player,'Load',1)] call FUNC(loadoutDisplayCondition));
                        statement = QUOTE([ARR_2(_player,(profileNamespace getVariable QQGVAR(loadout_1)))] call CBA_fnc_setLoadout);
                        showDisabled = 0;
                        icon = QPATHTOF(assets\ui\Crusader_Interaction_Rearm.paa);
                    };
                    class Load_Loadout_2: Load_Loadout_1 {
                        displayName = CSTRING(Interaction_LoadoutSystem_Loadout_2);
                        condition = QUOTE([ARR_3(_player,'Load',2)] call FUNC(loadoutDisplayCondition));
                        statement = QUOTE([ARR_2(_player,(profileNamespace getVariable QQGVAR(loadout_2)))] call CBA_fnc_setLoadout);
                    };
                    class Load_Loadout_3: Load_Loadout_1 {
                        displayName = CSTRING(Interaction_LoadoutSystem_Loadout_3);
                        condition = QUOTE([ARR_3(_player,'Load',3)] call FUNC(loadoutDisplayCondition));
                        statement = QUOTE([ARR_2(_player,(profileNamespace getVariable QQGVAR(loadout_3)))] call CBA_fnc_setLoadout);
                    };
                    class Load_Loadout_4: Load_Loadout_1 {
                        displayName = CSTRING(Interaction_LoadoutSystem_Loadout_4);
                        condition = QUOTE([ARR_3(_player,'Load',4)] call FUNC(loadoutDisplayCondition));
                        statement = QUOTE([ARR_2(_player,(profileNamespace getVariable QQGVAR(loadout_4)))] call CBA_fnc_setLoadout);
                    };
                    class Load_Loadout_5: Load_Loadout_1 {
                        displayName = CSTRING(Interaction_LoadoutSystem_Loadout_5);
                        condition = QUOTE([ARR_3(_player,'Load',5)] call FUNC(loadoutDisplayCondition));
                        statement = QUOTE([ARR_2(_player,(profileNamespace getVariable QQGVAR(loadout_5)))] call CBA_fnc_setLoadout);
                    };
                    class Load_Loadout_6: Load_Loadout_1 {
                        displayName = CSTRING(Interaction_LoadoutSystem_Loadout_6);
                        condition = QUOTE([ARR_3(_player,'Load',6)] call FUNC(loadoutDisplayCondition));
                        statement = QUOTE([ARR_2(_player,(profileNamespace getVariable QQGVAR(loadout_6)))] call CBA_fnc_setLoadout);
                    };
                };

                class Crusader_Loadout_System_Settings {
                    displayName = CSTRING(Interaction_LoadoutSystem_Settings);
                    icon = QPATHTOF(assets\ui\Crusader_Interaction_Settings.paa);

                    class Set_Spawn_Loadout {
                        displayName = CSTRING(Interaction_LoadoutSystem_Spawn);
                        icon = QPATHTOF(assets\ui\Crusader_Interaction_Inventory.paa);

                        class Set_Spawn_Loadout_nil {
                            displayName = CSTRING(Interaction_LoadoutSystem_Default);
                            condition = QUOTE([ARR_3(_player,'Spawn',0)] call FUNC(loadoutDisplayCondition));
                            statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(spawnLoadout),nil)]);
                            showDisabled = 0;
                            icon = QPATHTOF(assets\ui\Crusader_Interaction_Inventory.paa);
                        };
                        class Set_Spawn_Loadout_1: Set_Spawn_Loadout_nil {
                            displayName = CSTRING(Interaction_LoadoutSystem_Loadout_1);
                            condition = QUOTE([ARR_3(_player,'Spawn',1)] call FUNC(loadoutDisplayCondition));
                            statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(spawnLoadout),1)]);
                        };
                        class Set_Spawn_Loadout_2: Set_Spawn_Loadout_nil {
                            displayName = CSTRING(Interaction_LoadoutSystem_Loadout_2);
                            condition = QUOTE([ARR_3(_player,'Spawn',2)] call FUNC(loadoutDisplayCondition));
                            statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(spawnLoadout),2)]);
                        };
                        class Set_Spawn_Loadout_3: Set_Spawn_Loadout_nil {
                            displayName = CSTRING(Interaction_LoadoutSystem_Loadout_3);
                            condition = QUOTE([ARR_3(_player,'Spawn',3)] call FUNC(loadoutDisplayCondition));
                            statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(spawnLoadout),3)]);
                        };
                        class Set_Spawn_Loadout_4: Set_Spawn_Loadout_nil {
                            displayName = CSTRING(Interaction_LoadoutSystem_Loadout_4);
                            condition = QUOTE([ARR_3(_player,'Spawn',4)] call FUNC(loadoutDisplayCondition));
                            statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(spawnLoadout),4)]);
                        };
                        class Set_Spawn_Loadout_5: Set_Spawn_Loadout_nil {
                            displayName = CSTRING(Interaction_LoadoutSystem_Loadout_5);
                            condition = QUOTE([ARR_3(_player,'Spawn',5)] call FUNC(loadoutDisplayCondition));
                            statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(spawnLoadout),5)]);
                        };
                        class Set_Spawn_Loadout_6: Set_Spawn_Loadout_nil {
                            displayName = CSTRING(Interaction_LoadoutSystem_Loadout_6);
                            condition = QUOTE([ARR_3(_player,'Spawn',6)] call FUNC(loadoutDisplayCondition));
                            statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(spawnLoadout),6)]);
                        };
                    };

                    class Set_Respawn_Loadout {
                        displayName = CSTRING(Interaction_LoadoutSystem_Respawn);
                        icon = QPATHTOF(assets\ui\Crusader_Interaction_Inventory.paa);

                        class Set_Respawn_Loadout_nil {
                            displayName = CSTRING(Interaction_LoadoutSystem_Default);
                            condition = QUOTE([ARR_3(_player,'Respawn',0)] call FUNC(loadoutDisplayCondition));
                            statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(respawnLoadout),nil)]);
                            showDisabled = 0;
                            icon = QPATHTOF(assets\ui\Crusader_Interaction_Inventory.paa);
                        };
                        class Set_Respawn_Loadout_BeforeDeath: Set_Respawn_Loadout_nil {
                            displayName = CSTRING(Interaction_LoadoutSystem_Respawn_DeathGear);
                            condition = QUOTE([ARR_3(_player,'Respawn',0)] call FUNC(loadoutDisplayCondition));
                            statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(respawnLoadout),0)]);
                        };
                        class Set_Respawn_Loadout_1: Set_Respawn_Loadout_nil {
                            displayName = CSTRING(Interaction_LoadoutSystem_Loadout_1);
                            condition = QUOTE([ARR_3(_player,'Respawn',1)] call FUNC(loadoutDisplayCondition));
                            statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(respawnLoadout),1)]);
                        };
                        class Set_Respawn_Loadout_2: Set_Respawn_Loadout_nil {
                            displayName = CSTRING(Interaction_LoadoutSystem_Loadout_2);
                            condition = QUOTE([ARR_3(_player,'Respawn',2)] call FUNC(loadoutDisplayCondition));
                            statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(respawnLoadout),2)]);
                        };
                        class Set_Respawn_Loadout_3: Set_Respawn_Loadout_nil {
                            displayName = CSTRING(Interaction_LoadoutSystem_Loadout_3);
                            condition = QUOTE([ARR_3(_player,'Respawn',3)] call FUNC(loadoutDisplayCondition));
                            statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(respawnLoadout),3)]);
                        };
                        class Set_Respawn_Loadout_4: Set_Respawn_Loadout_nil {
                            displayName = CSTRING(Interaction_LoadoutSystem_Loadout_4);
                            condition = QUOTE([ARR_3(_player,'Respawn',4)] call FUNC(loadoutDisplayCondition));
                            statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(respawnLoadout),4)]);
                        };
                        class Set_Respawn_Loadout_5: Set_Respawn_Loadout_nil {
                            displayName = CSTRING(Interaction_LoadoutSystem_Loadout_5);
                            condition = QUOTE([ARR_3(_player,'Respawn',5)] call FUNC(loadoutDisplayCondition));
                            statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(respawnLoadout),5)]);
                        };
                        class Set_Respawn_Loadout_6: Set_Respawn_Loadout_nil {
                            displayName = CSTRING(Interaction_LoadoutSystem_Loadout_6);
                            condition = QUOTE([ARR_3(_player,'Respawn',6)] call FUNC(loadoutDisplayCondition));
                            statement = QUOTE(profileNamespace setVariable [ARR_2(QQGVAR(respawnLoadout),6)]);
                        };
                    };
                };
            };
        };
    };
};
