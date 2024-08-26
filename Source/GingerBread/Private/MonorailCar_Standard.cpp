#include "MonorailCar_Standard.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"

AMonorailCar_Standard::AMonorailCar_Standard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->Root = (USceneComponent*)RootComponent;
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->AkMonorailCar = CreateDefaultSubobject<UAkComponent>(TEXT("AkMonorailCar"));
    this->bCanPlayAudio = false;
    this->AudioStartEvent = NULL;
    this->AudioStopEvent = NULL;
    this->HapticsLoopStartEvent = NULL;
    this->HapticsLoopStopEvent = NULL;
    this->StaticMesh->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->AkMonorailCar->SetupAttachment(RootComponent);
}

void AMonorailCar_Standard::OnMonorailCarEndMove_Implementation() {
}

void AMonorailCar_Standard::OnMonorailCarBeginMove_Implementation() {
}


