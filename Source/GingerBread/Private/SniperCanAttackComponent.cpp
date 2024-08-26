#include "SniperCanAttackComponent.h"

USniperCanAttackComponent::USniperCanAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RunAwayStartDistance = 30.00f;
    this->RunAwayStopDistance = 40.00f;
    this->MaxAttackDistance = 50.00f;
    this->MaxAttackDistance_WhenApproaching = 45.00f;
    this->CowerStartDistance = 15.00f;
    this->CowerStopDistance = 18.00f;
    this->FriendlyFireOriginDistance = 7.50f;
    this->FriendlyFireOriginHeightOffset = 3.00f;
}


