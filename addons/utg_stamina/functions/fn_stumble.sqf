// by commy2

_this spawn {
  if (isTouchingGround player) then {
    _animation = switch (currentWeapon player) do {
      case "" : {"AmovPpneMstpSnonWnonDnon"};
      case (primaryWeapon player) : {"AmovPpneMstpSrasWrflDnon"};
      case (secondaryWeapon player) : {"AmovPpneMstpSrasWrflDnon"};
      case (handgunWeapon player) : {"AmovPpneMstpSrasWpstDnon"};
      case (binocular player) : {"AmovPpneMstpSrasWbinDnon"};
      default {"AmovPpneMstpSnonWnonDnon"};
    };
	player playMove _animation;
  };
  sleep 6;
}
