#include "GrappleTargetComponent.h"

UGrappleTargetComponent::UGrappleTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tag = TEXT("GrappleTarget");
    this->GrapplePointType = EGrapplePointType::SwingAndTug;
    this->Primitive = NULL;
    this->bModifySwingAxis = false;
    this->bApplyForces = true;
    this->bNotifyWhenPulling = false;
    this->bUseIdealRopeLength = false;
    this->IdealRopeLength = 50.00f;
    this->bUseMaxRopeLength = false;
    this->MaxRopeLength = 35.00f;
    this->AdjustLengthToHorizontalPlane = false;
    this->AdjustLengthToForwardAxis = false;
    this->AdjustLengthToCentre = false;
}

void UGrappleTargetComponent::SetPrimitive(UPrimitiveComponent* NewPrimitive) {
}


