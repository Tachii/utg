waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };
if(hasInterface) then {
	private ["_canmark", "_mark", "_removemark","_laserdesignator"];
	_canmark=0;
	while {alive player} do {
		sleep 0.5;
		if (("Laserdesignator" in (items player + assignedItems player)) && (player == vehicle player) && (_canmark != 1)) then {
			if (currentWeapon player == "Laserdesignator") then {
				_mark = player addAction ["Place Marker", "utg_dlink\mark.sqf"]; 
				_removemark = player addAction ["Remove Marker", "utg_dlink\removemark.sqf"];
				_canmark = 1;
			};
		};
		if (("UTG_Laserdesignator" in (items player + assignedItems player)) && (player == vehicle player) && (_canmark != 1)) then {
			if (currentWeapon player == "UTG_Laserdesignator") then {
				_mark = player addAction ["Place Marker", "utg_dlink\mark.sqf"]; 
				_removemark = player addAction ["Remove Marker", "utg_dlink\removemark.sqf"];
				_canmark = 1;
			};
		};
		if ((_canmark == 1) && !(currentWeapon player == "UTG_Laserdesignator" || currentWeapon player == "Laserdesignator")) then {
			player removeAction _mark;
			player removeAction _removemark;
			_canmark = 0;
		};
	};
};