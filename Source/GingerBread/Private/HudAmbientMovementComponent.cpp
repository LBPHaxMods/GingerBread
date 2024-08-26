#include "HudAmbientMovementComponent.h"

UHudAmbientMovementComponent::UHudAmbientMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAttachParentBound = true;
    this->AmbientEnabled = true;
    this->AmbientTranslationSpace = EHudAmbientTransformSpace::RelativeToScreen;
    this->AmbientRotationSpace = EHudAmbientTransformSpace::RelativeToScreen;
    this->RhythmicBeatsPerLoop = 4;
}

void UHudAmbientMovementComponent::SetAmbientMovementStartPosition(FTransform Transform) {
}

void UHudAmbientMovementComponent::ResetAmbientMovementPosition(int32 ResetNumber, bool AllPlayersDead) {
}

FTransform UHudAmbientMovementComponent::GetAmbientRelativeHudActorTransform() {
    return FTransform{};
}


