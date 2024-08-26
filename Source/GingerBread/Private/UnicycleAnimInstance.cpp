#include "UnicycleAnimInstance.h"

UUnicycleAnimInstance::UUnicycleAnimInstance() {
    this->UnicycleIdle = true;
    this->UnicycleRolling = false;
    this->UnicycleJumping = false;
    this->UnicycleLanded = false;
    this->UnicycleBoosting = false;
    this->UnicycleStomping = false;
    this->UnicycleStompLanding = false;
    this->UnicycleForwards = 0.00f;
    this->UnicycleSteering = 0.00f;
}


