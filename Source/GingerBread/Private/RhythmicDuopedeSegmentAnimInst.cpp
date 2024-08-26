#include "RhythmicDuopedeSegmentAnimInst.h"

URhythmicDuopedeSegmentAnimInst::URhythmicDuopedeSegmentAnimInst() {
    this->IsWalking = true;
    this->IsLeaningOnce = false;
    this->IsLeaningTwice = false;
    this->IsPickedUp = false;
    this->IsSlapped = false;
    this->IsSquashed = false;
    this->IsThrown = false;
    this->IsBlasted = false;
    this->IsRolledInto = false;
    this->IsInBubble = false;
    this->Speed = ERhythmicDuopedeSpeed::Slow;
    this->UseAlternateWalk = false;
    this->ThrownLand = false;
    this->LeanRight = false;
    this->SquashedFinish = false;
    this->WalkingPlayRate = 1.00f;
    this->WalkingStartPosition = 0.00f;
    this->LeaningOncePlayRate = 1.00f;
    this->LeaningOnceStartPosition = 0.00f;
    this->LeaningTwicePlayRate = 1.00f;
    this->LeaningTwiceStartPosition = 0.00f;
    this->GenericDeathPlayRate = 1.00f;
    this->AdditiveAnimation = ERhythmicDuopedeAdditiveAnimation::None;
    this->AdditiveBlendAlpha = 0.00f;
    this->AdditiveOutBlendTime = 0.20f;
}

void URhythmicDuopedeSegmentAnimInst::SetSquashedFinish() {
}

void URhythmicDuopedeSegmentAnimInst::SetAdditiveAnimation(ERhythmicDuopedeAdditiveAnimation InAdditiveType) {
}

void URhythmicDuopedeSegmentAnimInst::OnWalkingStateEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex) {
}

void URhythmicDuopedeSegmentAnimInst::OnThrowLandStateEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex) {
}

void URhythmicDuopedeSegmentAnimInst::OnSquashedStartStateEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex) {
}

void URhythmicDuopedeSegmentAnimInst::OnSlappedStateEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex) {
}

void URhythmicDuopedeSegmentAnimInst::OnRolledIntoEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex) {
}

void URhythmicDuopedeSegmentAnimInst::OnLeaningTwiceStateEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex) {
}

void URhythmicDuopedeSegmentAnimInst::OnLeaningOnceStateEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex) {
}

void URhythmicDuopedeSegmentAnimInst::OnBlastedStateEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex) {
}

void URhythmicDuopedeSegmentAnimInst::AnimNotify_OnThrownLand() {
}

void URhythmicDuopedeSegmentAnimInst::AnimNotify_OnDestroy() {
}


