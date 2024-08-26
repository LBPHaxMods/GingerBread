#include "ConfigSackboyCollisionDefaults.h"

UConfigSackboyCollisionDefaults::UConfigSackboyCollisionDefaults() {
    this->EnablePhaseRaycast = true;
    this->ForcePhaseRaycast = false;
    this->DebugPhaseRaycast = false;
    this->RingRayExtraLength = 0.25f;
    this->MaxStepUp = 1.60f;
    this->MaxStepDown = 1.50f;
    this->ForwardOffset = 0.75f;
    this->SidewaysOffset = 1.50f;
    this->VelocityRayTime = 0.03f;
    this->CapsuleRayDistance = 1.00f;
    this->ExtraSackboyRadius = 2.50f;
    this->ShowBlockageDebug = false;
    this->BlockageCapsuleDistance = 2.00f;
    this->BlockageCapsuleUpDistance = 2.00f;
    this->BlockageCapsuleRadius = 2.00f;
    this->BlockageCapsuleHalfHeight = 3.00f;
}


