#include "AIPickRunAwayLocationService.h"

UAIPickRunAwayLocationService::UAIPickRunAwayLocationService() {
    this->NodeName = TEXT("Pick Run Away Location");
    this->bCallTickOnSearchStart = true;
    this->MoveDirCalcInterval = 1.00f;
    this->MoveDirCalcRandomDeviation = 0.00f;
}


