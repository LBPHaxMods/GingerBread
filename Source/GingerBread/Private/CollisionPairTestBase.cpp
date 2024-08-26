#include "CollisionPairTestBase.h"

ACollisionPairTestBase::ACollisionPairTestBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ResetCollisionFiltering = false;
}

bool ACollisionPairTestBase::ResetCollision() {
    return false;
}

bool ACollisionPairTestBase::DisableCollisionWith(AActor* Other) {
    return false;
}


