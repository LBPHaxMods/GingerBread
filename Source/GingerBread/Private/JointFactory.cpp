#include "JointFactory.h"

AJointFactory::AJointFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AJointFactory::SetConstraintMaxDistance(UPhysicsConstraintComponent* Constraint, float MaxDistance) {
}

UPhysicsConstraintComponent* AJointFactory::CreatePhysicsConstraint(UPrimitiveComponent* PrimA, UPrimitiveComponent* PrimB, const FVector& WorldPos, const FRotator& WorldOrientation) {
    return NULL;
}

UPhysicsConstraintComponent* AJointFactory::CreateDistanceConstraint(UPrimitiveComponent* PrimA, UPrimitiveComponent* PrimB, const FVector& WorldPosA, const FVector& WorldPosB, float MaxDistance, float DriveStrength, bool DisableCollision) {
    return NULL;
}


