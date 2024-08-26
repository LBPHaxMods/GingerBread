#include "GrappleComponent.h"

UGrappleComponent::UGrappleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentLength = 0.00f;
    this->VisualSubdivide = 1;
    this->VisualSideCount = 16;
    this->VisualWidthScale = 0.50f;
    this->VisualTileMaterial = 1.00f;
    this->DrawGrappleJoints = false;
}


