#include "StompnadoBlackholePhaseParams.h"

FStompnadoBlackholePhaseParams::FStompnadoBlackholePhaseParams() {
    this->TimeBetweenBlackholes = 0.00f;
    this->BlackholeDuration = 0.00f;
    this->IsEndlessBlackhole = false;
    this->BlackholeRadius = 0.00f;
    this->BlackholeInnerballRadius = 0.00f;
    this->BlackholeHalfHeight = 0.00f;
    this->BlackholeGrowTime = 0.00f;
    this->BlackholeShrinkTime = 0.00f;
    this->SizeAdjustmentSpeed = 0.00f;
    this->NonSackboyVelocityInterpolationTime = 0.00f;
    this->BlackholeSackboySuckSpeedCurve = NULL;
    this->BlackholeSackboyPerpSuckSpeedCurve = NULL;
    this->BlackholeNonSackboySuckSpeedCurve = NULL;
    this->BlackholeNonSackboyPerpSuckSpeedCurve = NULL;
}

