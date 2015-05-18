class CfgPatches
{
	class utg_no_ti_designator
	{
		author="Jacob Herbst";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class cfgWeapons
{
	class Default;
	class Binocular: Default
	{
	};
	class Laserdesignator: Binocular
	{
	};
	class UTG_Laserdesignator: Laserdesignator
	{
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1426900514";
};
