#include "ConfigSackboyNextGenDefaults.h"

UConfigSackboyNextGenDefaults::UConfigSackboyNextGenDefaults() {
    this->InitialGrappleMaxForceTime = 0.50f;
    this->FootstepFadeoutRTPCName = TEXT("vib_sackboy_fs_drop_off");
    this->FootstepNotWalkingResetTime = 0.50f;
    this->FootstepRTPCMultiplier = 1.00f;
    this->FootstepFadeOutTime = 1.00f;
    this->MinimumTimeBetweenAttackHaptics = 0.02f;
    this->CreatureCarryFadeOutRTPCName = TEXT("vib_carry_fadeout");
    this->CreatureCarryFadeOutCooldown = 1.00f;
    this->CreatureCarryFadeOutTime = 5.00f;
    this->CreatureCarryMinFadeOutRTPCValue = 0.20f;
    this->ThrowHapticMovementTime = 0.50f;
    this->ThrowHapticOffsetBehind = 5.00f;
    this->ThrowHapticOffsetFront = 20.00f;
    this->RollHapticOffset = 10.00f;
}


