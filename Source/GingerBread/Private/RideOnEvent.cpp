#include "RideOnEvent.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"
#include "RideOnPathEventComponent.h"

ARideOnEvent::ARideOnEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->RideOnPathEvent = CreateDefaultSubobject<URideOnPathEventComponent>(TEXT("RideOnPathEvent"));
    this->Root = (USceneComponent*)RootComponent;
    this->EventStart = CreateDefaultSubobject<UBillboardComponent>(TEXT("EventStart"));
    this->EventStartText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("EventStartText"));
    this->EventEnd = CreateDefaultSubobject<UBillboardComponent>(TEXT("EventEnd"));
    this->EventEndText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("EventEndText"));
    this->DebugText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("DebugText"));
    this->ActivateWithPlayerAmount.AddDefaulted(4);
    this->ActivateWithoutPlayers = false;
    this->EventEndDistance = 0.00f;
    this->DistanceAlongSpline = 0.00f;
    this->RideOnPath = NULL;
    this->RideOnVehicle = NULL;
    this->IsActive = false;
    this->LockColour = false;
    this->UsesEndEvent = false;
    this->IsEnabled = true;
    this->AutoSetDistanceAlongSpline = true;
    this->EventType = ERideOnEventType::EventDispatcher;
    this->EventStart->SetupAttachment(RootComponent);
    this->EventStartText->SetupAttachment(EventStart);
    this->EventEnd->SetupAttachment(RootComponent);
    this->EventEndText->SetupAttachment(EventEnd);
    this->DebugText->SetupAttachment(RootComponent);
}

void ARideOnEvent::SetVisualisationsLocations() {
}

void ARideOnEvent::SetUpEvent() {
}

void ARideOnEvent::SetEventVisualisations() {
}


void ARideOnEvent::OnExitEvent() {
}

void ARideOnEvent::OnEnterEvent() {
}

void ARideOnEvent::AttemptExitEvent(URideOnPathFollowerComponent* Follower) {
}

void ARideOnEvent::AttemptEnterEvent(URideOnPathFollowerComponent* Follower) {
}


