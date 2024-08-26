#include "ControlMode.h"

UControlMode::UControlMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ModeType = EControlMode::None;
    this->PlayerController = NULL;
    this->bIsEnabled = true;
    this->bCanDropMode = true;
}




