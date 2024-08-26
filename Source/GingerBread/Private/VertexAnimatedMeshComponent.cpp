#include "VertexAnimatedMeshComponent.h"

UVertexAnimatedMeshComponent::UVertexAnimatedMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StickerMesh = NULL;
    this->LocalOverrideMaterial = NULL;
    this->Sequence = NULL;
    this->CreateSequenceInstance = false;
    this->FPS_Source = 30.00f;
    this->FPS_Display = 60.00f;
    this->RandomTimeOffsetRange = 0.00f;
    this->PlayModeOnBeginPlay = EVANBeginPlayMode::None;
    this->CurrentClip = 0;
    this->IsPlaying = false;
    this->CurrentTime = 0.00f;
    this->ClipAnimReverse = false;
    this->ClipLoopCounter = 0;
    this->VaposMapName = TEXT("VAPOS Map");
    this->VanMapName = TEXT("VAN Map");
}

void UVertexAnimatedMeshComponent::Stop(bool RESET) {
}

UVertexAnimationSequence* UVertexAnimatedMeshComponent::SetSequence(UVertexAnimationSequence* InSequence) {
    return NULL;
}

void UVertexAnimatedMeshComponent::SetCurrentClip(int32 Index, bool PlayFromStart) {
}

void UVertexAnimatedMeshComponent::SetClipTime(float Seconds) {
}

void UVertexAnimatedMeshComponent::RefreshMesh() {
}

void UVertexAnimatedMeshComponent::QueueClip(int32 Index) {
}

void UVertexAnimatedMeshComponent::Play(bool RESET) {
}

void UVertexAnimatedMeshComponent::PAUSE() {
}

bool UVertexAnimatedMeshComponent::IsClipQueued() const {
    return false;
}

UVertexAnimationSequence* UVertexAnimatedMeshComponent::GetSequence() const {
    return NULL;
}

int32 UVertexAnimatedMeshComponent::GetQueuedClip() const {
    return 0;
}

int32 UVertexAnimatedMeshComponent::GetCurrentClip() const {
    return 0;
}

float UVertexAnimatedMeshComponent::GetClipTime() const {
    return 0.0f;
}

float UVertexAnimatedMeshComponent::GetClipDuration(int32 Index) const {
    return 0.0f;
}


