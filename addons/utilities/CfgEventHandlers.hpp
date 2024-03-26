class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        disableModuload = "true";
    };
};

/* Aktuell Disabled da wir keine init setzen / noch nicht brauchen
class Extended_Init_EventHandlers {
    class CAManBase {
        class ADDON {
            init = QUOTE([ARR_2((_this select 0),false)] call FUNC(init));
        };
    };
};
*/