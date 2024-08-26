#include "RollSmashOverride.h"

URollSmashOverride::URollSmashOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Override = ERollSmashOverrideState::DEFAULT;
    this->ForceMultiplier = 1.00f;
}


