#include "SniperReloadComponent.h"

USniperReloadComponent::USniperReloadComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimeBetweenEquips = 0.00f;
    this->ReloadTauntDelay = 0.00f;
    this->PassUpPreDelay = 0.00f;
    this->PassUpPostDelay = 0.00f;
}


