#include "WAMPrizeHole.h"
#include "Components/ArrowComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SplineComponent.h"
#include "Components/TimelineComponent.h"

AWAMPrizeHole::AWAMPrizeHole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DetectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DetectionSphere"));
    this->Prize = CreateDefaultSubobject<UChildActorComponent>(TEXT("Prize"));
    this->IdlePrizePos = CreateDefaultSubobject<USceneComponent>(TEXT("IdlePrizePos"));
    this->AwardPrizePos = CreateDefaultSubobject<USceneComponent>(TEXT("AwardPrizePos"));
    this->Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->RewardSpitArc = CreateDefaultSubobject<USplineComponent>(TEXT("RewardSpitArc"));
    this->OrbFlightTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("OrbFlightTimeline"));
    this->OrbFlightTimelineAlphaCurve = NULL;
    this->OrbFlightTimelineScaleCurve = NULL;
    this->OrbFlightTimelineScaleXCurve = NULL;
    this->OrbFlightTimelineBounceTranslationCurve = NULL;
    this->DetectionRadius = 20.00f;
    this->DetectionSphere->SetupAttachment(RootComponent);
    this->Prize->SetupAttachment(RootComponent);
    this->IdlePrizePos->SetupAttachment(RootComponent);
    this->AwardPrizePos->SetupAttachment(RootComponent);
    this->Arrow->SetupAttachment(RootComponent);
    this->RewardSpitArc->SetupAttachment(RootComponent);
}

void AWAMPrizeHole::VomitPrize() {
}

void AWAMPrizeHole::StopPrizeScale() {
}

void AWAMPrizeHole::OrbFlightTimelineScaleX_Update(const float ScaleX) {
}

void AWAMPrizeHole::OrbFlightTimelineScale_Update(const float Scale) {
}

void AWAMPrizeHole::OrbFlightTimelineBounceTranslation_Update(const FVector& Translation) {
}

void AWAMPrizeHole::OrbFlightTimelineAlpha_Update(const float Alpha) {
}

void AWAMPrizeHole::OrbFlightTimeline_Update() {
}

void AWAMPrizeHole::OnMemoryOrbCollected() {
}


