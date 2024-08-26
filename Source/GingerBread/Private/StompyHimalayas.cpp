#include "StompyHimalayas.h"
#include "EStompyConfigVariant.h"
#include "StompySpinBaseComponent.h"

AStompyHimalayas::AStompyHimalayas(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(3);
    this->StompySpinComponent = CreateDefaultSubobject<UStompySpinBaseComponent>(TEXT("StompySpinComponent"));
    this->StompyVariant = EStompyConfigVariant::Himalyas;
}


