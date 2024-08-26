#include "BabyMonkeySpawnerActivator.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "InteractionComponent.h"
#include "OverlapManagerComponent.h"

ABabyMonkeySpawnerActivator::ABabyMonkeySpawnerActivator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

    this->SceneComponent = (USceneComponent*)RootComponent;
    this->SphereOverlapComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereOverlapComponent"));
    this->BoxOverlapComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxOverlapComponent"));
    this->OverlapManagerComponent = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManagerComponent"));
    this->InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionComponent"));
    this->Enabled = true;
    this->UseSphericalShape = true;
    this->SphereRadius = 30.00f;
    this->SphereOverlapComponent->SetupAttachment(RootComponent);
    this->BoxOverlapComponent->SetupAttachment(RootComponent);
    this->InteractionComponent->SetupAttachment(RootComponent);
}

void ABabyMonkeySpawnerActivator::OnEndOverlapLastSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void ABabyMonkeySpawnerActivator::OnEndInteractionLastSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void ABabyMonkeySpawnerActivator::OnBeginOverlapFirstSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ABabyMonkeySpawnerActivator::OnBeginInteractionFirstSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}


