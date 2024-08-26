#include "RideOnTeleporterEvent.h"

ARideOnTeleporterEvent::ARideOnTeleporterEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivateWithPlayerAmount.AddDefaulted(4);
    this->TeleportTargetText = NULL;
    this->TeleportOffset = 0.00f;
}


