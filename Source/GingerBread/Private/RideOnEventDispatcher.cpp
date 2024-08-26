#include "RideOnEventDispatcher.h"
#include "GlobalEventTransceiver.h"

ARideOnEventDispatcher::ARideOnEventDispatcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivateWithPlayerAmount.AddDefaulted(4);
    this->GlobalEventTransceiver = CreateDefaultSubobject<UGlobalEventTransceiver>(TEXT("GlobalEventTransceiver"));
}


