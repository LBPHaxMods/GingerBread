#include "MonorailManager.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"
#include "TriggerActorComponent.h"

AMonorailManager::AMonorailManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->Root = (USceneComponent*)RootComponent;
    this->TriggerComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("Trigger"));
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->bIsActive = false;
    this->Billboard->SetupAttachment(RootComponent);
}

void AMonorailManager::Trigger_Implementation() {
}

void AMonorailManager::Deactivate_Implementation() {
}

void AMonorailManager::Activate_Implementation(bool AutoTrigger) {
}


