#include "3DUI_Timer.h"
#include "Components/ChildActorComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "HudAmbientMovementComponent.h"
#include "HudSkeletalMeshComponent.h"
#include "HudStaticMeshComponent.h"

A3DUI_Timer::A3DUI_Timer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObjectsRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ObjectsRoot"));
    this->CornerToCentre = CreateDefaultSubobject<USplineComponent>(TEXT("CornerToCentre"));
    this->CentreToOffscreen = CreateDefaultSubobject<USplineComponent>(TEXT("CentreToOffscreen"));
    this->TextOffScreenSpline = CreateDefaultSubobject<USplineComponent>(TEXT("TextOffScreenSpline"));
    this->BannerChild = CreateDefaultSubobject<UChildActorComponent>(TEXT("BannerChild"));
    this->IntroToCorner = CreateDefaultSubobject<USplineComponent>(TEXT("IntroToCorner"));
    this->HudAmbientMovementTimer = CreateDefaultSubobject<UHudAmbientMovementComponent>(TEXT("HudAmbientMovementTimer"));
    this->BaseTimerSkeletalMesh = CreateDefaultSubobject<UHudSkeletalMeshComponent>(TEXT("BaseTimerSkeletalMesh"));
    this->BaseCardboardRing = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("BaseCardboardRing"));
    this->BronzeRing = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("BronzeRing"));
    this->BronzeUnraveler = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("BronzeUnraveler"));
    this->BronzeParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BronzeParticles"));
    this->SilverRing = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("SilverRing"));
    this->SilverUnraveler = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("SilverUnraveler"));
    this->SilverParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SilverParticles"));
    this->GoldRing = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("GoldRing"));
    this->GoldUnraveler = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("GoldUnraveler"));
    this->GoldParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("GoldParticles"));
    this->BaseCardboardButton = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("BaseCardboardButton"));
    this->BronzeButton = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("BronzeButton"));
    this->SilverButton = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("SilverButton"));
    this->GoldButton = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("GoldButton"));
    this->TimerFishingLine = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("TimerFishingLine"));
    this->PinLeft = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("PinLeft"));
    this->PinRight = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("PinRight"));
    this->TimerRingShadowPlane = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("TimerRingShadowPlane"));
    this->CenterParent = CreateDefaultSubobject<USceneComponent>(TEXT("CenterParent"));
    this->CenterThumbs = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("CenterThumbs"));
    this->CenterBronze = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("CenterBronze"));
    this->CenterSilver = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("CenterSilver"));
    this->CenterGold = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("CenterGold"));
    this->CenterPlainBlue = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("CenterPlainBlue"));
    this->ShadowPlane = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("ShadowPlane"));
    this->EsportsTimer = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("EsportsTimer"));
    this->EsportsTimerFishingLine = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("EsportsTimerFishingLine"));
    this->HudAmbientMovementText = CreateDefaultSubobject<UHudAmbientMovementComponent>(TEXT("HudAmbientMovementText"));
    this->BP_3DUI_TimerText = CreateDefaultSubobject<UChildActorComponent>(TEXT("BP_3DUI_TimerText"));
    this->AdjustmentChildActor1 = CreateDefaultSubobject<UChildActorComponent>(TEXT("AdjustmentChildActor1"));
    this->AdjustmentChildActor2 = CreateDefaultSubobject<UChildActorComponent>(TEXT("AdjustmentChildActor2"));
    this->AdjustmentChildActor3 = CreateDefaultSubobject<UChildActorComponent>(TEXT("AdjustmentChildActor3"));
    this->AdjustmentChildActor4 = CreateDefaultSubobject<UChildActorComponent>(TEXT("AdjustmentChildActor4"));
    this->AdjustmentChildActor5 = CreateDefaultSubobject<UChildActorComponent>(TEXT("AdjustmentChildActor5"));
    this->inIntro = false;
    this->IntroWidget = NULL;
    this->StartLevelAudioEvent = NULL;
    this->EndCornerToCentreAudioEvent = NULL;
    this->EndCentreToRiseAudioEvent = NULL;
    this->StartCentreToCornerAudioEvent = NULL;
    this->RaceGateStartAudioEvent = NULL;
    this->SpotlightTimeOffsetAddAudioEvent = NULL;
    this->SpotlightTimeOffsetNegAudioEvent = NULL;
    this->BannerActor = NULL;
    this->ButtonRelativeCurve = NULL;
    this->TimerRelativeCurve = NULL;
    this->FlashAlphaCurve = NULL;
    this->PositiveTimeOffsetCurve = NULL;
    this->NegativeTimeOffsetCurve = NULL;
    this->OnHalfTurnCurve = NULL;
    this->LeftPinXMovementCurve = NULL;
    this->RightPinXMovementCurve = NULL;
    this->CenterRotationCurve = NULL;
    this->PositiveOffsetCurve = NULL;
    this->CenterSwapCurve = NULL;
    this->RotationCurves = NULL;
    this->DropInOffsetCurve = NULL;
    this->CenterRotationCurve2 = NULL;
    this->SilverParticles->SetupAttachment(SilverUnraveler);
    this->GoldRing->SetupAttachment(BaseCardboardRing);
    this->GoldUnraveler->SetupAttachment(GoldRing);
    this->GoldParticles->SetupAttachment(GoldUnraveler);
    this->BaseCardboardButton->SetupAttachment(BaseCardboardRing);
    this->BronzeButton->SetupAttachment(BaseCardboardButton);
    this->SilverButton->SetupAttachment(BaseCardboardButton);
    this->GoldButton->SetupAttachment(BaseCardboardButton);
    this->TimerFishingLine->SetupAttachment(BaseCardboardButton);
    this->PinLeft->SetupAttachment(BaseCardboardRing);
    this->PinRight->SetupAttachment(BaseCardboardRing);
    this->TimerRingShadowPlane->SetupAttachment(BaseCardboardRing);
    this->CenterParent->SetupAttachment(BaseTimerSkeletalMesh);
    this->CenterThumbs->SetupAttachment(CenterParent);
    this->CenterBronze->SetupAttachment(CenterParent);
    this->CenterSilver->SetupAttachment(CenterParent);
    this->CenterGold->SetupAttachment(CenterParent);
    this->CenterPlainBlue->SetupAttachment(CenterParent);
    this->ShadowPlane->SetupAttachment(CenterPlainBlue);
    this->EsportsTimer->SetupAttachment(BaseTimerSkeletalMesh);
    this->EsportsTimerFishingLine->SetupAttachment(EsportsTimer);
    this->HudAmbientMovementText->SetupAttachment(ObjectsRoot);
    this->BP_3DUI_TimerText->SetupAttachment(HudAmbientMovementText);
    this->AdjustmentChildActor1->SetupAttachment(RootComponent);
    this->AdjustmentChildActor2->SetupAttachment(RootComponent);
    this->AdjustmentChildActor3->SetupAttachment(RootComponent);
    this->AdjustmentChildActor4->SetupAttachment(RootComponent);
    this->AdjustmentChildActor5->SetupAttachment(RootComponent);
    this->ObjectsRoot->SetupAttachment(RootComponent);
    this->CornerToCentre->SetupAttachment(ObjectsRoot);
    this->CentreToOffscreen->SetupAttachment(ObjectsRoot);
    this->TextOffScreenSpline->SetupAttachment(ObjectsRoot);
    this->BannerChild->SetupAttachment(ObjectsRoot);
    this->IntroToCorner->SetupAttachment(ObjectsRoot);
    this->HudAmbientMovementTimer->SetupAttachment(ObjectsRoot);
    this->BaseTimerSkeletalMesh->SetupAttachment(HudAmbientMovementTimer);
    this->BaseCardboardRing->SetupAttachment(BaseTimerSkeletalMesh);
    this->BronzeRing->SetupAttachment(BaseCardboardRing);
    this->BronzeUnraveler->SetupAttachment(BronzeRing);
    this->BronzeParticles->SetupAttachment(BronzeUnraveler);
    this->SilverRing->SetupAttachment(BaseCardboardRing);
    this->SilverUnraveler->SetupAttachment(SilverRing);
}

void A3DUI_Timer::TimerRelativeCurve_Update(FVector TimerRelative) {
}

void A3DUI_Timer::Text_PlayTimeStopped() {
}

void A3DUI_Timer::Text_PlayTimeStarted() {
}

void A3DUI_Timer::Text_PlayTimeLost() {
}

void A3DUI_Timer::Text_PlayTimeAdded() {
}

void A3DUI_Timer::SetupHudActor() {
}

void A3DUI_Timer::SetTimeText(FTimespan Time) {
}

void A3DUI_Timer::SetOutroPlayRate(float outroPlayRate) {
}

void A3DUI_Timer::RotationCurves_Update(FVector NewRotationCurves) {
}

void A3DUI_Timer::RightPinXMovement_Update(float RightPinXMovement) {
}

void A3DUI_Timer::PositiveTimeOffset_Update(FVector PositiveTimeOffset) {
}

void A3DUI_Timer::PositiveOffset_Update(FVector positiveOffset) {
}

void A3DUI_Timer::OnTimerOutroStarted() {
}

void A3DUI_Timer::OnTimerIntroStarted() {
}

void A3DUI_Timer::OnOffscreenCallback() {
}


void A3DUI_Timer::OnIntroEndStarted() {
}

void A3DUI_Timer::OnIntroEnded() {
}

void A3DUI_Timer::OnHalfTurn_Update() {
}

void A3DUI_Timer::OnCornerMoveStarted() {
}

void A3DUI_Timer::OnCornerCallback() {
}

void A3DUI_Timer::OnCentreCallback() {
}

void A3DUI_Timer::NegativeTimeOffset_Update(FVector NegativeTimeOffset) {
}

void A3DUI_Timer::LeftPinXMovement_Update(float LeftPinXMovement) {
}

void A3DUI_Timer::IsWholeSpinPlaying(bool& IsPlaying) {
}



void A3DUI_Timer::GetTierRingPrimitives(EUITimerTier tier, TArray<UPrimitiveComponent*>& tierPrimitives) {
}

void A3DUI_Timer::FlashTimePositive() {
}

void A3DUI_Timer::FlashTimeNegative() {
}

void A3DUI_Timer::FlashTime_Finish() {
}

void A3DUI_Timer::FlashAlpha_Update(float flashAlpha) {
}

void A3DUI_Timer::EndIntro() {
}

void A3DUI_Timer::EnableTimer(bool playIntro) {
}

void A3DUI_Timer::DropInOffset_Update(float DropInOffset) {
}

void A3DUI_Timer::CenterSwap_Update() {
}

void A3DUI_Timer::CenterRotation_Update(FVector CenterRotation) {
}

void A3DUI_Timer::CenterRotation2_Update(FVector CenterRotation) {
}

void A3DUI_Timer::ButtonRelativeCurve_Update(FVector ButtonRelative) {
}



void A3DUI_Timer::Anim_PlayWholeSpin() {
}

void A3DUI_Timer::Anim_PlayClick() {
}

void A3DUI_Timer::Anim_PlayCenterSpin() {
}

void A3DUI_Timer::Anim_DropInToCorner() {
}

void A3DUI_Timer::Anim_CornerToCentre() {
}

void A3DUI_Timer::Anim_CentreToOffscreen() {
}

void A3DUI_Timer::Anim_CentreToCorner() {
}


