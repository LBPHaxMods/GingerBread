#include "SniperConfigShootBase.h"

USniperConfigShootBase::USniperConfigShootBase() {
    this->ThrowHeader = TEXT("_________________________________________________________Throw_________________________________________________________");
    this->MaxHorizontalThrowAngle = 40.00f;
    this->MaxUpwardsThrowAngle = 35.00f;
    this->MaxDownwardsThrowAngle = 60.00f;
    this->ThrowArc = 0.72f;
    this->ThrowGravityScale = 0.20f;
    this->AimAtFloor = false;
    this->CanUseSpread = true;
    this->MinDistanceToSpread = 0.00f;
    this->AttackSpread = 5.00f;
    this->MaxPredictionAngleDeviation = 30.00f;
    this->PredictionProjectileSpeedEstimate = 60.00f;
    this->ReloadHeader = TEXT("_________________________________________________________Reload_________________________________________________________");
    this->StartWithNeedlesEquipped = true;
    this->ReloadOrder.AddDefaulted(4);
    this->ReloadOrderEmpty = false;
    this->NeedleHeader = TEXT("_________________________________________________________Needle_________________________________________________________");
    this->NeedleMovementInitialSpeed = 0.00f;
    this->NeedleMovementMaxSpeed = 0.00f;
    this->NeedleGravityScale = 0.40f;
    this->NeedleLifeSpanWhenStuck = 2.00f;
    this->NeedleDissolveDuration = 1.00f;
    this->NeedleLifeSpanWhenDropped = 2.00f;
    this->NeedleLifeSpanWhenHomingDisabled = 60.00f;
    this->NeedleHomingHeader = TEXT("_________________________________________________________NeedleHoming_________________________________________________________");
    this->HomingEnabled = false;
    this->StartHomingDelay = 0.00f;
    this->DistanceToStopHoming = 5.00f;
    this->DistanceToStopHomingZ = 1.00f;
    this->MaxHomingTime = 7.00f;
    this->HomingStrength = 1.00f;
    this->HomingStrengthZ = 1.00f;
    this->HomingPredictAhead = 0.00f;
    this->HomingHeightOffset = 0.00f;
}


