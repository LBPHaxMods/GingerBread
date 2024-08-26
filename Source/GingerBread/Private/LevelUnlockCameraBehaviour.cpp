#include "LevelUnlockCameraBehaviour.h"
#include "Net/UnrealNetwork.h"

ULevelUnlockCameraBehaviour::ULevelUnlockCameraBehaviour(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AUTH_Target = NULL;
}

void ULevelUnlockCameraBehaviour::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULevelUnlockCameraBehaviour, AUTH_Target);
}


