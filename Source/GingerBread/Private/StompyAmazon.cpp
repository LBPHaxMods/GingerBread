#include "StompyAmazon.h"
#include "EStompyConfigVariant.h"
#include "StompySpinBaseComponent.h"

AStompyAmazon::AStompyAmazon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(3);
    this->StompySpinComponent = CreateDefaultSubobject<UStompySpinBaseComponent>(TEXT("StompySpinComponent"));
    this->StompyVariant = EStompyConfigVariant::Amazon;
}


