class CfgMagazines {
	class CA_Magazine;
	class BWA3_30Rnd_556x45_G36;
	class BWA3_30Rnd_556x45_G36_Training_base : BWA3_30Rnd_556x45_G36
	{
		scope = 2;
		count = "200";
		author = "Miss Heda";
		picture = QPATHTOEF(utilities,assets\ui\CrusaderLogo_64.paa);
	};

	class BWA3_30Rnd_556x45_G36_Training_Blank : BWA3_30Rnd_556x45_G36_Training_base
	{
		displayname = "200rnd Stanag (Blank)";
		ammo = "training_mag_blank_bullet";
	};

	class BWA3_30Rnd_556x45_G36_Training_Rubber : BWA3_30Rnd_556x45_G36_Training_base
	{
		displayname = "200rnd Stanag (Rubber)";
		ammo = "training_mag_rubber_bullet";
	};
};

// The pool that is used for mags
class CfgMagazineWells {
    class BWmodMagazineWell {
        training_mags_BW[] = {
            "BWA3_30Rnd_556x45_G36_Training_Blank",
			"BWA3_30Rnd_556x45_G36_Training_Rubber"
        };
    };
};
