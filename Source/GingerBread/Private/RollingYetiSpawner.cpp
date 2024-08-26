#include "RollingYetiSpawner.h"

ARollingYetiSpawner::ARollingYetiSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->YetiType = EYetiType::SMALL;
    this->bAutoReset = false;
    this->bForceAlwaysGrounded = false;
    this->YetiSpeed = 50.00f;
}


