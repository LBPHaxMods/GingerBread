#include "PopshotCowerComponent.h"
#include "Net/UnrealNetwork.h"

UPopshotCowerComponent::UPopshotCowerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FinishCowerAnimDelay = 0.00f;
    this->MaxCowerAnimPlayRate = 1.00f;
    this->MinCowerAnimPlayRate = 0.40f;
    this->MaxCowerAnimPlayRateDistance = 15.00f;
    this->MinCowerAnimPlayRateDistance = 5.00f;
    this->WiggleSpeedAcceleration = 30.00f;
    this->IsCowering = false;
    this->IsTailGrabbed = false;
}

void UPopshotCowerComponent::TriggerCower() {
}

void UPopshotCowerComponent::OnTailGrabbed(bool IsGrabbed) {
}

void UPopshotCowerComponent::OnRep_CowerState() {
}

void UPopshotCowerComponent::OnObjectColliderEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UPopshotCowerComponent::OnObjectColliderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool UPopshotCowerComponent::GetIsTailGrabbed() const {
    return false;
}

bool UPopshotCowerComponent::GetIsCowering() const {
    return false;
}

void UPopshotCowerComponent::EndCower() {
}

void UPopshotCowerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPopshotCowerComponent, IsCowering);
    DOREPLIFETIME(UPopshotCowerComponent, IsTailGrabbed);
}


