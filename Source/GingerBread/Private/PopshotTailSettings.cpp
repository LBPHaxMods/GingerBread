#include "PopshotTailSettings.h"

FPopshotTailSettings::FPopshotTailSettings() {
    this->TailLinearDamping = 0.00f;
    this->TailMassGrabbed = 0.00f;
    this->TailMassNotGrabbed = 0.00f;
    this->OverpullDistance = 0.00f;
    this->GrappleAngleLimit = 0.00f;
    this->PreferredGrappleReelInSeperation = 0.00f;
    this->MinGrappleForce = 0.00f;
    this->MaxGrappleForce = 0.00f;
    this->MaxPullInForce = 0.00f;
    this->MaxPushOutForce = 0.00f;
    this->MaxSidewaysForce = 0.00f;
    this->MaxWraparoundPreventionForce = 0.00f;
    this->WraparoundPreventionLimit = 0.00f;
    this->MaxUpwardsCorrectionForce = 0.00f;
    this->UpwardsCorrectionLimit = 0.00f;
    this->MaxFallingForce = 0.00f;
    this->MaxReturnForce = 0.00f;
    this->MaxSackboyHoldOffset = 0.00f;
    this->AutoAlignRotationSpeed = 0.00f;
    this->AutoAlignSackboyHeightDelta = 0.00f;
}

