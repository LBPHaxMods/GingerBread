#include "ExplorationDoorway.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"

AExplorationDoorway::AExplorationDoorway(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TunnelMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TunnelMeshComponent"));
    this->DoorMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DoorMeshComponent"));
    this->MeshCollisionComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshCollisionComponent"));
    this->DoorCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("DoorCollisionComponent"));
    this->EntranceDetectionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EntranceDetectionComponent"));
    this->EntranceInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("EntranceInteractionComponent"));
    this->DoorOpenedParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DoorOpenedParticleSystem"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_ExplorationDoorway"));
    this->AnimatingFromHUDTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("AnimatingFromHUDTimelineComponent"));
    this->DoorwayIndex = 0;
    this->KeyringHUDComponentClass = NULL;
    this->KeyStaticMesh = NULL;
    this->KeySlamMontage = NULL;
    this->AnimatingFromHUDAudioEvent = NULL;
    this->KeySlamAudioEvent = NULL;
    this->DoorFinishedOpeningAudioEvent = NULL;
    this->KeySlamHapticsEvent = NULL;
    this->KeySlamCameraShake = NULL;
    this->KeySlamParticleSystem = NULL;
    this->AnimatingFromHUDTimelineLength = 1.20f;
    this->LocationAlphaCurve = NULL;
    this->GoToMiddleCurve = NULL;
    this->ScaleCurve = NULL;
    this->CameraDistanceCurve = NULL;
    this->OffsetsCurve = NULL;
    this->KeySlamAnimInstanceStateAlpha = 0.75f;
    this->KeySlamPlayVFXAlpha = 0.90f;
    this->DoorOpeningAnimationDuration = 4.00f;
    this->CachedDoorMaterial = NULL;
    this->CachedIconMaterial = NULL;
    this->CachedBorderMaterial = NULL;
    this->CachedThreadMaterial = NULL;
    this->KeysCollectedCount = -1;
    this->AnimatedKeysCount = 0;
    this->State = EExplorationDoorwayState::Closed;
    this->TunnelMeshComponent->SetupAttachment(RootComponent);
    this->DoorMeshComponent->SetupAttachment(TunnelMeshComponent);
    this->MeshCollisionComponent->SetupAttachment(DoorMeshComponent);
    this->DoorCollisionComponent->SetupAttachment(TunnelMeshComponent);
    this->EntranceDetectionComponent->SetupAttachment(TunnelMeshComponent);
    this->EntranceInteractionComponent->SetupAttachment(TunnelMeshComponent);
    this->DoorOpenedParticleSystem->SetupAttachment(TunnelMeshComponent);
    this->AkComponent->SetupAttachment(RootComponent);
}

void AExplorationDoorway::StartKeySlamMontage() {
}

void AExplorationDoorway::StartAnimatingKeysFromHUD() {
}

void AExplorationDoorway::SetKeysInserted() {
}

void AExplorationDoorway::PlayKeySlamVFX() {
}

void AExplorationDoorway::OnRep_State() {
}

void AExplorationDoorway::OnRep_KeysCollectedCount() {
}

void AExplorationDoorway::OnRep_AnimatedKeysCount(int32 PreviousAnimatedKeysCount) {
}

void AExplorationDoorway::OnEntranceDetectionEndOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void AExplorationDoorway::OnEntranceDetectionEndInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void AExplorationDoorway::OnEntranceDetectionBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AExplorationDoorway::OnEntranceDetectionBeginInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void AExplorationDoorway::OnAnimatingFromHUDTimelinePostUpdate() {
}

void AExplorationDoorway::OnAnimatingFromHUDTimelineFinished() {
}

void AExplorationDoorway::OnAnimatingFromHUDScaleUpdate(float Scale) {
}

void AExplorationDoorway::OnAnimatingFromHUDOffsetsUpdate(float Offsets) {
}

void AExplorationDoorway::OnAnimatingFromHUDLocationAlphaUpdate(float LocationAlpha) {
}

void AExplorationDoorway::OnAnimatingFromHUDGoToMiddleUpdate(float GoToMiddle) {
}

void AExplorationDoorway::OnAnimatingFromHUDCameraDistanceUpdate(float CameraDistance) {
}

void AExplorationDoorway::FinishAnimatingKeysFromHUD() {
}

void AExplorationDoorway::FinishAnimatingDoorOpening() {
}

void AExplorationDoorway::EDITOR_UpdateKeyReferences() {
}

void AExplorationDoorway::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AExplorationDoorway, KeysCollectedCount);
    DOREPLIFETIME(AExplorationDoorway, AnimatedKeysCount);
    DOREPLIFETIME(AExplorationDoorway, State);
}


