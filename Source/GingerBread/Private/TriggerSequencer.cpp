#include "TriggerSequencer.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"
#include "TriggerActorComponent.h"

ATriggerSequencer::ATriggerSequencer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

    this->SceneComponent = (USceneComponent*)RootComponent;
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->Looping = false;
    this->LoopDelay = 0.00f;
    this->Enabled = true;
    this->BillboardComponent->SetupAttachment(RootComponent);
}

void ATriggerSequencer::Stop() {
}

void ATriggerSequencer::Start(bool Restart) {
}


