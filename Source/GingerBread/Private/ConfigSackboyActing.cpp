#include "ConfigSackboyActing.h"

UConfigSackboyActing::UConfigSackboyActing() {
    this->ActingRotationDelay = 0.10f;
    this->Lerp = 0.90f;
    this->PitchOff = -0.50f;
    this->PitchScale = 180.00f;
    this->ArcOffset = -90.00f;
    this->HandDeadZone = 0.10f;
    this->YawScale = 10.00f;
    this->YawOffset = 0.00f;
    this->YawMax = 0.10f;
    this->RollScale = -90.00f;
    this->ArmBlendSpeed = 0.20f;
    this->DebugActingMode = false;
    this->MinimalDebug = false;
    this->DebugUseRollAsYaw = false;
    this->DebugEnabledPitch = true;
    this->DebugEnabledRoll = true;
    this->DebugEnabledYaw = true;
    this->FlipRoll = false;
    this->UsePoiSystem = false;
    this->EnterHeadWobbleBlendTime = 1.00f;
    this->DegreesRotationPerSecond = 720.00f;
}


