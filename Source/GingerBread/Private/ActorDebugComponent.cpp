#include "ActorDebugComponent.h"

UActorDebugComponent::UActorDebugComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowCentreOfMass = false;
    this->CrossSizePixels = 3.00f;
    this->bShowVelocity = false;
    this->VelocityWatermarkMPS = 0.10f;
    this->VelocityMPS = 0.00f;
    this->IgnoreXAxis = false;
    this->IgnoreYAxis = false;
    this->IgnoreZAxis = false;
}


