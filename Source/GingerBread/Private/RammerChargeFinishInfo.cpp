#include "RammerChargeFinishInfo.h"

FRammerChargeFinishInfo::FRammerChargeFinishInfo() {
    this->FinishReason = EChargeFinishReason::Invalid;
    this->OtherActor = NULL;
    this->OtherCollider = NULL;
    this->WasBraking = false;
    this->FinishVelocity = 0.00f;
    this->DidChargeIntoTeleportPortal = false;
}

