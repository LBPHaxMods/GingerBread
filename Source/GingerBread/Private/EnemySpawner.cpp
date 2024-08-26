#include "EnemySpawner.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

AEnemySpawner::AEnemySpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->CollisionMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMeshComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->SpawnDoorVolumeComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnDoorVolumeComponent"));
    this->SpawnDoorInteractComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("SpawnDoorInteractionComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_EnemySpawner"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->DoorDepressionTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("DoorDepressionTimelineComponent"));
    this->SpawnRangeTriggerComponent = NULL;
    this->SpawnRangeInteractComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("SpawnRangeInteractComponent"));
    this->UseBoxTrigger = false;
    this->SphereTriggerRadius = 50.00f;
    this->MaxSimultaneousEnemies = 1;
    this->TotalEnemiesToSpawn = 3;
    this->MinimumSpawnDelayTime = 1.00f;
    this->MaximumSpawnDelayTime = 2.00f;
    this->StartsActive = true;
    this->IsManualSpawner = false;
    this->ShouldSpawnOnActivation = true;
    this->ShouldResetOnDeactivation = false;
    this->SpawnedEnemyImpulse = 65.00f;
    this->MassNeededToDepressDoors = 0.25f;
    this->MassNeededToBlockSpawn = 0.50f;
    this->DoorDepressionTimelineDuration = 1.00f;
    this->AnticipationAnimationDuration = 0.67f;
    this->BlockedAnimationDuration = 1.00f;
    this->SpawnDoorOpenAnimationDuration = 0.33f;
    this->SpawnDoorCloseAnimationDuration = 0.33f;
    this->DoorDepressionTimelineCurve = NULL;
    this->AnticipationAudioEvent = NULL;
    this->SpawnDoorOpenAudioEvent = NULL;
    this->BlockedForceFeedbackEvent = NULL;
    this->BlockedHapticsEvent = NULL;
    this->CachedMaterial = NULL;
    this->State = EEnemySpawnerState::Dead;
    this->TotalWeighting = 0.00f;
    this->SpawnDoorInteractComponent->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
    this->SpawnRangeInteractComponent->SetupAttachment(RootComponent);
    this->CollisionMeshComponent->SetupAttachment(RootComponent);
    this->SkeletalMeshComponent->SetupAttachment(CollisionMeshComponent);
    this->GameplayTagComponent->SetupAttachment(CollisionMeshComponent);
    this->SpawnDoorVolumeComponent->SetupAttachment(RootComponent);
}

void AEnemySpawner::OnSpawnRangeTriggerEndOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void AEnemySpawner::OnSpawnRangeTriggerEndInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void AEnemySpawner::OnSpawnRangeTriggerBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AEnemySpawner::OnSpawnRangeTriggerBeginInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void AEnemySpawner::OnSpawnedAIDestroyed(AActor* pDestroyedActor) {
}

void AEnemySpawner::OnSpawnDoorVolumeEndOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void AEnemySpawner::OnSpawnDoorVolumeEndInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void AEnemySpawner::OnSpawnDoorVolumeBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AEnemySpawner::OnSpawnDoorVolumeBeginInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void AEnemySpawner::OnSpawnDoorOpenAnimationFinished() {
}

void AEnemySpawner::OnSpawnDoorCloseAnimationFinished() {
}

void AEnemySpawner::OnRep_State() {
}

void AEnemySpawner::OnFinishedWaitingForSpawnDelay() {
}

void AEnemySpawner::OnDoorDepressionAlphaUpdated(float Alpha) {
}

void AEnemySpawner::OnBlockedAnimationFinished() {
}

void AEnemySpawner::OnAnticipationAnimationFinished() {
}

void AEnemySpawner::OnAIsSpawned(AAISpawner* pSpawner, const TArray<AGingerbreadAICharacter*>& AIs) {
}

int32 AEnemySpawner::GetTotalSpawnedEnemiesCount() const {
    return 0;
}

EEnemySpawnerState AEnemySpawner::GetState() const {
    return EEnemySpawnerState::Dead;
}

int32 AEnemySpawner::GetCurrentlySpawnedEnemiesCount() const {
    return 0;
}

void AEnemySpawner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEnemySpawner, State);
}


