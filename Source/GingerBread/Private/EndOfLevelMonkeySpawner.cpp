#include "EndOfLevelMonkeySpawner.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "InteractionComponent.h"

AEndOfLevelMonkeySpawner::AEndOfLevelMonkeySpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

    this->SceneComponent = (USceneComponent*)RootComponent;
    this->TargetedRollingTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("TargetedRollingTrigger"));
    this->TargetRollingInteractTrigger = CreateDefaultSubobject<UInteractionComponent>(TEXT("TargetedRollingInteractTrigger"));
    this->BabyMonkeyClass = NULL;
    this->TargetedRollingTrigger->SetupAttachment(RootComponent);
    this->TargetRollingInteractTrigger->SetupAttachment(RootComponent);
}

void AEndOfLevelMonkeySpawner::StartMonkeysRolling() {
}

void AEndOfLevelMonkeySpawner::SpawnMonkeys() {
}

void AEndOfLevelMonkeySpawner::OnTargetedRollingTriggerBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherPrimitive, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void AEndOfLevelMonkeySpawner::OnTargetedRollingTriggerBeginInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherPrimitive) {
}


