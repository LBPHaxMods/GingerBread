#include "JointDemo.h"

AJointDemo::AJointDemo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FixedBodyA = NULL;
    this->FixedBodyB = NULL;
    this->DebugDistanceLimit = 5.00f;
    this->DistanceBodyA = NULL;
    this->DistanceBodyB = NULL;
    this->DebugDynamicDistanceLimit = 5.00f;
    this->EnableDynamicDistanceConstraint = false;
    this->DynamicDistanceBodyA = NULL;
    this->DynamicDistanceBodyB = NULL;
    this->DynamicDistanceConstraint = NULL;
    this->DebugChainDistanceLimit = 5.00f;
    this->ChainBodyA = NULL;
    this->ChainBodyB = NULL;
    this->ChainCount = 0;
    this->OrientationBodyA = NULL;
    this->OrientationBodyB = NULL;
}


