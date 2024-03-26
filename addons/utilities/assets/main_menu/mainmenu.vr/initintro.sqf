enableSaving [ false, false ];
cutText ["", "BLACK FADED", 0];
enableEnvironment false;
showCinemaBorder false;


while {true} do
{
	_video = ["z\crusader\addons\utilities\assets\main_menu\mainmenu.vr\Crusader_Intro.ogv"] spawn BIS_fnc_playVideo;
	waitUntil {scriptDone _video};
};