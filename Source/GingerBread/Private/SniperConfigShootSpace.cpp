#include "SniperConfigShootSpace.h"

USniperConfigShootSpace::USniperConfigShootSpace() {
    this->CanUseSpread = false;
    this->ReloadOrder.AddDefaulted(4);
    this->HomingEnabled = true;
    this->Space_AirDashHeader = TEXT("_________________________________________________________Space_AirDash_________________________________________________________");
    this->AirDashTriggerRange = 20.00f;
    this->AirDashMaxSpeed = 80.00f;
    this->AirDashReleaseNeedleDelay = 0.35f;
    this->Space_NeedleHeader = TEXT("_________________________________________________________Space_Needle_________________________________________________________");
    this->NeedleMovementAcceleration = 60.00f;
}


