#include "ControlModeManager.h"

AControlModeManager::AControlModeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDraw = false;
    this->CurrentModeType = EControlMode::None;
    this->CurrentControlMode = NULL;
    this->BoomerangMode = NULL;
    this->PowerGloveMode = NULL;
    this->GrappleHookMode = NULL;
    this->BlastersMode = NULL;
    this->ControlModes.AddDefaulted(5);
}

void AControlModeManager::SetControlMode(EControlMode NextModeType) {
}

bool AControlModeManager::IsControlModeActive(EControlMode Mode) const {
    return false;
}

EControlMode AControlModeManager::GetActiveMode() const {
    return EControlMode::None;
}


