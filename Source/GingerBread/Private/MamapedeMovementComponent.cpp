#include "MamapedeMovementComponent.h"
#include "Net/UnrealNetwork.h"

UMamapedeMovementComponent::UMamapedeMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovementTime = 0.00f;
    this->Server_IsSmoothMoveActive = false;
    this->Server_SmoothMoveYawDir = 0.00f;
    this->Server_SmoothMovePitchDir = 0.00f;
}

void UMamapedeMovementComponent::OnRep_SmoothMoveActive() {
}

void UMamapedeMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMamapedeMovementComponent, Server_MovementParameters);
    DOREPLIFETIME(UMamapedeMovementComponent, Server_ActiveMovementState);
    DOREPLIFETIME(UMamapedeMovementComponent, MovementTime);
    DOREPLIFETIME(UMamapedeMovementComponent, Server_IsSmoothMoveActive);
    DOREPLIFETIME(UMamapedeMovementComponent, Server_SmoothMoveYawDir);
    DOREPLIFETIME(UMamapedeMovementComponent, Server_SmoothMovePitchDir);
}


