#include "PhysicsPrizeBubble.h"
#include "EPrizeBubbleMovementType.h"

APhysicsPrizeBubble::APhysicsPrizeBubble(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BubbleType = EPrizeBubbleMovementType::Physics;
}


