// Define images to mass edit
#define Startup_Logo                    QPATHTOF(assets\ui\Arma_x_Crusader.paa)
#define Main_Menu_Logo                  QPATHTOF(assets\ui\CrusaderLogo.paa)
#define Main_Menu_Background            QPATHTOF(assets\ui\CrusaderMainMenu.jpg)
#define Multiplayer_Menu_Background     QPATHTOF(assets\ui\CrusaderMultiplayerMenu.jpg)
#define Main_Menu_Video                 QPATHTOF(assets\mainmenu.VR\Crusader_Intro.ogv)

// Get all classes the file needs
class RscVideo;
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

// Override additional arma loading image that gets used if -skipIntro is not set. (disables popup)
class RscDisplayLoadMission: RscStandardDisplay {
    class controls {
        class LoadingStart: RscControlsGroup {
            class controls {
                class Logo: RscPictureKeepAspect {
                    text = Startup_Logo;
                    x = "0.33375 * safezoneW";
                    y = "0.29 * safezoneH";
                    w = "0.3325 * safezoneW";
                    h = "0.39375 * safezoneH";
                };
            };
        };
    };
};

// Override initial arma loading
class RscDisplayStart: RscStandardDisplay {
    class controls {
        class LoadingStart: RscControlsGroup {
            class controls {
                /*class Noise: RscPicture { // Background picture
                    idc = 1201;
                    text = "";
                    x = "0 * safezoneW";
                    y = "0 * safezoneH";
                    w = "1 * safezoneW";
                    h = "1 * safezoneH";
                };*/
                class Logo: RscPictureKeepAspect { // Arma logo
                    text = Startup_Logo;
                    x = "0.33375 * safezoneW";
                    y = "0.29 * safezoneH";
                    w = "0.3325 * safezoneW";
                    h = "0.39375 * safezoneH";
                };
            };
        };
    };
};

// Override additional arma loading image that gets used if -skipIntro is not set. (disables popup)
class RscDisplayNotFreeze: RscStandardDisplay {
    class controls {
        class LoadingStart: RscControlsGroup {
            class controls {
                class Logo: RscPictureKeepAspect {
                    text = Startup_Logo;
                    x = "0.33375 * safezoneW";
                    y = "0.29 * safezoneH";
                    w = "0.3325 * safezoneW";
                    h = "0.39375 * safezoneH";
                };
            };
        };
    };
};

// Disables the Main Menu Ace Version popup at the bottem right, the Project Opfor logo, enable video to play on load
class Extended_DisplayLoad_EventHandlers {
    class RscDisplayMain {
        Crusader_Disable_ACE_loadMainMenuBox = "_this select 0 displayCtrl 80090 ctrlShow False";
        Crusader_Disable_PO_ProjectOPFORLogo = "_this select 0 displayCtrl 1299 ctrlShow False";
        Crusader_Play_MainMenuVideo = "with uiNamespace do {[""playVideo"", [((_this select 0) displayCtrl 213702), true], """"] call RscDisplayMain_script}";
    };
};

// Disables the middel spotlight box
class RscMainMenuSpotlight: RscControlsGroupNoScrollbars {
    show = 0;
    onLoad = "";
};

// Disables arma & mod infos | creates video playback & sets a backupimage if it somehow does not load
class RscDisplayMain: RscStandardDisplay {
    class ControlsBackground {
        delete Picture;
        class Background : RscControlsGroupNoScrollbars {
            idc = 213702;
            x = "safeZoneX";
            y = "safeZoneY";
            h = "safeZoneH";
            w = "safeZoneW";
            class Controls {
                class Picture : RscPictureKeepAspect {
                    idc = 1023;
                    text = Main_Menu_Background;
                    x = 0;
                    y = 0;
                    h = "safeZoneH";
                    w = "safeZoneW";
                };
                class Video : RscVideo {
                    idc = 1024;
                    text = Main_Menu_Video;
                    x = 0;
                    y = 0;
                    h = "safeZoneH + 11 * pixelH";
                    w = "safeZoneW";
                };
            };
        };
    };

    class controls {
        class BackgroundSpotlight: RscPicture 
        {
            show=0;
        };
        class BackgroundSpotlightLeft: BackgroundSpotlight 
        {
            show=0;
        };
        class BackgroundSpotlightRight: BackgroundSpotlightLeft 
        {
            show=0;
        };
        class Spotlight1: RscMainMenuSpotlight 
        {
            show=0;
        };
        class Spotlight2: RscText 
        {
            show=0;
        };
        class Spotlight3: RscMainMenuSpotlight 
        {
            show=0;
        };
        class SpotlightPrev: RscActivePictureKeepAspect 
        {
            show=0;
        };
        class SpotlightNext: SpotlightPrev 
        {
            show=0;
        };
        class logoApex: Logo
        {
            show = 0;
        };
        class BackgroundBar: RscText
        {
            show = 1;
        };
        class BackgroundCenter: BackgroundBar
        {
            show = 0;
        };
        class BackgroundBarLeft: RscPicture
        {
            show = 0;
        };
        class BackgroundBarRight: BackgroundBarLeft
        {
            show = 0;
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
        class Footer: RscText
        {
            show = 0;
        };
        
        class Logo: RscActivePicture { // Remove default arma logo and replace with custom one
            text = Main_Menu_Logo;
            tooltip = "";
            //tooltip = CSTRING(MAINMENU_ArmaLogo_ReplacementIcon_DESC);
            //url = "https://xn--kommandokrfte-crusader-94b.de/";
            onButtonClick = "";
            onload = "";
            x = "0.54 -  5 *  (pixelW * pixelGrid * 2)"; // Position X (change first value (0.54))
            y = "safezoneY + (3 - 0.59 *  5) *  (pixelH * pixelGrid * 2)"; // Position Y (change second value (0.59))
            w = "1.4 *  5 *  (pixelW * pixelGrid * 2)"; // Modify width of the image (change first value (1.4))
            h = "1.4 *  5 *  (pixelH * pixelGrid * 2)"; // Modify height of the image (change first value (1.4))
        };
        
        class GroupSingleplayer: RscControlsGroupNoScrollbars { // Call Controls from GroupSingleplayer to inherit it in GroupMultiplayer
            class Controls;
        };
        
        class GroupMultiplayer: GroupSingleplayer {
            h = "(5 *     1.5) *     (pixelH * pixelGrid * 2)"; // This sets the lenght of the displayed multiplayer list. The first value stands for the number of fields that can be filled. Default 3, here 5 due to us adding 2 options.
            class Controls: Controls {
                class Campaigns;
                class join_CrusaderServer: Campaigns { // Custom join button that is shown below normal multiplayer buttons
                    idc = -1;
                    text = CSTRING(MAINMENU_ArmaServer_Connect);
                    tooltip = CSTRING(MAINMENU_ArmaServer_Connect_DESC);
                    y = "(3 *     1.5) *     (pixelH * pixelGrid * 2) +     (pixelH)";
                    onbuttonclick = "connectToServer ['162.55.107.229', 2302, ''];";
                };
                class join_CrusaderTeamSpeak: join_CrusaderServer { // Custom join button for teamspeak
                    text = CSTRING(MAINMENU_TeamSpeak_Connect);
                    tooltip = CSTRING(MAINMENU_TeamSpeak_Connect_DESC);
                    url = "https://puotek.github.io/ts3connect/#162.55.107.229";
                    y = "(4 *     1.5) *     (pixelH * pixelGrid * 2) +     (pixelH)";
                    onbuttonclick = "";
                };
            };
        };

        class TitleSession;
        class TitleTeamspeak: TitleSession { // Additional Teamspeak join icon
            onbuttonclick = "";
            tooltip = CSTRING(MAINMENU_TeamSpeak_Connect_DESC);
            url = "https://puotek.github.io/ts3connect/#162.55.107.229";
            x = "safezoneX + safezoneW - 3 * 2 * (pixelW * pixelGrid * 2)";
            text = "a3\modules_f_curator\data\portraitradio_ca.paa";
        };
    };
};

// Override multiplayer server browser:main background
class RscDisplayMultiplayer: RscStandardDisplay
{
    class controlsbackground
    {
        class TileGroup: RscControlsGroupNoScrollbars
        {
            class Controls
            {
                class Background: RscPicture // Changed RscText to RscPicture to use a picture
                {
                    idc = 114999;
                    text = Multiplayer_Menu_Background;
                };
            };
        };
    };
};

// Override multiplayer server browser:filter background
class RscDisplayFilter: RscStandardDisplay
{
	class controlsBackground
	{
		class TileGroup: RscControlsGroupNoScrollbars
		{
			class Controls
			{
                class Background: RscPicture // Changed RscText to RscPicture to use a picture
                {
                    idc = 114999;
                    text = Multiplayer_Menu_Background;
                };
			};
		};
    };
};

// Override multiplayer server browser:password background
class RscDisplayPassword: RscStandardDisplay
{
	class controlsbackground
	{
		class TileGroup: RscControlsGroupNoScrollbars
		{
			class Controls
			{
				class Background: RscPicture // Changed RscText to RscPicture to use a picture
                {
                    idc = 114999;
                    text = Multiplayer_Menu_Background;
                };
			};
		};
    };
};

// Override multiplayer server browser:direct connect background
class RscDisplayIPAddress: RscStandardDisplay
{
	class controlsBackground
	{
		class TileGroup: RscControlsGroupNoScrollbars
		{
			class Controls
			{
				class Background: RscPicture // Changed RscText to RscPicture to use a picture
                {
                    idc = 114999;
                    text = Multiplayer_Menu_Background;
                };
			};
		};
    };
};

// Override multiplayer server browser:host server background
class RscDisplaySetupServer: RscStandardDisplay
{
	class controlsBackground
	{
		class TileGroup: RscControlsGroupNoScrollbars
		{
			class Controls
			{
				class Background: RscPicture // Changed RscText to RscPicture to use a picture
                {
                    idc = 114999;
                    text = Multiplayer_Menu_Background;
                };
			};
		};
    };
};

// Override multiplayer server browser:quick play background
class RscDisplayQuickPlay: RscStandardDisplay
{
	class controlsbackground
	{
		class TileGroup: RscControlsGroupNoScrollbars
		{
			class Controls
			{
				class Background: RscPicture // Changed RscText to RscPicture to use a picture
                {
                    idc = 114999;
                    text = Multiplayer_Menu_Background;
                };
			};
		};
    };
};

// allow HTML load URLs
class CfgCommands {
    allowedHTMLLoadURIs[] += {
        "https://puotek.github.io/*"
    };
};