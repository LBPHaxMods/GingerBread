#include "CrumplerManager.h"

ACrumplerManager::ACrumplerManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Flat_ManagerMinRandTimeTryPlayAnim = 0.25f;
    this->Flat_ManagerMaxRandTimeTryPlayAnim = 1.25f;
    this->Flat_CrumplerMinRandTimeBetweenAnims = 0.25f;
    this->Flat_CrumplerMaxRandTimeBetweenAnims = 3.00f;
    this->Flat_FailedTriggerDelay = 0.10f;
}


