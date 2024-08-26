#include "LiftHapticsComponent.h"

ULiftHapticsComponent::ULiftHapticsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoPilot = false;
    this->bUseHapticsComponentAndSetupListeners = false;
    this->bPlayOnce = false;
    this->MovementTresholdDetection = 0.05f;
    this->RestartOnMoveDirectionChange = false;
    this->StartMoveHapticEvent = NULL;
    this->EndMoveHapticEvent = NULL;
    this->MoveLoopHapticEvent = NULL;
    this->StopMoveLoopHapticEvent = NULL;
    this->bShowDebug = false;
    this->HapticsComponent = NULL;
}

void ULiftHapticsComponent::StopLiftHaptics(AActor* LiftActor) {
}

void ULiftHapticsComponent::SetLiftHapticsAutoDetect(AActor* LiftActor, bool bEnabled) {
}

void ULiftHapticsComponent::PlayLiftHaptics(AActor* LiftActor) {
}

void ULiftHapticsComponent::OnSackboyStoppedTouchingSomething(AActor* pTouchedActor, UPrimitiveComponent* pTouchedCollider, ASackboy* pSackboy, ESackboyDetection DetectionType, ESackboyDetectionDetails DetectionDetails) {
}

void ULiftHapticsComponent::OnSackboyStartedTouchingSomething(AActor* pTouchedActor, UPrimitiveComponent* pTouchedCollider, ASackboy* pSackboy, ESackboyDetection DetectionType, ESackboyDetectionDetails DetectionDetails, FVector UsefulVec, int32 UsefulInt) {
}


