if (hasInterface) then
{
	[] spawn
	{
	if (player != player) then
		{
			waitUntil { player == player };
		};
		while {alive player} do
		{ 
			if (damage player > 0) then 
			{
					_dmg = damage player;
					_ftg = getFatigue  player;
					if(_ftg < _dmg) then
					{
						player setFatigue _dmg;
					};
			};	
			sleep 0.5;
		};
	};
};