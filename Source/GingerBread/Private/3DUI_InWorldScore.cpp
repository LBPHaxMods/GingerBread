#include "3DUI_InWorldScore.h"
#include "Components/ChildActorComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "HudRootSceneComponent.h"

A3DUI_InWorldScore::A3DUI_InWorldScore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHudRootSceneComponent>(TEXT("HudRootScene"));
    this->MultiplierVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MultiplierVFX"));
    this->ChildScoreText = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildScoreText"));
    this->ScaleCurve = NULL;
    this->GlowOffCurve = NULL;
    this->RotationCurve = NULL;
    this->HudRootScene = (UHudRootSceneComponent*)RootComponent;
    this->MultiplierVFX->SetupAttachment(RootComponent);
    this->ChildScoreText->SetupAttachment(RootComponent);
}

void A3DUI_InWorldScore::TimelineFinished() {
}

void A3DUI_InWorldScore::Scale_TimelineUpdate(float Scale) {
}

void A3DUI_InWorldScore::Rotation_TimelineUpdate(FVector Rotation) {
}

void A3DUI_InWorldScore::GlowOff_TimelineUpdate() {
}


