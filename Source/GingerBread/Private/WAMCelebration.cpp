#include "WAMCelebration.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AWAMCelebration::AWAMCelebration(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->Banner = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Banner"));
    this->OtherBanner = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OtherBanner"));
    this->RoundDefaultSM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RoundDefaultSM"));
    this->RoundWinSM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RoundWinSM"));
    this->RoundLostSM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RoundLostSM"));
    this->Whack_a_mole_GameRef = NULL;
    this->MoleCelebrateConfettiAudio = NULL;
    this->MoleCelebrateFanfareAudio = NULL;
    this->WAMWinLossBannerBP = NULL;
    this->RoundDefaultSM->SetupAttachment(RootComponent);
    this->RoundWinSM->SetupAttachment(RootComponent);
    this->RoundLostSM->SetupAttachment(RootComponent);
    this->Banner->SetupAttachment(RootComponent);
    this->OtherBanner->SetupAttachment(RootComponent);
}

void AWAMCelebration::RoundResult(int32 RoundNumber, bool RoundWon) {
}

void AWAMCelebration::GameWon() {
}

void AWAMCelebration::GameLost() {
}


