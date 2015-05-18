class CfgPatches
{
	class utg_font
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_UI_F",
			"A3_UIFonts_F"
		};
		version=0.1;
		author[]=
		{
			"Tachi"
		};
		authorUrl="http://tacticalgaming.kiev.ua/";
	};
};
class RscStandardDisplay;
class RscActiveText;
class RscText;
class RscDisplayMultiplayerSetup: RscStandardDisplay
{
	class controls
	{
		class CA_B_West: RscActiveText
		{
			pictureHeight=1.8;
			pictureWidth=1.8;
			textHeight=0.60000002;
		};
		class CA_B_East: CA_B_West
		{
			x="1.45 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y="9.7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w="3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_B_Guerrila: CA_B_West
		{
			x="1.45 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y="12.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w="3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_B_Civilian: CA_B_West
		{
		};
		class CA_B_Virtual: CA_B_West
		{
		};
		class TextListedPlayers: RscText
		{
		};
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1427563455";
};
