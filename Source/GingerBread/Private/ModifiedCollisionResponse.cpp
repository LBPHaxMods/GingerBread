#include "ModifiedCollisionResponse.h"

FModifiedCollisionResponse::FModifiedCollisionResponse() {
    this->CollisionChannel = ECC_WorldStatic;
    this->CollisionResponse = ECR_Ignore;
}

