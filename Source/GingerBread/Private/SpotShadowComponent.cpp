#include "SpotShadowComponent.h"

USpotShadowComponent::USpotShadowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpotShadowMaterial = NULL;
    this->bIgnoreHierarchy = true;
    this->bLockYRotation = false;
    this->FixedYRotation = 0.00f;
    this->bInvertRotationOnDecal = true;
    this->bUseZRotation = false;
    this->bUseYRotation = false;
    this->MaxHeight = 10.00f;
    this->RaycastBias = 0.00f;
    this->ShadowHeight = 2.50f;
    this->BlurMultiplier = 1.00f;
    this->BlurAtFloorLevel = 1.00f;
    this->BlurAtMaxHeight = 8.00f;
    this->OpacityMultiplier = 1.00f;
    this->OpacityAtFloorLevel = 0.80f;
    this->OpacityAtMaxHeight = 0.20f;
    this->bShadowSizesAreAbsolute = false;
    this->ShadowScaleMultiplier = 1.00f;
    this->ShadowScaleAtFloorLevel = 1.00f;
    this->ShadowScaleAtMaxHeight = 0.50f;
    this->bUseFixedShadowExtent = false;
    this->bStartWithComponentTickAndDecalVisibile = true;
    this->RayCastDistance = 60.00f;
    this->HideDistance = 300.00f;
    this->EnableRaycastOptimization = true;
    this->EnableRaycastOptimizationEvenForDynamicGeometry = true;
    this->RaycastOptimizationReuseDistance = 20.00f;
}


