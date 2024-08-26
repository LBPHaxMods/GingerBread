#include "HealthCapsule.h"
#include "Net/UnrealNetwork.h"

AHealthCapsule::AHealthCapsule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);

    this->HealthPickupType = SingleLifePickup;
    this->StartAwake = true;
    this->BounceRange = 8.00f;
    this->PickupVfxName = TEXT("ParticleAttractor");
    this->RestrictRange = false;
    this->RangeRadius = 20.00f;
    this->GravityMultiplier = 0.66f;
    this->MaxRoll = 30.00f;
    this->RollRotationSpeed = 1.00f;
    this->PointsToAward = 20;
    this->BounceMovementRTPC = TEXT("object_movement_speed");
    this->BounceAkEvent = NULL;
    this->PickupAkEvent = NULL;
    this->PickupBPVFX = NULL;
    this->PickupParticleVFX = NULL;
    this->Intensity = 0.00f;
    this->CastShadows = false;
    this->AutoCollectDuration = 0.50f;
    this->AutoCollectionTime = 0.00f;
    this->AUTHSleeping = false;
    this->AUTHDestoyCalled = false;
    this->IsInBubble = false;
}

void AHealthCapsule::StopMoving() {
}

void AHealthCapsule::StartMoving() {
}

void AHealthCapsule::RotateHealthPickup() {
}

void AHealthCapsule::PlayHealthPickupBounce_Implementation() {
}

void AHealthCapsule::PlayCollectionVFXSFX_Implementation(AActor* receiver) {
}

void AHealthCapsule::PhyCollOnComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void AHealthCapsule::PhyCollOnComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void AHealthCapsule::PhyCollOnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void AHealthCapsule::OnWake_Implementation() {
}

void AHealthCapsule::OnSleep_Implementation() {
}

void AHealthCapsule::OnRep_PhysicalCollisionPosition() {
}

void AHealthCapsule::OnRep_AUTHSleeping() {
}

void AHealthCapsule::OnRep_AUTHAUTHDestoyCalled() {
}

void AHealthCapsule::OnFirstWake_Implementation() {
}

void AHealthCapsule::OnExitTrackerRange(int32 Index, ASackboy* Sack) {
}

void AHealthCapsule::OnEnterTrackerRange(int32 Index, ASackboy* Sack) {
}

void AHealthCapsule::OnDroppedBySackboy(ASackboy* OriginalSackboy, const FVector& LaunchVelocity) {
}


bool AHealthCapsule::OnCollected_Implementation(AActor* CollectingActor) {
    return false;
}

int32 AHealthCapsule::GetValue_Implementation() {
    return 0;
}

FTreasureItem AHealthCapsule::GetDataType_Implementation() {
    return FTreasureItem{};
}

void AHealthCapsule::CompleteCollection() {
}

void AHealthCapsule::CapsuleSoundTick() {
}

void AHealthCapsule::CancelCollection() {
}

bool AHealthCapsule::CanBePickedUp_Implementation(AActor* CollectingActor) {
    return false;
}

void AHealthCapsule::AwardScore(ASackboy* Sack) {
}

void AHealthCapsule::ActivateCapsule() {
}

void AHealthCapsule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHealthCapsule, AUTHPhysicalCollisionPosition);
    DOREPLIFETIME(AHealthCapsule, AUTHSleeping);
    DOREPLIFETIME(AHealthCapsule, AUTHDestoyCalled);
    DOREPLIFETIME(AHealthCapsule, IsInBubble);
}


