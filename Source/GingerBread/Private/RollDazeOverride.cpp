#include "RollDazeOverride.h"

URollDazeOverride::URollDazeOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Override = ERollDazeOverrideState::DEFAULT;
    this->OverrideForce = false;
    this->OverrideForceValue = 10.00f;
    this->IgnoreVerticalCollisionAngle = false;
    this->IgnoreHorizontalCollisionAngle = false;
}


