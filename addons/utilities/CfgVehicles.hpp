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
            displayName = "Elementezuweisung";
            icon = "z\crusader\addons\utilities\assets\ui\CrusaderLogo_64.paa";

            class Crusader_Group_System_Unassign {
                displayName = "Patches ablegen";
                condition = "alive player && count(profileNamespace getVariable ['Crusader_Group_System_Assiged', []]) != 0";
                statement = "SETPVAR(player,crusader_utilities_callsign,""""); if (GVAR(groupSystemInsigniaEnable)) then { [player, """"] call BIS_fnc_setUnitInsignia; }; profileNamespace setVariable ['Crusader_Group_System_Assiged', []]";
            };

            class Crusader_Group_System_Alpha {
                displayName = "Element Alpha";
                condition = "alive player";

                class Crusader_Group_System_Alpha_1 {
                    displayName = "Element Alpha 1";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""A-1""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""A1""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Alpha_2 {
                    displayName = "Element Alpha 2";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""A-2""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""A2""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Alpha_3 {
                    displayName = "Element Alpha 3";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""A-3""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""A3""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Alpha_4 {
                    displayName = "Element Alpha 4";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""A-4""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""A4""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Alpha_5 {
                    displayName = "Element Alpha 5";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""A-5""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""A5""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Alpha_6 {
                    displayName = "Element Alpha 6";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""A-6""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""A6""] call BIS_fnc_setUnitInsignia; };"; 
                };
            };

            class Crusader_Group_System_Bravo {
                displayName = "Element Bravo";
                condition = "alive player";

                class Crusader_Group_System_Bravo_1 {
                    displayName = "Element Bravo 1";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""B-1""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""B1""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Bravo_2 {
                    displayName = "Element Bravo 2";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""B-2""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""B2""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Bravo_3 {
                    displayName = "Element Bravo 3";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""B-3""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""B3""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Bravo_4 {
                    displayName = "Element Bravo 4";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""B-4""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""B4""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Bravo_5 {
                    displayName = "Element Bravo 5";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""B-5""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""B5""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Bravo_6 {
                    displayName = "Element Bravo 6";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""B-6""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""B6""] call BIS_fnc_setUnitInsignia; };"; 
                };
            };

            class Crusader_Group_System_Charlie {
                displayName = "Element Charlie";
                condition = "alive player";

                class Crusader_Group_System_Charlie_1 {
                    displayName = "Element Charlie 1";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""C-1""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""C1""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Charlie_2 {
                    displayName = "Element Charlie 2";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""C-2""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""C2""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Charlie_3 {
                    displayName = "Element Charlie 3";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""C-3""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""C3""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Charlie_4 {
                    displayName = "Element Charlie 4";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""C-4""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""C4""] call BIS_fnc_setUnitInsignia; };"; 
                };
            };

            class Crusader_Group_System_Delta {
                displayName = "Element Delta";
                condition = "alive player";

                class Crusader_Group_System_Delta_1 {
                    displayName = "Element Delta 1";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""D-1""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""D1""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Delta_2 {
                    displayName = "Element Delta 2";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""D-2""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""D2""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Delta_3 {
                    displayName = "Element Delta 3";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""D-3""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""D3""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Delta_4 {
                    displayName = "Element Delta 4";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""D-4""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""D4""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Delta_5 {
                    displayName = "Element Delta 5";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""D-5""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""D5""] call BIS_fnc_setUnitInsignia; };"; 
                };
            };

            class Crusader_Group_System_Echo {
                displayName = "Element Echo";
                condition = "alive player";

                class Crusader_Group_System_Echo_1 {
                    displayName = "Element Echo 1";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""E-1""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""E1""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Echo_2 {
                    displayName = "Element Echo 2";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""E-2""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""E2""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Echo_3 {
                    displayName = "Element Echo 3";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""E-3""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""E3""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Echo_4 {
                    displayName = "Element Echo 4";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""E-4""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""E4""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Echo_5 {
                    displayName = "Element Echo 5";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""E-5""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""E5""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Echo_6 {
                    displayName = "Element Echo 6";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""E-6""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""E6""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Echo_7 {
                    displayName = "Element Echo 7";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""E-7""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""E7""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Echo_8 {
                    displayName = "Element Echo 8";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""E-8""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""E8""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Echo_9 {
                    displayName = "Element Echo 9";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""E-9""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""E9""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Echo_10 {
                    displayName = "Element Echo 10";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""E-10""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""E10""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Echo_11 {
                    displayName = "Element Echo 11";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""E-11""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""E11""] call BIS_fnc_setUnitInsignia; };"; 
                };
                class Crusader_Group_System_Echo_12 {
                    displayName = "Element Echo 12";
                    statement = "SETPVAR(player,crusader_utilities_callsign,""E-12""); if (GVAR(groupSystemInsigniaEnable)) then { [player, ""E12""] call BIS_fnc_setUnitInsignia; };"; 
                };
            };
        };
    };
};