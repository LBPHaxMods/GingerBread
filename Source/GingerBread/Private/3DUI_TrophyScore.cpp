#include "3DUI_TrophyScore.h"
#include "Components/ChildActorComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "HudAmbientMovementComponent.h"
#include "HudFishingLineComponent.h"
#include "HudSkeletalMeshComponent.h"
#include "HudStaticMeshComponent.h"

A3DUI_TrophyScore::A3DUI_TrophyScore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObjectsRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ObjectsRoot"));
    this->HudAmbientMovementScore = CreateDefaultSubobject<UHudAmbientMovementComponent>(TEXT("HudAmbientMovementScore"));
    this->BaseTimerSkeletalMesh = CreateDefaultSubobject<UHudSkeletalMeshComponent>(TEXT("BaseTimerSkeletalMesh"));
    this->CenterParent = CreateDefaultSubobject<USceneComponent>(TEXT("CenterParent"));
    this->CenterPlainBlue = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("CenterPlainBlue"));
    this->ScoreBGPanel = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("ScoreBGPanel"));
    this->Score3DText = CreateDefaultSubobject<UChildActorComponent>(TEXT("Score3DText"));
    this->ScoreLossRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ScoreLossRoot"));
    this->ScoreLoss = CreateDefaultSubobject<UChildActorComponent>(TEXT("ScoreLoss"));
    this->ScoreFallSpline = CreateDefaultSubobject<USplineComponent>(TEXT("ScoreFallSpline"));
    this->ScoreBubble = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("ScoreBubble"));
    this->ScoreBubbleShadow = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("ScoreBubbleShadow"));
    this->FishingLine = CreateDefaultSubobject<UHudFishingLineComponent>(TEXT("FishingLine"));
    this->FishingLine2 = CreateDefaultSubobject<UHudFishingLineComponent>(TEXT("FishingLine2"));
    this->HudAmbientMovementMultiplier = CreateDefaultSubobject<UHudAmbientMovementComponent>(TEXT("HudAmbientMovementMultiplier"));
    this->MultiplierMesh = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("MultiplierMesh"));
    this->multiplier = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("multiplier"));
    this->MultiplierFishingLine = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("MultiplierFishingLine"));
    this->MultiplierVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MultiplierVFX"));
    this->MultiplierTimeCountdownFill = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("MultiplierTimeCountdownFill"));
    this->MultiplierTimeCountdownRing = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("MultiplierTimeCountdownRing"));
    this->MultiplierParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MultiplierParticle"));
    this->MultiplierMove = CreateDefaultSubobject<USplineComponent>(TEXT("MultiplierMove"));
    this->MultiplierJiggle = CreateDefaultSubobject<USplineComponent>(TEXT("MultiplierJiggle"));
    this->FishingLineLifeTarget = CreateDefaultSubobject<USceneComponent>(TEXT("FishingLineLifeTarget"));
    this->FishingLineLifeTarget2 = CreateDefaultSubobject<USceneComponent>(TEXT("FishingLineLifeTarget2"));
    this->MultiplierParticleEffect = NULL;
    this->ScaleDownEventCurve = NULL;
    this->LerpOnSplineCurve = NULL;
    this->RotationCurve = NULL;
    this->MultiplierMesh->SetupAttachment(HudAmbientMovementMultiplier);
    this->multiplier->SetupAttachment(MultiplierMesh);
    this->MultiplierFishingLine->SetupAttachment(MultiplierMesh);
    this->MultiplierVFX->SetupAttachment(MultiplierMesh);
    this->MultiplierTimeCountdownFill->SetupAttachment(MultiplierMesh);
    this->MultiplierTimeCountdownRing->SetupAttachment(MultiplierMesh);
    this->MultiplierParticle->SetupAttachment(MultiplierMesh);
    this->MultiplierMove->SetupAttachment(HudAmbientMovementMultiplier);
    this->MultiplierJiggle->SetupAttachment(MultiplierMove);
    this->FishingLineLifeTarget->SetupAttachment(RootComponent);
    this->FishingLineLifeTarget2->SetupAttachment(RootComponent);
    this->ObjectsRoot->SetupAttachment(RootComponent);
    this->HudAmbientMovementScore->SetupAttachment(ObjectsRoot);
    this->BaseTimerSkeletalMesh->SetupAttachment(HudAmbientMovementScore);
    this->CenterParent->SetupAttachment(BaseTimerSkeletalMesh);
    this->CenterPlainBlue->SetupAttachment(CenterParent);
    this->ScoreBGPanel->SetupAttachment(CenterPlainBlue);
    this->Score3DText->SetupAttachment(CenterPlainBlue);
    this->ScoreLossRoot->SetupAttachment(Score3DText);
    this->ScoreLoss->SetupAttachment(ScoreLossRoot);
    this->ScoreFallSpline->SetupAttachment(ScoreLossRoot);
    this->ScoreBubble->SetupAttachment(CenterPlainBlue);
    this->ScoreBubbleShadow->SetupAttachment(ScoreBubble);
    this->FishingLine->SetupAttachment(BaseTimerSkeletalMesh);
    this->FishingLine2->SetupAttachment(BaseTimerSkeletalMesh);
    this->HudAmbientMovementMultiplier->SetupAttachment(RootComponent);
}

void A3DUI_TrophyScore::SetupHudActor() {
}

void A3DUI_TrophyScore::ScoreLossScaleOnFinished() {
}

void A3DUI_TrophyScore::ScoreLossScaleOffFinished() {
}

void A3DUI_TrophyScore::ScaleDownEvent_TimelineUpdate() {
}

void A3DUI_TrophyScore::Rotation_TimelineUpdate(float Rotation) {
}

void A3DUI_TrophyScore::PlayScoreLoss(int32 Amount) {
}

void A3DUI_TrophyScore::MultiplierOn() {
}

void A3DUI_TrophyScore::MultiplierOff() {
}

void A3DUI_TrophyScore::MultiplierIntroFinished() {
}

void A3DUI_TrophyScore::LerpOnSpline_TimelineUpdate(float LerpOnSpline) {
}

void A3DUI_TrophyScore::ImmediateShow() {
}

void A3DUI_TrophyScore::ImmediateHide() {
}

void A3DUI_TrophyScore::HideMultiplier() {
}

void A3DUI_TrophyScore::Anim_Outro() {
}

void A3DUI_TrophyScore::Anim_Intro() {
}


