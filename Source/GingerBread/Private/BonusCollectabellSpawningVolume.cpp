#include "BonusCollectabellSpawningVolume.h"
#include "Components/BoxComponent.h"
#include "InteractionComponent.h"

ABonusCollectabellSpawningVolume::ABonusCollectabellSpawningVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnVolumeComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnVolumeComponent"));
    this->CleanupVolumeComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CleanupVolumeComponent"));
    this->CleanupInteractComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("CleanupInteractComponent"));
    this->SpawnLargeCollectabells = false;
    this->SpawnFrequency = EBonusRoomDensity::Medium;
    this->MaxConcurrentItems = EBonusRoomDensity::Medium;
    this->MaximumAngularImpulse = 360.00f;
    this->SpawnVolumeComponent->SetupAttachment(RootComponent);
    this->CleanupVolumeComponent->SetupAttachment(RootComponent);
    this->CleanupInteractComponent->SetupAttachment(RootComponent);
}

void ABonusCollectabellSpawningVolume::OnCleanupVolumeEndOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void ABonusCollectabellSpawningVolume::OnCleanupVolumeEndInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void ABonusCollectabellSpawningVolume::OnActorDestroyed(AActor* pActor) {
}

void ABonusCollectabellSpawningVolume::EDITOR_CopyProperties(bool InStartsActive, bool InIsManuallyTriggered, bool InSpawnLargeCollectabells, EBonusRoomDensity InSpawnFrequency, EBonusRoomDensity InMaxConcurrentItems, UBoxComponent* InSpawnVolumeComponent, UBoxComponent* InCleanupVolumeComponent) {
}

void ABonusCollectabellSpawningVolume::AUTH_SpawnLoop() {
}


