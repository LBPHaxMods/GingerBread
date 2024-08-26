#include "BonusCollectabellSpawnerBase.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"

ABonusCollectabellSpawnerBase::ABonusCollectabellSpawnerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
    this->StartsActive = false;
    this->IsManuallyTriggered = false;
    this->SmallActorClass = NULL;
    this->LargeActorClass = NULL;
    this->BillboardComponent->SetupAttachment(RootComponent);
}


