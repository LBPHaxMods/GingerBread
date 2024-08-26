#include "3DUI_InWorldScoreCollection.h"
#include "Components/ChildActorComponent.h"

A3DUI_InWorldScoreCollection::A3DUI_InWorldScoreCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Score1 = CreateDefaultSubobject<UChildActorComponent>(TEXT("Score1"));
    this->Score2 = CreateDefaultSubobject<UChildActorComponent>(TEXT("Score2"));
    this->Score3 = CreateDefaultSubobject<UChildActorComponent>(TEXT("Score3"));
    this->Score4 = CreateDefaultSubobject<UChildActorComponent>(TEXT("Score4"));
    this->Score1->SetupAttachment(RootComponent);
    this->Score2->SetupAttachment(RootComponent);
    this->Score3->SetupAttachment(RootComponent);
    this->Score4->SetupAttachment(RootComponent);
}

void A3DUI_InWorldScoreCollection::ResetAll() {
}

void A3DUI_InWorldScoreCollection::PlayScore(int32 score, FLinearColor Colour, FVector WorldLocation, bool isMultiplier, bool hasGlow) {
}

void A3DUI_InWorldScoreCollection::OnResetScore() {
}


