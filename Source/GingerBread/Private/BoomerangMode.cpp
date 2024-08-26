#include "BoomerangMode.h"
#include "EControlMode.h"

UBoomerangMode::UBoomerangMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ModeType = EControlMode::Boomerang;
}


