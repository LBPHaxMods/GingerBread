#include "SpaceHopperAnimInstance.h"

USpaceHopperAnimInstance::USpaceHopperAnimInstance() {
    this->HitReactionX = 0.00f;
    this->HitReactionY = 0.00f;
    this->TargetXAlpha = 0.00f;
    this->TargetYAlpha = 0.00f;
    this->HitBlend = 0.00f;
    this->LaunchAlpha = 0.00f;
    this->Airborne = false;
    this->TriggerHit = false;
    this->Decending = false;
    this->JumpLanded = false;
    this->TriggerJump = false;
    this->StartJump = false;
    this->UseFootIK = false;
}


