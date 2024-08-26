#include "BonusCritterReceptacleStatic.h"
#include "Components/ArrowComponent.h"
#include "InteractionComponent.h"
#include "PickupContainerComponent.h"

ABonusCritterReceptacleStatic::ABonusCritterReceptacleStatic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BonusArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("BonusArrowComponent"));
    this->SmallBonusPickupContainerComponent = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("SmallBonusPickupContainerComponent"));
    this->LargeBonusPickupContainerComponent = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("LargeBonusPickupContainerComponent"));
    this->CollectabellDetectorInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("CollectabellDetectorInteractionComponent"));
    this->LargeBonusTag = TEXT("gold");
    this->BonusArrowComponent->SetupAttachment(RootComponent);
    this->SmallBonusPickupContainerComponent->SetupAttachment(BonusArrowComponent);
    this->LargeBonusPickupContainerComponent->SetupAttachment(BonusArrowComponent);
    this->CollectabellDetectorInteractionComponent->SetupAttachment(BasketBase);
}

void ABonusCritterReceptacleStatic::OnCollectabellDetectorBeginOverlap(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComponent) {
}

void ABonusCritterReceptacleStatic::OnAllPickupsSpawned(UPickupContainerComponent* pPickupContainerComponent, const TArray<AActor*> SpawnedPickups) {
}

void ABonusCritterReceptacleStatic::OnActorCounted(ACritterReceptacle* pCritterReceptacle, ASackboy* pThrownBy, AActor* pCountedActor) {
}


