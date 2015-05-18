class CfgPatches
{
	class utg_hitpoints_fix
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhs_c_troops",
			"rhsusf_c_troops"
		};
		version=0.1;
		author[]=
		{
			"Tachi"
		};
		authorUrl="http://tacticalgaming.kiev.ua/";
	};
};
class HitPoints;
class HitHead;
class HitBody;
class HitHands;
class HitLegs;
class cfgVehicles
{
	class SoldierGB;
	class SoldierWB;
	class rhs_infantry_msv_base: SoldierGB
	{
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor=1;
				passThrough=1;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0;
			};
			class HitBody: HitBody
			{
				armor=1;
				passThrough=1;
				radius=0.15000001;
				explosionShielding=10;
				minimalHit=0;
			};
			class HitHands: HitHands
			{
				armor=1;
				passThrough=1;
				radius=0.079999998;
				explosionShielding=1;
				minimalHit=0;
			};
			class HitLegs: HitLegs
			{
				armor=1;
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				minimalHit=0;
			};
		};
		armor=2;
		armorStructural=5;
	};
	class rhsusf_infantry_army_base: SoldierWB
	{
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor=1;
				passThrough=1;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0;
			};
			class HitBody: HitBody
			{
				armor=1;
				passThrough=1;
				radius=0.15000001;
				explosionShielding=10;
				minimalHit=0;
			};
			class HitHands: HitHands
			{
				armor=1;
				passThrough=1;
				radius=0.079999998;
				explosionShielding=1;
				minimalHit=0;
			};
			class HitLegs: HitLegs
			{
				armor=1;
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				minimalHit=0;
			};
		};
		armor=2;
		armorStructural=5;
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1429662234";
};
