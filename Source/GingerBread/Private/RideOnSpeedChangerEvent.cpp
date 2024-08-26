#include "RideOnSpeedChangerEvent.h"
#include "ERideOnEventType.h"

ARideOnSpeedChangerEvent::ARideOnSpeedChangerEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivateWithPlayerAmount.AddDefaulted(4);
    this->EventType = ERideOnEventType::VehicleSpeedChanger;
    this->targetSpeed = 1.00f;
    this->changeDuration = 1.00f;
}


