#include "Camera3DHudManager.h"

ACamera3DHudManager::ACamera3DHudManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NearPlaneOffset = 9.00f;
    this->PlayerCameraManager = NULL;
}

void ACamera3DHudManager::SetAmbientMovementEnabledGlobally(bool Enabled) {
}


AGingerbreadHUD* ACamera3DHudManager::GetOwnerHUD() {
    return NULL;
}

float ACamera3DHudManager::GetHudActorDistanceFromCamera() const {
    return 0.0f;
}

USceneComponent* ACamera3DHudManager::GetBoundsComponent_Implementation() {
    return NULL;
}

USceneComponent* ACamera3DHudManager::GetAttachToComponent_Implementation() {
    return NULL;
}

bool ACamera3DHudManager::GetAmbientMovementEnabledGlobally() const {
    return false;
}

void ACamera3DHudManager::AddAmbientMovementDelta(FCustomHudAmbientMovement AmbientTransform) {
}


