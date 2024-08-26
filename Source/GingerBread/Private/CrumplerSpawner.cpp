#include "CrumplerSpawner.h"

ACrumplerSpawner::ACrumplerSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStartCrumple = true;
    this->CrumplerClass = NULL;
}


