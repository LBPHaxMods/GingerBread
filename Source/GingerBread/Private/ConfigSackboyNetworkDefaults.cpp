#include "ConfigSackboyNetworkDefaults.h"

UConfigSackboyNetworkDefaults::UConfigSackboyNetworkDefaults() {
    this->DebugDrawFrame = false;
    this->DebugDrawSackboyLabels = false;
    this->DebugDrawGroupRollHoleSplineIndexAssignments = false;
    this->SkipGrabInterpolationForRemoteClients = true;
    this->PreventRelease = false;
    this->DebugSpinningWheelReleaseError = false;
    this->DebugConveyorReleaseError = false;
    this->DebugDrawSpinningWheelForward = false;
    this->DebugDrawSpinningWheelRight = false;
}


