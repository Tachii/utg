//Add ruller on map
[] execVM "\utg_ui\script\add_ruler.sqf"; 

// AGM earbuds auto insert
if (hasInterface) then {	
	[] spawn { 
		sleep 10; 
		if ("AGM_EarBuds" in items player) then {
		[player] call AGM_Hearing_fnc_putInEarPlugs;
		};
	};
};

// Backpack Interaction hint
if (hasInterface) then {	
[] spawn {		 
		sleep 10;
		player addEventHandler ["InventoryOpened", {
			if (_this select 1 isKindOf "Bag_Base") then {
				BackpackEvent = _this;
				publicVariable "BackpackEvent";
			};
		}];
		"BackpackEvent" addPublicVariableEventHandler {
			if (BackpackEvent select 1 == unitBackpack player) then {
				hint format [
					"%1 has opened your Backpack!",
					name (BackpackEvent select 0)
				];
			};
		};
	};
};

// Auto Karma restore
if (hasInterface) then {
[] spawn {
	sleep 10;
	while {true} do { 
			if (rating player < 0) then {player addrating -(rating player)+10;}; 
			sleep 15; 
		}; 
	};
};