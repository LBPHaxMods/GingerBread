#include "TouchScreenAppSkullComponent.h"

UTouchScreenAppSkullComponent::UTouchScreenAppSkullComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEssential = false;
    this->Collision = NULL;
    this->Interaction = NULL;
    this->HitPointsModifier = NULL;
    this->Material_FadeIn = NULL;
    this->Material_FadeOut = NULL;
    this->Material_PlayDamage = NULL;
    this->DamageAkEvent = NULL;
    this->DamageHapticEvent = NULL;
    this->DamageGamepadAudioEvent = NULL;
    this->DealDamageAnimationTime = 0.75f;
    this->SkullSMP = NULL;
}

void UTouchScreenAppSkullComponent::ResetMaterialToFadeIn() {
}

void UTouchScreenAppSkullComponent::OnHitPointsModifierPostModificationAttempt(const FHitPointModifyResult& Result) {
}


