#include "RideonEventBaseInfo.h"

FRideonEventBaseInfo::FRideonEventBaseInfo() {
    this->EventEndDistance = 0.00f;
    this->DistanceAlongSpline = 0.00f;
    this->UsesEndEvent = false;
    this->IsActive = false;
    this->IsEnabled = false;
    this->AutoSetDistanceAlongSpline = false;
    this->EventType = ERideOnEventType::EventDispatcher;
}

