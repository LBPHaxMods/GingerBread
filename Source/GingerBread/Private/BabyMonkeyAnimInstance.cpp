#include "BabyMonkeyAnimInstance.h"

UBabyMonkeyAnimInstance::UBabyMonkeyAnimInstance() {
    this->PickedUpSpeed = 0.00f;
    this->IsCelebrating = false;
    this->EnterIdle = false;
    this->ExitIdle = false;
    this->EnterPickedUp = false;
    this->ExitPickedUp = false;
    this->EnterThrown = false;
    this->ExitThrown = false;
    this->EnterRolling = false;
    this->ExitRolling = false;
    this->EnterJumping = false;
    this->ExitJumping = false;
    this->EnterRespawning = false;
    this->ExitRespawning = false;
    this->EnterFollowing = false;
    this->ExitFollowing = false;
    this->EnterHit = false;
    this->ExitHit = false;
}

void UBabyMonkeyAnimInstance::SetState(EMonkeyState NewState) {
}


