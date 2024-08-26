#include "RhythmicRammerAnimInstance.h"

URhythmicRammerAnimInstance::URhythmicRammerAnimInstance() {
    this->IdlingStartPosition = 0.00f;
    this->IdlingPlayRate = 1.00f;
    this->RearingUpPlayRate = 1.00f;
    this->DyingPlayRate = 1.00f;
    this->DeathType = EAIDeathType::Slap;
    this->ShouldBeIdling = false;
    this->ShouldBeRearing = false;
    this->ShouldBeCharging = false;
    this->ShouldBeBraking = false;
    this->ShouldBeDying = false;
}

void URhythmicRammerAnimInstance::OnIdlingStateEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex) {
}


