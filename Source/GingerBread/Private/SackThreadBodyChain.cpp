#include "SackThreadBodyChain.h"

USackThreadBodyChain::USackThreadBodyChain(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetA = NULL;
    this->TargetB = NULL;
    this->Root = NULL;
    this->AttachJointA = NULL;
    this->AttachJointB = NULL;
    this->Length = 0.00f;
    this->UnreelJointBreakThreshold = 0.00f;
    this->MinimumReelInLength = 0.00f;
}

void USackThreadBodyChain::OnUnreelJointBroken(int32 Index) {
}

void USackThreadBodyChain::OnBodyDestroyed(AActor* Body, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


