class CfgPatches
{
	class utg_no_zeus
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Data_F_Curator"
		};
	};
};
class CfgFunctions
{
	class A3_Modules_F_Curator
	{
		class Curator
		{
			class moduleCurator
			{
				file="utg_no_zeus\Functions\fn_moduleCurator.sqf";
			};
		};
	};
};
class cfgNonAiVehicles
{
	class Bird;
	class Eagle_F: Bird
	{
		model="\a3\animals_f\dragonfly.p3d";
		singSound[]=
		{
			"\utg_no_zeus\sound\eagle_f_3",
			1,
			1,
			300
		};
		canBeShot=0;
		minHeight=60;
		avgHeight=70;
		maxHeight=80;
		minSPeed=5;
		maxSpeed=25;
		acceleration=5;
		turning=0.5;
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1429983750";
};
