#include "VexConfigConveyorBase.h"

UVexConfigConveyorBase::UVexConfigConveyorBase() {
    this->FlamejetsPossiblyActivePerConveyor.AddDefaulted(4);
    this->JetSetup.AddDefaulted(4);
    this->ReachedApexUnitInterval = 0.64f;
    this->TrackSplashVFX = NULL;
}


