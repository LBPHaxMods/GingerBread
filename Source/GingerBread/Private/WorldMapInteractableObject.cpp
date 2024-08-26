#include "WorldMapInteractableObject.h"

AWorldMapInteractableObject::AWorldMapInteractableObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SackboyInputCollider = NULL;
    this->SackboyYankCollider = NULL;
    this->SackboyInputInteraction = NULL;
    this->SackboyYankInteraction = NULL;
    this->InputSackboy = NULL;
    this->bShouldTick = false;
    this->SackboysAreEntering = false;
    this->ObjectControlScheme = NULL;
    this->SackboyEntryAction = ESackboyActions::NONE;
    this->UseTransitionScreen = true;
    this->ScreenTransitionOnTime = 0.60f;
    this->ScreenTransitionOffTime = 0.60f;
    this->InstigatorMovementCurve = NULL;
    this->InstigatorMovementCurveDuration = 2.00f;
    this->SackboyMovementCurve = NULL;
    this->SackboyMovementCurveDuration = 2.00f;
}

void AWorldMapInteractableObject::PostYankEntryEvent_Implementation() {
}

void AWorldMapInteractableObject::OnTransitionOnFinished() {
}

void AWorldMapInteractableObject::OnSackboySpawnFirstVisible(ASackboy* Sackboy, TEnumAsByte<ESackboySpawnType> SpawnType, USpawnPointComponent* SpawnPoint) {
}

void AWorldMapInteractableObject::OnSackboyLeavingLevel(const FGingerbreadPlayerId& PlayerId, ASackboy* Sackboy) {
}

void AWorldMapInteractableObject::OnPreSpawn(USpawnPointComponent* SpawnPoint) {
}

bool AWorldMapInteractableObject::GetAreSackboysEntering() const {
    return false;
}

void AWorldMapInteractableObject::EnableTriggers(const bool bEnable) {
}

void AWorldMapInteractableObject::CompleteEntryIntoObject() {
}





