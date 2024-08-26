#include "FreeLookCameraBehaviour.h"

UFreeLookCameraBehaviour::UFreeLookCameraBehaviour(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PanSpeed = 100.00f;
    this->RotationSpeed = 100.00f;
}

void UFreeLookCameraBehaviour::SetBehaviourActive(bool Activate, AGingerbreadPlayerController* player_controller) {
}

bool UFreeLookCameraBehaviour::IsBehaviourActive() {
    return false;
}


