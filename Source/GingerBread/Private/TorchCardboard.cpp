#include "TorchCardboard.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "TriggerActorComponent.h"

ATorchCardboard::ATorchCardboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->Root = (USceneComponent*)RootComponent;
    this->MainMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMeshComp"));
    this->SpinnerMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpinnerMeshComp"));
    this->FlameMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlameMeshComp"));
    this->TriggerActorComp = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComp"));
    this->TorchType = ETorchCardboardType::Default;
    this->DisableCollision = false;
    this->RevolutionsPerSecond = 0.85f;
    this->MainMeshComp->SetupAttachment(RootComponent);
    this->SpinnerMeshComp->SetupAttachment(RootComponent);
    this->FlameMeshComp->SetupAttachment(RootComponent);
}


