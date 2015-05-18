class CfgPatches
{
	class utg_mas_hmmwv_fix
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"mas_HMMWV"
		};
		version=0.1;
		author[]=
		{
			"Tachi"
		};
		authorUrl="http://tacticalgaming.kiev.ua/";
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
	};
	class B_mas_HMMWV_Base: Car_F
	{
		armor=120;
		armorstructural=1;
		tf_hasLRradio_api=1;
		tf_RadioType_api="tf_rt1523g";
		tf_isolatedAmount_api=0.2;
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1426514606";
};
