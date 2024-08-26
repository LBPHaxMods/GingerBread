#include "RideOnEventReceiver.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"
#include "GlobalEventTransceiver.h"

ARideOnEventReceiver::ARideOnEventReceiver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->GlobalEventTransceiver = CreateDefaultSubobject<UGlobalEventTransceiver>(TEXT("GlobalEventTransceiver"));
    this->EventStart = CreateDefaultSubobject<UBillboardComponent>(TEXT("EventStart"));
    this->EventStart->SetupAttachment(RootComponent);
}

void ARideOnEventReceiver::OnReceived(UGlobalEventTransceiver* Source) {
}


