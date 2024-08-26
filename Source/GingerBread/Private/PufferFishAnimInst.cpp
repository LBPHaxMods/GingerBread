#include "PufferFishAnimInst.h"

UPufferFishAnimInst::UPufferFishAnimInst() {
    this->RollValue = 0.00f;
    this->IdleSwimSpeed = 1.00f;
    this->EnterIdle = true;
    this->ExitIdle = false;
    this->EnterCelebrate = false;
    this->ExitCelebrate = false;
    this->EnterHit = false;
    this->ExitHit = false;
    this->StartTransitionFromHitTime = 0.43f;
    this->StartTransitionFromCelebrateTime = 0.63f;
}


