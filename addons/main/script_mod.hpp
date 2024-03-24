// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX crusader

#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCH
#define VERSION_AR  MAJOR,MINOR,PATCH

#define VERSION_CONFIG version = MAJOR.MINOR; versionStr = QUOTE(MAJOR.MINOR.PATCH); versionAr[] = {MAJOR,MINOR,PATCH}

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.88
#define REQUIRED_CBA_VERSION {3,8,0}

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(Crusader - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(Crusader - COMPONENT)
#endif
