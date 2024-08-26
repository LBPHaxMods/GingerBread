#include "LookAtComponent.h"
#include "Net/UnrealNetwork.h"

ULookAtComponent::ULookAtComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClampYaw = false;
    this->ClampYawAngle = 0.00f;
    this->BoneOrSocketDebugEnabled = false;
    this->EyeLocationDebugEnabled = false;
}

void ULookAtComponent::StopLooking() {
}

bool ULookAtComponent::StartToLookAtPosition(FVector _position) {
    return false;
}

bool ULookAtComponent::StartToLookAtActor(AActor* _actor) {
    return false;
}

void ULookAtComponent::OnRep_LookAtPosition() {
}

void ULookAtComponent::OnRep_LookAtActor() {
}

float ULookAtComponent::GetYaw() {
    return 0.0f;
}

float ULookAtComponent::GetPitch() {
    return 0.0f;
}

float ULookAtComponent::GetBoneYaw() {
    return 0.0f;
}

float ULookAtComponent::GetBonePitch() {
    return 0.0f;
}

bool ULookAtComponent::GetBigChange() {
    return false;
}

void ULookAtComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULookAtComponent, Rep_ActorToLookAt);
    DOREPLIFETIME(ULookAtComponent, Rep_PositionToLookAt);
}


