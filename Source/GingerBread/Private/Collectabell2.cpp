#include "Collectabell2.h"
#include "AkComponent.h"
#include "Components/TimelineComponent.h"
#include "PoIComponent.h"
#include "RegistrationComponent.h"
#include "SpotShadowComponent.h"
#include "VibrationCollectableComponent.h"

ACollectabell2::ACollectabell2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->PoIComponent = CreateDefaultSubobject<UPoIComponent>(TEXT("PoIComponent"));
    this->SpotShadowComponent = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadowComponent"));
    this->VibrationCollectableComponent = CreateDefaultSubobject<UVibrationCollectableComponent>(TEXT("VibrationCollectableComponent"));
    this->RegistrationComponent = CreateDefaultSubobject<URegistrationComponent>(TEXT("registration"));
    this->EffectTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("EffectTimeline"));

    this->CollectedAudioEvent = NULL;
    this->CollectedExtraAudioEvent = NULL;
    this->CollectedGamepadAudioEvent = NULL;
    this->CollectabellSize = ECollectabellSize2::Size1;
    this->CollectedHapticsEvent = NULL;
    this->CollectedForceFeedbackEvent = NULL;
    this->CollectedParticleSystem = NULL;
    this->EffectDuration = 5.00f;
    this->EffectMaterial = NULL;
    this->EffectSizeGrowthCurve = NULL;
    this->EffectFalloffGrowthCurve = NULL;
    this->GlowGrowthCurve = NULL;
    this->MinGlowIntensity = 0.00f;
    this->MaxGlowIntensity = 1.00f;
    this->AkComponent->SetupAttachment(RootComponent);
    this->PoIComponent->SetupAttachment(RootComponent);
    this->SpotShadowComponent->SetupAttachment(StaticMeshComponent);
}

void ACollectabell2::OnEffectTimelineFinished() {
}

void ACollectabell2::OnEffectSizeUpdate(const float Size) {
}

void ACollectabell2::OnEffectFalloffUpdate(const float Falloff) {
}


