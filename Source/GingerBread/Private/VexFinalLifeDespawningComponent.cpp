#include "VexFinalLifeDespawningComponent.h"
#include "Net/UnrealNetwork.h"

UVexFinalLifeDespawningComponent::UVexFinalLifeDespawningComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialFlashingPlayRate = 0.50f;
    this->MaxFlashingPlayRate = 8.00f;
    this->PlayRateIncreasePerFlash = 0.40f;
    this->FlashDuration = 0.10f;
    this->MaxFlashes = 50;
    this->LifeState = EVexFinalLifeState::Falling;
}

void UVexFinalLifeDespawningComponent::OnRep_LifeState() {
}

void UVexFinalLifeDespawningComponent::OnRep_AimInfo() {
}

void UVexFinalLifeDespawningComponent::OnLifeCollected(ACollectableBase* Collectable, ASackboy* CollectingSackboy) {
}

void UVexFinalLifeDespawningComponent::OnActorHit(AActor* SelfActor, UPrimitiveComponent* SelfComponent, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void UVexFinalLifeDespawningComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UVexFinalLifeDespawningComponent, LifeState);
    DOREPLIFETIME(UVexFinalLifeDespawningComponent, AimInfo);
}


