#include "CameraEffectModifier.h"
#include "EGingerModifierType.h"

UCameraEffectModifier::UCameraEffectModifier() {
    this->ModifierType = EGingerModifierType::Collectable;
    this->Owner = NULL;
}


