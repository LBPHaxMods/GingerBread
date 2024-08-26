#include "HudActor3D.h"
#include "HudRootSceneComponent.h"

AHudActor3D::AHudActor3D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHudRootSceneComponent>(TEXT("Root"));
    this->IsHiddenByScreen = true;
    this->IsHiddenByGame = false;
    this->IgnoreTimeDilation = true;
    this->VariableAspectScale = 1.00f;
    this->HUDRoot = (UHudRootSceneComponent*)RootComponent;
}

void AHudActor3D::StopInterpolation(USceneComponent* ComponentInterpolating) {
}

void AHudActor3D::SetInterpolationMultiplier(USceneComponent* MovingComponent, float NewMultiplier) {
}

void AHudActor3D::SetIgnoreTimeDilation(bool NewIgnoreDilation) {
}

void AHudActor3D::RequestAmbientMovementComponentsRefresh() {
}


void AHudActor3D::MoveComponentOntoSpline(USceneComponent* ComponentToMove, USplineComponent* SplineComponent, float FractionalPercent, bool ApplyRotation) {
}

bool AHudActor3D::IsHiddenCustom_Implementation() {
    return false;
}

void AHudActor3D::InterpolateComponentTransform(USceneComponent* ComponentToInterpolate, const FTransform& DestinationTransform, float Time, TEnumAsByte<EEasingFunc::Type> EasingType, FHudActorInterpolatedCallback FinishedCallback) {
}

void AHudActor3D::InterpolateComponentToComponent(USceneComponent* ComponentToInterpolate, USceneComponent* TargetComponent, float Time, TEnumAsByte<EEasingFunc::Type> EasingType, FHudActorInterpolatedCallback FinishedCallback) {
}

void AHudActor3D::InterpolateComponentAlongSpline(USceneComponent* ComponentToInterpolate, USplineComponent* SplineComponent, bool Reverse, bool ApplyRotation, TEnumAsByte<EEasingFunc::Type> EasingType, FHudActorInterpolatedCallback FinishedCallback) {
}

FTransform AHudActor3D::GetRelativeTransformToComponent(USceneComponent* component) {
    return FTransform{};
}

bool AHudActor3D::GetIgnoreTimeDilation() const {
    return false;
}

float AHudActor3D::GetDesiredWorldTime() const {
    return 0.0f;
}



