#include "PhaseLight.h"

APhaseLight::APhaseLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {

    this->DebugOverlapEvents = false;
    this->CollisionSphereBlocking = NULL;
    this->CollisionSphereOverlap = NULL;
    this->InteractionSphereOverlap = NULL;
    this->mDebugLogActive = false;
    this->mDebugLogOverride = false;
}

void APhaseLight::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APhaseLight::OnEndInteractionOverlap(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void APhaseLight::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APhaseLight::OnBeginInteractionOverlap(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void APhaseLight::ModifyLightSize(bool onOff, float targetSize) {
}

bool APhaseLight::IsOverlappingAnyPhasePlatform() {
    return false;
}

float APhaseLight::GetRadius() const {
    return 0.0f;
}

int32 APhaseLight::GetNumberOfOverlappingPhasePlatforms() {
    return 0;
}

int32 APhaseLight::GetNumberOfOverlappingInversePhasePlatforms() const {
    return 0;
}

int32 APhaseLight::GetNumberOfOverlappingAdditivePhasePlatforms() const {
    return 0;
}


