#include "VexConfigAttacksBase.h"

UVexConfigAttacksBase::UVexConfigAttacksBase() {
    this->CanUseSpikeyRollers = true;
    this->HandAttackProbability.AddDefaulted(8);
    this->JumpDuration = 6.00f;
    this->BackgroundJumpHeight = -150.00f;
}


