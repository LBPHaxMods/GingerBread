#include "WAMWinLossBanner.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"

AWAMWinLossBanner::AWAMWinLossBanner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->Default = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Default"));
    this->Win = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Win"));
    this->Loss = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Loss"));
    this->BannerSpinTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("BannerSpinTimeline"));
    this->BannerSpinTimeline_AlphaCurve = NULL;
    this->Default->SetupAttachment(RootComponent);
    this->Win->SetupAttachment(RootComponent);
    this->Loss->SetupAttachment(RootComponent);
}


