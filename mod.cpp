class CfgMods
{
	class @StaminaMod
	{
	    dir = "@StaminaMod";
	    picture = "";
	    action = "";
	    hideName = 1;
	    hidePicture = 1;
	    name = "@StaminaMod";
	    credits = "BiGSmoke";
	    author = "BiGSmoke";
	    authorID = "0";
	    version = "1.0";
	    extra = 0;
	    type = "mod";

	    dependencies[] = {"Game"};

	    class defs
	    {
	        class worldScriptModule
            {
                value = "";
                files[] = {"@StaminaMod/scripts/3_Game"};
            };
        };
    };
};