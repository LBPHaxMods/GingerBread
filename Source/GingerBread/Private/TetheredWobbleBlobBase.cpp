#include "TetheredWobbleBlobBase.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"

ATetheredWobbleBlobBase::ATetheredWobbleBlobBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->BaseMesh = (UStaticMeshComponent*)RootComponent;
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->UseMaterialOverrideWorldLocation = false;
    this->MaterialOverrideWorldLocation = EWorldLocation::Amazon;
    this->GameplayTag->SetupAttachment(RootComponent);
}

void ATetheredWobbleBlobBase::SetWorldMaterials(EWorldLocation WorldLocation) {
}

void ATetheredWobbleBlobBase::OnLevelSettingsAvailable(AActor* ManagerActor) {
}


