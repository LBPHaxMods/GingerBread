#include "WAMRandomiseController.h"

AWAMRandomiseController::AWAMRandomiseController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RoundTimes.AddDefaulted(5);
    this->MoleHitScorePerWave.AddDefaulted(5);
    this->NumberOfRounds = 1;
    this->UseFixedNumberOfMoles = false;
    this->NumberOfMoles = 2;
    this->NumberOfMolesPerPlayer = 2;
}


