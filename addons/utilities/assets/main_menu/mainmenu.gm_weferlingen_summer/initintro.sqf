enableEnvironment false;
cutText ["", "BLACK FADED", 0];
showCinemaBorder false;
enableSaving [false, false];

while {true} do
{
	_video = ["z\crusader\addons\utilities\assets\main_menu\mainmenu.gm_weferlingen_summer\Crusader_Intro.ogv"] spawn BIS_fnc_playVideo;
	waitUntil {scriptDone _video};
};