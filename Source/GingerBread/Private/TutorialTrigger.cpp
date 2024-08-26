#include "TutorialTrigger.h"
#include "Components/BillboardComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "InteractionComponent.h"

ATutorialTrigger::ATutorialTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerVolume"));
    this->InteractionBox = CreateDefaultSubobject<UInteractionComponent>(TEXT("TutorialInteractionVol"));
    this->SackboyAttachActorClass = NULL;
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->TriggerBox->SetupAttachment(RootComponent);
    this->InteractionBox->SetupAttachment(RootComponent);
    this->Billboard->SetupAttachment(RootComponent);
}

void ATutorialTrigger::WaitEventDispatcherAndSubscribe() {
}

void ATutorialTrigger::OnTimer() {
}

void ATutorialTrigger::OnPowerUpEquipped(EControlMode control_type) {
}

void ATutorialTrigger::OnEngageWithToy(ASackboy* SB, bool is_vehicle) {
}

void ATutorialTrigger::BeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo) {
}

void ATutorialTrigger::BeginInteractionOverlap(UInteractionComponent* OverlappedComp, AActor* Other, UInteractionComponent* OtherComp) {
}


