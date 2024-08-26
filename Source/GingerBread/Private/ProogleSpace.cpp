#include "ProogleSpace.h"
#include "ProogleSpaceSuperAttackComponent.h"

AProogleSpace::AProogleSpace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SpaceSuperAttackComponent = CreateDefaultSubobject<UProogleSpaceSuperAttackComponent>(TEXT("SpaceSuperAttackComponent"));
}


