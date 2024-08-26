#include "CutsceneControllerComponent.h"

UCutsceneControllerComponent::UCutsceneControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AllowSequenceControlOfSackboy = true;
    this->DisableSackboyCollision = true;
    this->HideSackboy = false;
    this->TeleportSackboys = false;
    this->SpawnSackboysAfterCutscene = false;
    this->ForceSpawn = false;
}

void UCutsceneControllerComponent::ShowCutsceneName(UTextBlock* TextBlock) {
}

void UCutsceneControllerComponent::OnSackboyCreated(const FGingerbreadPlayerId& PlayerId, ASackboy* Sackboy) {
}

void UCutsceneControllerComponent::OnCutscenePause(bool IsPaused) {
}

bool UCutsceneControllerComponent::JumpToNextMarkedFrame() {
    return false;
}

bool UCutsceneControllerComponent::HasCameraTrack() const {
    return false;
}

void UCutsceneControllerComponent::CutsceneInit() {
}

void UCutsceneControllerComponent::CutsceneEnd() {
}

void UCutsceneControllerComponent::AddActors(TArray<AActor*> Actors) {
}


