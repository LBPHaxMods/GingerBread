#include "KnittedKnightTrialsUnlockSequence.h"

UKnittedKnightTrialsUnlockSequence::UKnittedKnightTrialsUnlockSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlowTriggers.AddDefaulted(1);
    this->VoidAnim_CurrentTimeSeconds = 0.00f;
    this->VoidAnim_Curve = NULL;
    this->VoidVFX = NULL;
}


ALevelBadge* UKnittedKnightTrialsUnlockSequence::GetUnlockSourceLevel() const {
    return NULL;
}

void UKnittedKnightTrialsUnlockSequence::BeginVoidAnimation() {
}


