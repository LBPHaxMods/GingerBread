#include "PopshotAnimInstance.h"
#include "Net/UnrealNetwork.h"

UPopshotAnimInstance::UPopshotAnimInstance() {
    this->GenericState = EPopshotGenericState::Invalid;
    this->IdleState = EPopshotIdleState::Invalid;
    this->ThrownState = EPopshotThrownState::Invalid;
    this->ShootState = EPopshotShootState::Invalid;
    this->TailLaunchState = EPopshotTailLaunchState::Invalid;
    this->RecoilState = EPopshotRecoilState::Invalid;
    this->DroppedState = EAIDroppedState::Invalid;
    this->SlideState = EAISlideState::Invalid;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterMovementState = false;
    this->ExitMovementState = false;
    this->EnterFlippedState = false;
    this->ExitFlippedState = false;
    this->EnterFlippedRecoveryState = false;
    this->EnterTakeHitState = false;
    this->ExitTakeHitState = false;
    this->EnterShootState = false;
    this->ExitShootState = false;
    this->EnterCowerState = false;
    this->ExitCowerState = false;
    this->EnterCowerStateFromThrown = false;
    this->EnterCowerFinishState = false;
    this->EnterCarryState = false;
    this->ExitCarryState = false;
    this->EnterThrownState = false;
    this->ExitThrownState = false;
    this->EnterTailLaunchState = false;
    this->ExitTailLaunchState = false;
    this->EnterRecoilState = false;
    this->ExitRecoilState = false;
    this->EnterBubbleState = false;
    this->ExitBubbleState = false;
    this->EnterDroppedState = false;
    this->ExitDroppedState = false;
    this->EnterSlidingState = false;
    this->ExitSlidingState = false;
    this->EnterCelebrateState = false;
    this->ExitCelebrateState = false;
    this->EnterTauntState = false;
    this->ExitTauntState = false;
    this->EnterDeathState = false;
    this->IsAlert = false;
    this->CowerHit = false;
    this->CowerTailGrabbed = false;
    this->RunThreshold = 5.00f;
    this->IsRecoilSpinning = false;
    this->LookAtPitch = 0.00f;
    this->LookAtYaw = 0.00f;
    this->BoneLookAtPitch = 0.00f;
    this->BoneLookAtYaw = 0.00f;
    this->TailPulledPercentage = 0.00f;
    this->TailWiggleSpeed = 0.00f;
}

void UPopshotAnimInstance::ChangeState(EPopshotGenericState NewState) {
}

void UPopshotAnimInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPopshotAnimInstance, TailWiggleSpeed);
}


