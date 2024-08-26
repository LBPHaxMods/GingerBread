#include "3DUI_BonusTimer.h"
#include "AkComponent.h"
#include "Components/ChildActorComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "HudSkeletalMeshComponent.h"
#include "HudStaticMeshComponent.h"

A3DUI_BonusTimer::A3DUI_BonusTimer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->P_PopperVFX_UnlockPowerPin = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("P_PopperVFX_UnlockPowerPin"));
    this->AK_bonus_room = CreateDefaultSubobject<UAkComponent>(TEXT("AK_bonus_room"));
    this->RibbenVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RibbenVFX"));
    this->TimerRingShadowPlane = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("TimerRingShadowPlane"));
    this->IntroSpline = CreateDefaultSubobject<USplineComponent>(TEXT("IntroSpline"));
    this->TimerSkeleton = CreateDefaultSubobject<UHudSkeletalMeshComponent>(TEXT("TimerSkeleton"));
    this->TextChildActor = CreateDefaultSubobject<UChildActorComponent>(TEXT("TextChildActor"));
    this->PopperBR = CreateDefaultSubobject<UChildActorComponent>(TEXT("PopperBR"));
    this->PopperBL = CreateDefaultSubobject<UChildActorComponent>(TEXT("PopperBL"));
    this->CornerToCentre = CreateDefaultSubobject<USplineComponent>(TEXT("CornerToCentre"));
    this->TimerFishingLine = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("TimerFishingLine"));
    this->CentreDisc = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("CentreDisc"));
    this->PinRight = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("PinRight"));
    this->PinLeft = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("PinLeft"));
    this->TimerButton = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("TimerButton"));
    this->OuterRing = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("OuterRing"));
    this->InnerRing = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("InnerRing"));
    this->TimerRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TimerRoot"));
    this->PreSecondSwapAnimTime = 0.10f;
    this->TimerEnterAudioEvent = NULL;
    this->TimerStartAudioEvent = NULL;
    this->TimerStopAudioEvent = NULL;
    this->TimerToCentreAudioEvent = NULL;
    this->PopperHideAudioEvent = NULL;
    this->PopperAppearAudioEvent = NULL;
    this->ConfettiAudioEvent = NULL;
    this->ConfettiHapticsEvent = NULL;
    this->TimerStopHapticEvent = NULL;
    this->CentreSpinCurve = NULL;
    this->NumberLocationCurve = NULL;
    this->NumberPositionCurve = NULL;
    this->NumberScaleCurve = NULL;
    this->NumberScale2Curve = NULL;
    this->DiscWobbleCurve = NULL;
    this->P_PopperVFX_UnlockPowerPin->SetupAttachment(RootComponent);
    this->AK_bonus_room->SetupAttachment(RootComponent);
    this->RibbenVFX->SetupAttachment(OuterRing);
    this->TimerRingShadowPlane->SetupAttachment(InnerRing);
    this->IntroSpline->SetupAttachment(RootComponent);
    this->TimerSkeleton->SetupAttachment(TimerRoot);
    this->TextChildActor->SetupAttachment(InnerRing);
    this->PopperBR->SetupAttachment(RootComponent);
    this->PopperBL->SetupAttachment(RootComponent);
    this->CornerToCentre->SetupAttachment(RootComponent);
    this->TimerFishingLine->SetupAttachment(TimerButton);
    this->CentreDisc->SetupAttachment(InnerRing);
    this->PinRight->SetupAttachment(InnerRing);
    this->PinLeft->SetupAttachment(InnerRing);
    this->TimerButton->SetupAttachment(InnerRing);
    this->OuterRing->SetupAttachment(InnerRing);
    this->InnerRing->SetupAttachment(TimerSkeleton);
    this->TimerRoot->SetupAttachment(RootComponent);
}

void A3DUI_BonusTimer::StartEndSequence() {
}

void A3DUI_BonusTimer::SetupHudActor() {
}

void A3DUI_BonusTimer::SetTimerState(float CurrentTime, float FractionalPercent) {
}

void A3DUI_BonusTimer::SetPulsing(bool isPulsing, float TimeRemaining) {
}

void A3DUI_BonusTimer::SetAnticipatingPoppers(bool isAnticipating) {
}

void A3DUI_BonusTimer::OnPopperPopped_Delay() {
}

void A3DUI_BonusTimer::OnPopperPopped(A3DUI_BonusTimerPartyPopper* finishedPopper) {
}

void A3DUI_BonusTimer::OnPopperFinished(A3DUI_BonusTimerPartyPopper* finishedPopper) {
}

void A3DUI_BonusTimer::OnMoveToCentreStart() {
}

void A3DUI_BonusTimer::OnHudComponentTick(float DeltaTime) {
}

void A3DUI_BonusTimer::OnCentreReached_Delay() {
}

void A3DUI_BonusTimer::OnCentreReached() {
}

void A3DUI_BonusTimer::NumberScaleCurve_Update(float NumberScale) {
}

void A3DUI_BonusTimer::NumberLocationCurve_Update(FVector NumberLocation) {
}

void A3DUI_BonusTimer::GetTimerToMoveToCentre(float& Duration) {
}

void A3DUI_BonusTimer::GetPopperIntroLength(float& Length) {
}

void A3DUI_BonusTimer::DiscWobbleCurve_Update(float discWobble) {
}

void A3DUI_BonusTimer::CentreSpinCurve_Update(FVector CentreSpin) {
}

void A3DUI_BonusTimer::ActivateTimer(float initialTime, float ringFractionalPercent) {
}


