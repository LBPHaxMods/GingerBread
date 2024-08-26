#include "PhysicsAudioComponent.h"

UPhysicsAudioComponent::UPhysicsAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->ImpactThreshold = 1.00f;
    this->ImpactPostExcludeRadiusSQ = 1.00f;
    this->ImpactPostExcludeTime = 0.25f;
    this->MaxImpactVelocity = 30.00f;
    this->MaxImpactSize = 20.00f;
    this->ImpactSizeRTPCMax = 20.00f;
    this->ImpactIntensityRTPCMax = 30.00f;
    this->MaxRollVel = 40.00f;
    this->MaxRollSize = 30.00f;
    this->RollThreshold = 1.00f;
    this->FramesToRoll = 4;
    this->RollDotVel = 0.10f;
    this->RollSizeRTPCMax = 1.00f;
    this->RollIntensityRTPCMax = 1.00f;
    this->MaxSlideVel = 40.00f;
    this->MaxSlideSize = 30.00f;
    this->SlideThreshold = 0.10f;
    this->FramesToSlide = 2;
    this->SlideSizeRTPCMax = 1.00f;
    this->SlideIntensityRTPCMax = 40.00f;
    this->CachedPhysicsAudioSystem = NULL;
}

void UPhysicsAudioComponent::UnregisterComponent(UPrimitiveComponent* inComponent) {
}

void UPhysicsAudioComponent::RegisterComponent(UPrimitiveComponent* inComponent, const FString& AudioMaterialOverride, float AudioDensityOverride, bool bEnableCallbacks) {
}

void UPhysicsAudioComponent::OnActorHit(AActor* SelfActor, UPrimitiveComponent* SelfComponent, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}


