#include "RideOnEvent_CheckPointHandler.h"

ARideOnEvent_CheckPointHandler::ARideOnEvent_CheckPointHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivateWithPlayerAmount.AddDefaulted(4);
    this->bEnableSpawning = false;
    this->bActivateCheckPoint = false;
}

void ARideOnEvent_CheckPointHandler::SetActiveCheckPoint(bool bActive) {
}

USpawnPointComponent* ARideOnEvent_CheckPointHandler::FindSpawnPoint() const {
    return NULL;
}


