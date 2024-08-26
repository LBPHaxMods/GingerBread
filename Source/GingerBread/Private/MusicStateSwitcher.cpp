#include "MusicStateSwitcher.h"
#include "Components/BoxComponent.h"
#include "InteractionComponent.h"

AMusicStateSwitcher::AMusicStateSwitcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));

    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->InteractComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractComponent"));
    this->TriggerActorComponent = NULL;
    this->UseFillSounds = false;
    this->FillInstrument = EFillInstruments::Drums;
    this->InteractComponent->SetupAttachment(RootComponent);
}

void AMusicStateSwitcher::UpdateMusicStateSequencePostDelay() {
}

void AMusicStateSwitcher::OnMusicStateChanged(ARhythmManager* pRhythmManager, FMusicStateTableRow NewMusicState, FMusicStateTableRow PreviousMusicState) {
}


