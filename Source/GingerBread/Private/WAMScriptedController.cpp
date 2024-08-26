#include "WAMScriptedController.h"

AWAMScriptedController::AWAMScriptedController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RoundTimes.AddDefaulted(5);
    this->MoleHitScorePerWave.AddDefaulted(5);
}


