enableEnvironment false;
cutText ["", "BLACK FADED", 0];
showCinemaBorder false;
showChat false;
enableSaving [false, false];

waitUntil {!isNull player};

while {true} do {

	waitUntil {!isNull player};
	_video = ["z\crusader\addons\utilities\assets\mainmenu.VR\Crusader_Intro.ogv"] spawn BIS_fnc_playVideo;
	playMusic "Crusader_Intro_2";
	waitUntil {scriptDone _video};
};