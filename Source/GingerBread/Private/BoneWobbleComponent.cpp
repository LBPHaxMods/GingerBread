#include "BoneWobbleComponent.h"

UBoneWobbleComponent::UBoneWobbleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NeckHeight = 20.00f;
    this->EnableComponent = false;
    this->WobbleOptions = 0;
    this->Tolerance = 1.00f;
    this->WobbleForwardsLimit = 1.00f;
    this->WobbleSidewaysLimit = 0.80f;
    this->WobbleVerticalLimit = 0.50f;
    this->MaximumHeadVelocity = 360.00f;
    this->SpringStrength = 8.00f;
    this->DampingFactorWhenAccelerating = 0.08f;
    this->DampingFactorWhenStopped = 0.12f;
    this->DampingInterpSpeed = 2.00f;
    this->WobbleWeightOnWorldMap = 0.50f;
    this->SkeletalMesh = NULL;
    this->AnimationInstance = NULL;
    this->WobbleAlpha = 1.00f;
}


