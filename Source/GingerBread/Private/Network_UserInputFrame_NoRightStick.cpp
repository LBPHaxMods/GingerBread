#include "Network_UserInputFrame_NoRightStick.h"

FNetwork_UserInputFrame_NoRightStick::FNetwork_UserInputFrame_NoRightStick() {
    this->FrameId = 0;
    this->PrimaryActivityAndGravity = 0;
    this->PrimaryActivityTime = 0;
    this->SecondaryActivityTime = 0;
    this->InputDownAndSecondaryActivity = 0;
    this->TimeSinceSackboyInteraction = 0;
    this->BlasterHovering = false;
    this->RollLocked = false;
    this->HasSupport = false;
    this->InSingleRollHole = false;
}

