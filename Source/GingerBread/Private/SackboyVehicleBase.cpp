#include "SackboyVehicleBase.h"
#include "Components/BoxComponent.h"
#include "InteractionComponent.h"

ASackboyVehicleBase::ASackboyVehicleBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SeatNode = NULL;
    this->VehicleHitPrimitive = CreateDefaultSubobject<UBoxComponent>(TEXT("Vehicle Hit Primitive Component"));
    this->VehicleHitInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("VehicleHitInteraction"));
    this->MinimumSpeedToApplyDamage = 15.00f;
    this->VirtualConstraint = NULL;
    this->ShouldClearRayTransformRotation = true;
    this->CheckAheadTime = 0.07f;
    this->SlopeAngleLimit = 72.00f;
    this->UpSlopePower = 0.50f;
    this->DownSlopeSpeed = 1.50f;
    this->StepDownLimit = 1.25f;
    this->StepUpLimit = 1.25f;
    this->ShowRays = false;
    this->DistanceToEnterVehicle = 8.00f;
    this->ShouldProcessDistanceEntering = true;
    this->Sackboy = NULL;
    this->VehicleHitInteraction->SetupAttachment(VehicleHitPrimitive);
}

void ASackboyVehicleBase::SetVehicleState(VehicleState NewState) {
}

void ASackboyVehicleBase::SetCollision(UPrimitiveComponent* prim) {
}

void ASackboyVehicleBase::OnVehicleHitPrimitiveOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASackboyVehicleBase::OnVehicleHitPrimitiveInteract(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}




void ASackboyVehicleBase::OnTriggerBoost_Implementation(ASackboy* NewSackboy, bool smallBoost) {
}


void ASackboyVehicleBase::OnSackboyExitVehicle_Implementation(ASackboy* NewSackboy) {
}

void ASackboyVehicleBase::OnSackboyEnterVehicle_Implementation(ASackboy* NewSackboy) {
}



void ASackboyVehicleBase::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASackboyVehicleBase::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASackboyVehicleBase::OnBeginInteract(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

bool ASackboyVehicleBase::IsOccupied() const {
    return false;
}

VehicleState ASackboyVehicleBase::GetVehicleState() const {
    return VehicleState::NONE;
}

ASackboy* ASackboyVehicleBase::GetSackboy() const {
    return NULL;
}

void ASackboyVehicleBase::BoostEnded_Implementation(bool bBigBoost) {
}


