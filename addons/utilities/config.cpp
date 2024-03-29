#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "ace_main",
            "ace_optionsmenu"
        };
        author = "Miss Heda";
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

// Define close to all classes the file needs
class Attributes;
class RscStandardDisplay;
class RscProgress;
class RscStructuredText;
class RscPicture;
class RscButton;
class RscShortcutButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscText;
class RscVignette;
class RscDisplayGetReady;
class RscActiveText;
class RscListBox;
class RscListNBox;
class RscCombo;
class RscXListBox;
class RscHTML;
class RscPictureKeepAspect;
class RscActivePicture;
class RscMapControl;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscFrame;
class RscTitle;
class CA_Title;
class RscDebugConsole;
class RscTrafficLight;
class RscFeedback;
class RscMessageBox;
class RscControlsGroup;
class RscTextCheckbox;
class RscDisplayInventory_DLCTemplate;
class RscEdit;
class RscCheckBox;
class RscIGProgress;
class RscHitZones;
class RscIGUIText;
class RscIGUIValue;
class RscOpticsValue;
class RscOpticsText;
class Scrollbar;
class RscIGUIShortcutButton;
class RscActivePictureKeepAspect;
class RscTree;
class RscXSliderH;
class RscObject;
class ctrlMenu;
class ctrlStaticPicture;
class RscButtonMenuSteam;
class RscButtonTextOnly;

// Disables the Main Menu Ace Version popup at the bottem right.
class Extended_DisplayLoad_EventHandlers {
    class RscDisplayMain {
        Crusader_Disable_ACE_loadMainMenuBox = "_this select 0 displayCtrl 80090 ctrlShow False";
    };
};

// Overrides the main menu background image that gets set when users has -skipIntro as a launch parameter.
class RscTitles 
{
    class RscDisplayMainMenuBackground
	{
		class Controls
		{
			class Picture: RscPicture
			{
				idc = 102;
				text = QPATHTOF(assets\main_menu\images\CrusaderMainMenu.jpg);
				x = "safezoneX";
				y = "safezoneY";
				w = "safezoneW";
				h = "safeZoneH";
			};
		};
	};
};

// Disables the middel spotlight box
class RscMainMenuSpotlight: RscControlsGroupNoScrollbars
{
	show = 0;
	onLoad = "";
};

// Disables default arma infos
class RscDisplayMain: RscStandardDisplay 
{
    class controls 
    {
        class BackgroundSpotlight: RscPicture 
        {
            show=0;
            onload="";
        };
        class BackgroundSpotlightLeft: BackgroundSpotlight 
        {
            show=0;
            onload="";
        };
        class BackgroundSpotlightRight: BackgroundSpotlightLeft 
        {
            show=0;
            onload="";
        };
        class Spotlight1: RscMainMenuSpotlight 
        {
            idc=1021;
            show=0;
            onload="";
        };
        class Spotlight2: RscText 
        {
            idc=1020;
            show=0;
            onload="";
        };
        class Spotlight3: RscMainMenuSpotlight 
        {
            idc=1022;
            show=0;
            onload="";
        };
        class SpotlightPrev: RscActivePictureKeepAspect 
        {
            idc=1060;
            show=0;
            onload="";
        };
        class SpotlightNext: SpotlightPrev 
        {
            show=0;
            onload="";
        };
        class logo: RscActivePicture // Remove default arma logo and replace with custom one
        { 
            text = QPATHTOF(assets\main_menu\images\CrusaderLogo.paa);
            tooltip = CSTRING(MAINMENU_ArmaLogo_ReplacementIcon_DESC);
            url = "https://xn--kommandokrfte-crusader-94b.de/";
            onButtonClick = "";
            onload = "";
        };
        class logoApex: logo 
        {
            show = 0;
            onload = "";
            text = "";
        };
        class infomods: RscControlsGroupNoHScrollbars 
        {
            show = 0;
        };
        class infoDLCsOwned: infomods 
        {
            show = 0;
        };
        class infoDLCs: infoDLCsOwned 
        {
            show = 0;
        };
        class infoNews: infomods 
        {
            show = 0;
        };
        class infoVersion: infoNews 
        {
            show = 0;
        };
        class GroupSingleplayer: RscControlsGroupNoScrollbars // Call Controls from GroupSingleplayer to inherit it in GroupMultiplayer
		{
			class Controls;
		};
		class GroupMultiplayer: GroupSingleplayer
		{
			h = "(9 *     1.5) *     (pixelH * pixelGrid * 2)";
			class Controls: Controls
			{
				class Campaigns;
				class join_CrusaderServer: Campaigns // Custom join button that is shown below normal multiplayer buttons
				{
					idc = -1;
					text = CSTRING(MAINMENU_ArmaServer_Connect);
                    tooltip = CSTRING(MAINMENU_ArmaServer_Connect_DESC);
					colorFocused[] = {1,1,1,1};
					y = "(3 *     1.5) *     (pixelH * pixelGrid * 2) +     (pixelH)";
					action = "";
					onbuttonclick = "connectToServer ['116.202.209.137', 2302, ''];";
					Onload = "";
				};
                class join_CrusaderTeamSpeak: join_CrusaderServer // Custom join button for teamspeak
				{
					text = CSTRING(MAINMENU_TeamSpeak_Connect);
					tooltip = CSTRING(MAINMENU_TeamSpeak_Connect_DESC);
                    url = "ts3server://185.249.199.144?port=9022";
					y = "(4 *     1.5) *     (pixelH * pixelGrid * 2) +     (pixelH)";
					onbuttonclick = "";
				};
			};
		};
    };
};

// Override cutsene for default maps
class CfgWorlds 
{
	class CAWorld;
	class Altis : CAWorld 
    {
		cutscenes[] = {"Main_Menu_Intro"};
	};
	
	class Stratis : CAWorld 
    {
		cutscenes[] = {"Main_Menu_Intro"};
	};

	class Enoch : CAWorld 
    {
		cutscenes[] = {"Main_Menu_Intro"};
	};

	class VR : CAWorld 
    {
		cutscenes[] = {"Main_Menu_Intro"};
	};

    class gm_weferlingen_summer : CAWorld
    {
        cutscenes[] = {"Main_Menu_Intro"};
    };

	initWorld = "gm_weferlingen_summer";
	demoWorld = "gm_weferlingen_summer";
};

// Define a new mission to use in cutsene
class CfgMissions
{
	class Cutscenes
	{
		class Main_Menu_Intro
		{
			directory = "z\crusader\addons\utilities\assets\main_menu\mainmenu.gm_weferlingen_summer"; // Path to scenario with the scene
		};
	};
};


// ---------- Cfgs to include ----------
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"