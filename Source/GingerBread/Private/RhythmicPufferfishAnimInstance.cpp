#include "RhythmicPufferfishAnimInstance.h"

URhythmicPufferfishAnimInstance::URhythmicPufferfishAnimInstance() {
    this->MainStateMachineName = TEXT("MainStateMachine");
    this->IdleStateName = TEXT("Idle");
    this->AnticipationStateName = TEXT("Anticipation");
    this->SwimmingStateName = TEXT("Swimming");
    this->IdleStartPosition = 0.00f;
    this->IdlePlayRate = 1.00f;
    this->AnticipationStartPosition = 0.00f;
    this->AnticipationPlayRate = 1.00f;
    this->SwimmingIdleStartPosition = 0.00f;
    this->SwimmingIdlePlayRate = 1.00f;
    this->SwimmingSpeed = 0.00f;
    this->IsInIdleState = false;
    this->IsInAnticipationState = false;
    this->IsInSwimmingState = false;
}

void URhythmicPufferfishAnimInstance::OnSwimmingStateEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex) {
}

void URhythmicPufferfishAnimInstance::OnIdleStateEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex) {
}

void URhythmicPufferfishAnimInstance::OnAnticipationStateEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex) {
}


