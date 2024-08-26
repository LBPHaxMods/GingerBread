#include "AISpawner.h"
#include "Components/BoxComponent.h"
#include "TriggerActorComponent.h"

AAISpawner::AAISpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->BoxCollision = (UBoxComponent*)RootComponent;
    this->SpawnVFX = NULL;
    this->SpawnVFXAISpawnDelay = 0.10f;
    this->SpawnSFX = NULL;
    this->LevelType = EEnemyLevelType::Standard;
    this->ShowInCutscene = false;
    this->SpawnState = EAISpawnState::Default;
    this->PatrolObject = NULL;
    this->SpawnDelay = 0.00f;
    this->SpawnManually = false;
    this->ForceWorldLocation = false;
    this->ForcedWorldLocation = EWorldLocation::Amazon;
}

void AAISpawner::UpdateWorldLocation_EditorOnlyOutOfPlay() {
}

void AAISpawner::TriggerManualSpawn() {
}

void AAISpawner::PlaySpawnEffects_Implementation(const FVector& SpawnLocation, const FRotator& SpawnRotation) {
}

void AAISpawner::OnLevelSettingsAvailable(AActor* ManagerActor) {
}

bool AAISpawner::IsAISpawned() const {
    return false;
}

EWorldLocation AAISpawner::GetWorldLocation() const {
    return EWorldLocation::Amazon;
}

TArray<AGingerbreadAICharacter*> AAISpawner::GetAIs() const {
    return TArray<AGingerbreadAICharacter*>();
}

void AAISpawner::AIDestroyed(AActor* AIActor) {
}


