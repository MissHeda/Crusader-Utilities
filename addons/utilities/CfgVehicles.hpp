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

        // Crusader Position Tag System
        class Crusader_Group_System {
            displayName = CSTRING(Interaction_GroupSystem);
            icon = QPATHTOF(assets\ui\CrusaderLogo_64.paa);

            class Crusader_Group_System_Unassign {
                displayName = CSTRING(Interaction_GroupSystem_Unassign);
                condition = QUOTE(alive _player && (GETPVAR(_player,crusader_utilities_callsign,"") != ""));
                statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,""); if (GVAR(groupSystemInsigniaEnable)) then { [_player, ""] call BIS_fnc_setUnitInsignia; });
            };

            class Crusader_Group_System_Alpha {
                displayName = CSTRING(Interaction_GroupSystem_Alpha);
                condition = QUOTE(alive _player);

                class Crusader_Group_System_Alpha_1 {
                    displayName = CSTRING(Interaction_GroupSystem_Alpha_1);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"A-1"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "A1"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Alpha_2 {
                    displayName = CSTRING(Interaction_GroupSystem_Alpha_2);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"A-2"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "A2"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Alpha_3 {
                    displayName = CSTRING(Interaction_GroupSystem_Alpha_3);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"A-3"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "A3"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Alpha_4 {
                    displayName = CSTRING(Interaction_GroupSystem_Alpha_4);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"A-4"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "A4"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Alpha_5 {
                    displayName = CSTRING(Interaction_GroupSystem_Alpha_5);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"A-5"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "A5"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Alpha_6 {
                    displayName = CSTRING(Interaction_GroupSystem_Alpha_6);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"A-6"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "A6"] call BIS_fnc_setUnitInsignia; });
                };
            };

            class Crusader_Group_System_Bravo {
                displayName = CSTRING(Interaction_GroupSystem_Bravo);
                condition = QUOTE(alive _player);

                class Crusader_Group_System_Bravo_1 {
                    displayName = CSTRING(Interaction_GroupSystem_Bravo_1);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"B-1"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "B1"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Bravo_2 {
                    displayName = CSTRING(Interaction_GroupSystem_Bravo_2);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"B-2"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "B2"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Bravo_3 {
                    displayName = CSTRING(Interaction_GroupSystem_Bravo_3);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"B-3"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "B3"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Bravo_4 {
                    displayName = CSTRING(Interaction_GroupSystem_Bravo_4);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"B-4"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "B4"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Bravo_5 {
                    displayName = CSTRING(Interaction_GroupSystem_Bravo_5);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"B-5"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "B5"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Bravo_6 {
                    displayName = CSTRING(Interaction_GroupSystem_Bravo_6);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"B-6"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "B6"] call BIS_fnc_setUnitInsignia; });
                };
            };

            class Crusader_Group_System_Charlie {
                displayName = CSTRING(Interaction_GroupSystem_Charlie);
                condition = QUOTE(alive _player);

                class Crusader_Group_System_Charlie_1 {
                    displayName = CSTRING(Interaction_GroupSystem_Charlie_1);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"C-1"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "C1"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Charlie_2 {
                    displayName = CSTRING(Interaction_GroupSystem_Charlie_2);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"C-2"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "C2"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Charlie_3 {
                    displayName = CSTRING(Interaction_GroupSystem_Charlie_3);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"C-3"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "C3"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Charlie_4 {
                    displayName = CSTRING(Interaction_GroupSystem_Charlie_4);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"C-4"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "C4"] call BIS_fnc_setUnitInsignia; });
                };
            };

            class Crusader_Group_System_Delta {
                displayName = CSTRING(Interaction_GroupSystem_Delta);
                condition = QUOTE(alive _player);

                class Crusader_Group_System_Delta_1 {
                    displayName = CSTRING(Interaction_GroupSystem_Delta_1);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"D-1"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "D1"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Delta_2 {
                    displayName = CSTRING(Interaction_GroupSystem_Delta_2);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"D-2"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "D2"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Delta_3 {
                    displayName = CSTRING(Interaction_GroupSystem_Delta_3);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"D-3"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "D3"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Delta_4 {
                    displayName = CSTRING(Interaction_GroupSystem_Delta_4);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"D-4"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "D4"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Delta_5 {
                    displayName = CSTRING(Interaction_GroupSystem_Delta_5);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"D-5"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "D5"] call BIS_fnc_setUnitInsignia; });
                };
            };

            class Crusader_Group_System_Echo {
                displayName = CSTRING(Interaction_GroupSystem_Echo);
                condition = QUOTE(alive _player);

                class Crusader_Group_System_Echo_1 {
                    displayName = CSTRING(Interaction_GroupSystem_Echo_1);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"E-1"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "E1"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Echo_2 {
                    displayName = CSTRING(Interaction_GroupSystem_Echo_2);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"E-2"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "E2"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Echo_3 {
                    displayName = CSTRING(Interaction_GroupSystem_Echo_3);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"E-3"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "E3"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Echo_4 {
                    displayName = CSTRING(Interaction_GroupSystem_Echo_4);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"E-4"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "E4"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Echo_5 {
                    displayName = CSTRING(Interaction_GroupSystem_Echo_5);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"E-5"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "E5"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Echo_6 {
                    displayName = CSTRING(Interaction_GroupSystem_Echo_6);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"E-6"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "E6"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Echo_7 {
                    displayName = CSTRING(Interaction_GroupSystem_Echo_7);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"E-7"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "E7"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Echo_8 {
                    displayName = CSTRING(Interaction_GroupSystem_Echo_8);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"E-8"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "E8"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Echo_9 {
                    displayName = CSTRING(Interaction_GroupSystem_Echo_9);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"E-9"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "E9"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Echo_10 {
                    displayName = CSTRING(Interaction_GroupSystem_Echo_10);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"E-10"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "E10"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Echo_11 {
                    displayName = CSTRING(Interaction_GroupSystem_Echo_11);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"E-11"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "E11"] call BIS_fnc_setUnitInsignia; });
                };
                class Crusader_Group_System_Echo_12 {
                    displayName = CSTRING(Interaction_GroupSystem_Echo_12);
                    statement = QUOTE(SETPVAR(_player,crusader_utilities_callsign,"E-12"); if (GVAR(groupSystemInsigniaEnable)) then { [_player, "E12"] call BIS_fnc_setUnitInsignia; });
                };
            };
        };
    };
};