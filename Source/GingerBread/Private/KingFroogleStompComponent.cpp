#include "KingFroogleStompComponent.h"

UKingFroogleStompComponent::UKingFroogleStompComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GroundDetectionEnableDelay = 0.50f;
    this->PreCooldownDelay = 1.03f;
    this->StompCurve = NULL;
    this->StompDamageVFX = NULL;
    this->AOEHeight = 1.00f;
    this->AOEFinalRadius = 66.00f;
    this->AOEExpansionSpeed = 120.00f;
    this->AOEHeightOffset = -10.00f;
    this->ShockwaveClass = NULL;
}


