#include "JumpyTurretActionComponent.h"

UJumpyTurretActionComponent::UJumpyTurretActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionTable.AddDefaulted(16);
}


