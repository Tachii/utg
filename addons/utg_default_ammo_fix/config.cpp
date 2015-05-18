class CfgPatches
{
	class utg_default_ammo_fix
	{
		author="Tachi";
		url="http://tacticalgaming.kiev.ua/";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class cfgAmmo
{
	class BulletCore;
	class BulletBase: BulletCore
	{
	};
	class B_556x45_Ball: BulletBase
	{
		hit=9;
		typicalSpeed=960;
		airFriction=-0.000772;
		caliber=0.64999998;
		deflecting=21;
		visibleFire=3;
		audibleFire=7;
	};
	class B_556x45_Ball_Tracer_Red: B_556x45_Ball
	{
		hit=9;
		typicalSpeed=960;
		airFriction=-0.000772;
		caliber=0.64999998;
		deflecting=21;
		visibleFire=3;
		audibleFire=7;
	};
	class B_556x45_Ball_Tracer_Green: B_556x45_Ball
	{
		hit=9;
		typicalSpeed=960;
		airFriction=-0.000772;
		caliber=0.64999998;
		deflecting=21;
		visibleFire=3;
		audibleFire=7;
	};
	class B_556x45_Ball_Tracer_Yellow: B_556x45_Ball
	{
		hit=9;
		typicalSpeed=960;
		airFriction=-0.000772;
		caliber=0.64999998;
		deflecting=21;
		visibleFire=3;
		audibleFire=7;
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1428537895";
};
