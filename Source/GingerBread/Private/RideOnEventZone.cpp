#include "RideOnEventZone.h"
#include "ERideOnEventType.h"

ARideOnEventZone::ARideOnEventZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {

    this->ActivateWithPlayerAmount.AddDefaulted(4);
    this->EventType = ERideOnEventType::ZoneEvent;
    this->TimeBetweenEvents = 1.00f;
    this->ZoneType = ERideOnEventZoneType::NoCondition_Sequential_OneShot;
}

void ARideOnEventZone::TriggerNextEvent() {
}


