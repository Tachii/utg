// BRIEFING: ADMIN
// The following block of code executes only if the player is the current host
// it automatically includes a file which contains the appropriate briefing data.

if (serverCommandAvailable "#kick") then {
#include "f\briefing\f_briefing_admin.sqf"
};

// ====================================================================================

// ===========Spectator Stuff============================================================
if(isServer) then {
f_script_setLocalVars = [] execVM "utg_mf_additions\f\common\f_setLocalVars.sqf";
};
// ====================================================================================
