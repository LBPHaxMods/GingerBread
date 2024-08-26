#include "MamapedeSpineSplineComponent.h"
#include "Net/UnrealNetwork.h"

UMamapedeSpineSplineComponent::UMamapedeSpineSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PopVertexAnimation = NULL;
    this->InflateVertexAnimation = NULL;
    this->BodySectionMesh = NULL;
    this->BodySectionLegsMesh = NULL;
    this->TailStartMesh = NULL;
    this->TailEndMesh = NULL;
    this->TailCollision = NULL;
    this->DesiredSections = 0;
    this->DoVerticalMovementHack = false;
    this->ShouldForceUndergroundMovement = false;
    this->IsUsingSegmentFollowing = false;
}

void UMamapedeSpineSplineComponent::StopHitReacting_Implementation() {
}

void UMamapedeSpineSplineComponent::StartHitReacting_Implementation() {
}

void UMamapedeSpineSplineComponent::OnSectionBurst_Implementation(int32 SectionIndex) {
}

void UMamapedeSpineSplineComponent::OnRep_Mamapede() {
}

void UMamapedeSpineSplineComponent::OnRep_DesiredSections() {
}

void UMamapedeSpineSplineComponent::OnRep_BodyVisualSections() {
}

void UMamapedeSpineSplineComponent::InflateBody_Implementation() {
}

void UMamapedeSpineSplineComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMamapedeSpineSplineComponent, BodyVisualSections);
    DOREPLIFETIME(UMamapedeSpineSplineComponent, DesiredSections);
    DOREPLIFETIME(UMamapedeSpineSplineComponent, DoVerticalMovementHack);
    DOREPLIFETIME(UMamapedeSpineSplineComponent, ShouldForceUndergroundMovement);
    DOREPLIFETIME(UMamapedeSpineSplineComponent, IsUsingSegmentFollowing);
    DOREPLIFETIME(UMamapedeSpineSplineComponent, Mamapede);
}


