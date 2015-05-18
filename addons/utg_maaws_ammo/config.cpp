class CfgPatches
{
	class utg_maaws_ammo
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_UI_F",
			"CUP_Weapons_MAAWS",
			"rhs_c_weapons",
			"rhs_c_heavyweapons"
		};
		version=0.1;
		author[]=
		{
			"Tachi"
		};
		authorUrl="http://tacticalgaming.kiev.ua/";
	};
};
class UTG_RPGSmokeEffects
{
	class LightExpSmall
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.3,0};
		intensity=0.00050000002;
		interval=1;
		lifeTime=0.40000001;
	};
	class SmokeCloud
	{
		simulation="particles";
		type="UTG_RPGSmokeCloudBigLight";
		position[]={0,0.60000002,0};
		intensity=1;
		interval=1;
		lifeTime=1.1;
	};
	class SmokeCloudLinger
	{
		simulation="particles";
		type="UTG_RPGSmokeCloudBigLightSlow";
		position[]={0,0.60000002,0};
		intensity=1;
		interval=1;
		lifeTime=40;
	};
};
class CfgCloudlets
{
	class Default;
	class FireBallBright;
	class CloudBigDark;
	class UTG_RPGSmokeCloudBigLight: Default
	{
		interval="0.4 * interval";
		circleRadius=3.3;
		circleVelocity[]={0,0.029999999,0};
		angleVar=1;
		animationName="";
		timerPeriod=1;
		lifeTime=70;
		moveVelocity[]={0.050000001,0.085000001,0.050000001};
		rotationVelocity=0;
		weight=0.052000001;
		volume=0.039999999;
		rubbing=0.025;
		size[]=
		{
			"0.0125 * intensity + 7",
			"0.0125 * intensity + 13",
			"0.0125 * intensity + 14",
			"0.0125 * intensity + 16"
		};
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.80000001},
			{0.89999998,0.89999998,0.89999998,0.80000001},
			{0.94999999,0.94999999,0.94999999,0.75},
			{0.97000003,0.97000003,0.97000003,0.64999998},
			{0.97000003,0.97000003,0.97000003,0.60000002},
			{0.98000002,0.98000002,0.98000002,0.60000002},
			{1,1,1,0}
		};
		animationSpeed[]={1.5,0.5,0.30000001,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=20;
		positionVar[]={5,12,5};
		MoveVelocityVar[]={0.050000001,0.050000001,0.050000001};
		rotationVelocityVar=20;
		sizeVar=0.69999999;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class UTG_RPGSmokeCloudBigLightSlow: UTG_RPGSmokeCloudBigLight
	{
		circleRadius=2.9000001;
		interval=0.80000001;
		positionVar[]={4,8,4};
	};
};
class cfgAmmo
{
	class rhs_ammo_3bk12_penetrator;
	class RocketBase;
	class maaws_heat_penetrator: rhs_ammo_3bk12_penetrator
	{
		hit=550;
		caliber="(540/((15*1000)/1000))";
	};
	class maaws_hedp_penetrator: rhs_ammo_3bk12_penetrator
	{
		hit=270;
		caliber="(540/((15*1000)/1000))";
	};
	class CUP_R_MEEWS_HEDP: RocketBase
	{
		soundHit1[]=
		{
			"A3\Sounds_F\weapons\Explosion\explosion_antitank_1",
			5.6234131,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\weapons\Explosion\explosion_antitank_2",
			5.6234131,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.5,
			"soundHit2",
			0.5
		};
		explosionSoundEffect="DefaultExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		model="\CUP\Weapons\CUP_Weapons_MAAWS\CUP_projectile_maaws.p3d";
		rhs_ce_penetration="maaws_hedp_penetrator";
		hit=150;
		indirectHit=40;
		indirectHitRange=12;
		cost=200;
		initTime=0;
		thrust=0;
		thrustTime=0;
		maxSpeed=320;
		sideAirFriction=0.22;
		timeToLive=6;
		fuseDistance=15;
		visibleFire=24;
		audibleFire=16;
		CraterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
		effectsMissile="missile2";
		whistleDist=10;
		whistleOnFire=1;
		airLock=0;
		irLock=0;
		maneuvrability=0;
		allowAgainstInfantry=0;
		initSpeed=330;
		class CamShakeExplode
		{
			power="(55 * 0.2)";
			duration="((round (55^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power=110;
			duration="((round (110^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(20^0.25)";
			duration="((round (20^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=1;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class CUP_R_MEEWS_HEAT: CUP_R_MEEWS_HEDP
	{
		rhs_ce_penetration="maaws_heat_penetrator";
		hit=480;
		indirectHit=12;
		indirectHitRange=1.2;
		cost=330;
	};
	class CUP_R_MEEWS_SMOKE: CUP_R_MEEWS_HEDP
	{
		rhs_ce_round=0;
		hit=40;
		indirecthit=18;
		indirecthitrange=5;
		explosioneffects="UTG_RPGSmokeEffects";
		allowAgainstInfantry=1;
	};
	class rhs_rpg7v2_pg7vl_penetrator: rhs_ammo_3bk12_penetrator
	{
		hit=480;
		caliber="(540/((15*1000)/1000))";
	};
	class CUP_R_MEEWS_HE: CUP_R_MEEWS_HEDP
	{
		rhs_ce_penetration="rhs_rpg7v2_pg7vl_penetrator";
		rhs_ce_round=0;
		hit=75;
		indirectHit=20;
		indirectHitRange=12;
		explosive=1;
		allowAgainstInfantry=1;
		CraterEffects="HEShellCrater";
		CraterWaterEffects="ImpactEffectsWaterHE";
		ExplosionEffects="HEShellExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		class CamShakeExplode
		{
			power="(120*0.2)";
			duration="((round (120^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((7 + 120^0.5)*8)";
		};
		class CamShakeHit
		{
			power=120;
			duration="((round (120^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(120^0.25)";
			duration="((round (120^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((120^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=0.02;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class CA_LauncherMagazine;
	class CUP_MAAWS_HEDP_M: CA_LauncherMagazine
	{
		initSpeed=320;
		mass=72;
	};
	class CUP_MAAWS_HEAT_M: CUP_MAAWS_HEDP_M
	{
		displayName="MAWWS HEAT";
		ammo="CUP_R_MEEWS_HEAT";
		descriptionShort="MAAWS HEAT";
		initSpeed=320;
		mass=72;
	};
	class CUP_MAAWS_SMOKE_M: CUP_MAAWS_HEDP_M
	{
		scope=2;
		displayName="MAAWS SMOKE";
		ammo="CUP_R_MEEWS_SMOKE";
		type="6 * 256";
		picture="\CUP\Weapons\CUP_Weapons_MAAWS\data\ui\m_m136_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_MAAWS\CUP_magazine_maaws.p3d";
		modelSpecial="";
		descriptionShort="MAAWS SMOKE";
		count=1;
	};
	class CUP_MAAWS_HE_M: CUP_MAAWS_HEDP_M
	{
		scope=2;
		displayName="MAAWS HE";
		ammo="CUP_R_MEEWS_HE";
		type="6 * 256";
		picture="\CUP\Weapons\CUP_Weapons_MAAWS\data\ui\m_m136_ca.paa";
		model="\CUP\Weapons\CUP_Weapons_MAAWS\CUP_magazine_maaws.p3d";
		modelSpecial="";
		descriptionShort="MAAWS HE";
		count=1;
	};
};
class CfgWeapons
{
	class Launcher_Base_F;
	class CUP_launch_MAAWS: Launcher_Base_F
	{
		magazines[]=
		{
			"CUP_MAAWS_HEAT_M",
			"CUP_MAAWS_HEDP_M",
			"CUP_MAAWS_SMOKE_M",
			"CUP_MAAWS_HE_M"
		};
	};
	class CUP_launch_MAAWS_Scope: CUP_launch_MAAWS
	{
		magazines[]=
		{
			"CUP_MAAWS_HEAT_M",
			"CUP_MAAWS_HEDP_M",
			"CUP_MAAWS_SMOKE_M",
			"CUP_MAAWS_HE_M"
		};
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1426514424";
};
