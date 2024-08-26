#include "LerpingMovementExtender.h"
#include "Net/UnrealNetwork.h"

ULerpingMovementExtender::ULerpingMovementExtender(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetworkLerpFactor = 0.30f;
}

void ULerpingMovementExtender::SimulateMovement(float DeltaTime) {
}

void ULerpingMovementExtender::LerpRotation(float LerpFactor) {
}

void ULerpingMovementExtender::LerpPosition(float LerpFactor) {
}

void ULerpingMovementExtender::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULerpingMovementExtender, Rep_Position);
    DOREPLIFETIME(ULerpingMovementExtender, Rep_Rotation);
}


