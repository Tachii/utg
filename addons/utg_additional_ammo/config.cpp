class CfgPatches
{
	class utg_additional_ammo
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class cfgAmmo
{
	class B_762x51_Ball;
	class rhs_B_762x39_Ball: B_762x51_Ball
	{
		hit=11;
	};
};
class cfgMagazines
{
	class CA_Magazine;
	class 30Rnd_556x45_Stanag;
	class rhs_mag_30Rnd_556x45_M855A1_Stanag: 30Rnd_556x45_Stanag
	{
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		ammo="rhs_ammo_556x45_M855A1_Ball_Red";
		tracersEvery=1;
		displayName="$STR_RHSUSF_30RND_556x45_TRACER_RED_DISPLAY_NAME";
		descriptionShort="$STR_RHSUSF_30RND_556x45_TRACER_RED_DESCRIPTION_SHORT";
	};
	class rhs_30Rnd_545x39_AK: CA_Magazine
	{
		mass=11;
		scope=2;
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG0";
		picture="\rhsafrf\addons\rhs_weapons\gear_mags\rhs_gear_mag_545x39_ak_ca.paa";
		ammo="rhs_B_545x39_Ball";
		count=30;
		initSpeed=915;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_Desc_0";
	};
	class rhs_45Rnd_545x39_AK: rhs_30Rnd_545x39_AK
	{
		tracersEvery=4;
	};
	class rhs_75Rnd_545x39_AK: rhs_30Rnd_545x39_AK
	{
		mass=17;
		tracersEvery=4;
		count=75;
		displayName="75Rnd 5.45x39mm Mag";
		descriptionShort="75Rnd 5.45x39mm Mag";
	};
	class rhs_30Rnd_545x39_AK_green: rhs_30Rnd_545x39_AK
	{
		ammo="rhs_B_545x39_Ball_Tracer_Green";
		initSpeed=883;
		tracersEvery=1;
		picture="\rhsafrf\addons\rhs_weapons\gear_mags\rhs_gear_mag_545x39_ak_green_ca.paa";
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_GREEN_Desc_0";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_GREEN0";
	};
	class rhs_75Rnd_545x39_AK_green: rhs_30Rnd_545x39_AK_green
	{
		mass=17;
		count=75;
		descriptionShort="75Rnd 5.45x39mm Tracer Mag";
		displayName="75Rnd 5.45x39mm Tracer Mag";
	};
	class rhs_30Rnd_762x39mm: rhs_30Rnd_545x39_AK
	{
		mass=9.1599998;
		picture="\rhsafrf\addons\rhs_weapons\gear_mags\rhs_gear_mag_762x39_ak_ca.paa";
		ammo="rhs_B_762x39_Ball";
		count=30;
		initSpeed=718;
		displayName="30Rnd 7.62x39mm (57-N-231) Mag";
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_0";
	};
	class rhs_45Rnd_762x39mm: rhs_30Rnd_762x39mm
	{
		mass=17;
		picture="\hlc_wp_ak\tex\ui\m_rpk_mixed_ca.paa";
		ammo="rhs_B_762x39_Ball";
		count=45;
		tracersEvery=4;
		initSpeed=718;
		displayname="RPK Drum 45rnd 7.62mm";
		descriptionshort="Caliber: 7.62x39mm RPK Magazine <br />Rounds: 45<br />Used in: RPK";
	};
	class rhs_40Rnd_762x39mm: rhs_30Rnd_762x39mm
	{
		mass=16;
		picture="\hlc_wp_ak\tex\ui\m_rpk_mixed_ca.paa";
		ammo="rhs_B_762x39_Ball";
		count=40;
		initSpeed=718;
		displayname="RPK 40rnd 7.62mm";
		descriptionshort="Caliber: 7.62x39mm RPK Magazine <br />Rounds: 40<br />Used in: RPK";
	};
	class rhs_75Rnd_762x39mm: rhs_30Rnd_762x39mm
	{
		mass=32;
		tracersEvery=4;
		picture="\hlc_wp_ak\tex\ui\m_rpk_mixed_ca.paa";
		ammo="rhs_B_762x39_Ball";
		count=75;
		initSpeed=718;
		displayname="RPK Drum 75rnd 7.62mm";
		descriptionshort="Caliber: 7.62x39mm RPK Magazine <br />Rounds: 75<br />Used in: RPK";
	};
	class rhs_45Rnd_762x39mm_tracer: rhs_75Rnd_762x39mm
	{
		mass=17;
		count=45;
		ammo="rhs_B_762x39_Tracer";
		tracersEvery=1;
		displaynameshort="Tracer";
		descriptionshort="Caliber: 7.62x39mm (Tracer) RPK Magazine <br />Rounds: 45<br />Used in: RPK";
		displayname="RPK Drum (Tracer) 45rnd 7.62mm";
	};
	class rhs_75Rnd_762x39mm_tracer: rhs_75Rnd_762x39mm
	{
		ammo="rhs_B_762x39_Tracer";
		tracersEvery=1;
		displaynameshort="Tracer";
		descriptionshort="Caliber: 7.62x39mm (Tracer) RPK Magazine <br />Rounds: 75<br />Used in: RPK";
		displayname="RPK Drum (Tracer) 75rnd 7.62mm";
	};
};
class cfgMods
{
	author="76561198037478484";
	timepacked="1426513954";
};
