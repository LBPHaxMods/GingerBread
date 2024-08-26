#include "FloatStateProperties.h"

FFloatStateProperties::FFloatStateProperties() {
    this->CollisionType = EFloatStateCollisionType::NoCollision;
    this->RenderingEnabled = false;
    this->EnableCarrying = false;
    this->bEnableOverrideCollisionShape = false;
    this->ForwardCollisionShapeOverlapEvents = false;
    this->ForwardCollisionShapeHitEvents = false;
}

