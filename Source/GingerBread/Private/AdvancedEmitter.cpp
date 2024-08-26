#include "AdvancedEmitter.h"
#include "AkComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/BillboardComponent.h"
#include "TriggerActorComponent.h"

AAdvancedEmitter::AAdvancedEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));

    this->BillboardComponent = (UBillboardComponent*)RootComponent;
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->Ak_AdvancedEmitter = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_AdvancedEmitter"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("Trigger"));
    this->MaxConcurrent_Emitted = 5;
    this->bDestroyOldest = true;
    this->bUseActorSequence = false;
    this->ObjectLifeSpan = 0.00f;
    this->CollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::Undefined;
    this->SpawnAudio = NULL;
    this->EmitterBehaviour = EEmitterBehaviour::ALWAYS_ON;
    this->EmitDelay = 1.00f;
    this->bEmittedActorsGetEmitterTags = false;
    this->InitialRollRandomness = 0.00f;
    this->VerticalDirectionRandomness = 0.00f;
    this->HorizontalDirectionRandomness = 0.00f;
    this->BaseSpeed = 0.00f;
    this->SpeedRandomness = 0.00f;
    this->bEnabled = true;
    this->StartDelay = 0.00f;
    this->AssignSpawnedActorsToSameGameTrigger = false;
    this->ArrowComponent->SetupAttachment(RootComponent);
    this->Ak_AdvancedEmitter->SetupAttachment(RootComponent);
}

void AAdvancedEmitter::TrySpawn() {
}

int32 AAdvancedEmitter::PerformSpawn(UWorld* World, const FEmitterData& CurrentEmitterData) {
    return 0;
}

void AAdvancedEmitter::OnEmittedActorDestroyed(AActor* AActor) {
}

void AAdvancedEmitter::OnActorSpawnedNetEvent_Implementation(AActor* SpawnedActor) {
}

void AAdvancedEmitter::DestroyAllSpawned() {
}


