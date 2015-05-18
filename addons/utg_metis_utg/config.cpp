class CfgPatches
{
	class utg_metis_utg
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"CUP_Weapons_Metis_AT_13"
		};
		version=0.1;
		author[]=
		{
			"Tachi"
		};
		authorUrl="http://tacticalgaming.kiev.ua/";
	};
};
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class CUP_launch_Metis: Launcher_Base_F
	{
	};
	class CUP_launch_Metis_UTG: CUP_launch_Metis
	{
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		thermalMode[]={};
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1426514518";
};
