#include "RammerConfigTeleportSpace.h"

URammerConfigTeleportSpace::URammerConfigTeleportSpace() {
    this->MaxTeleportDistance = 40.00f;
    this->MinTeleportTravelDistance = 34.00f;
    this->TeleportDuration = 0.50f;
    this->ChargeAngleClamp = 20.00f;
    this->ChargeCachedForwardClampDuration = 0.35f;
    this->EntranceTeleportPortalDistance = 26.00f;
    this->PortalSeperationFromTargetActor = 5.00f;
}


