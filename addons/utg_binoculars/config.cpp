class CfgPatches
{
	class NWD_M19Binoc
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.108;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		author[]=
		{
			"Tachi"
		};
		authorUrl="http://tacticalgaming.kiev.ua/";
	};
};
class cfgWeapons
{
	class Default;
	class Binocular: Default
	{
		modelOptics="\NWD_M19Binoc\NWD_M19_reticle";
		opticsZoomMin=0.073247001;
		opticsZoomMax=0.073247001;
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1423847430";
};
