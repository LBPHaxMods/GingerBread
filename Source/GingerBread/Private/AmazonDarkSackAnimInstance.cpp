#include "AmazonDarkSackAnimInstance.h"

UAmazonDarkSackAnimInstance::UAmazonDarkSackAnimInstance() {
    this->IdleState = EAmazonDarkSackIdleState::Invalid;
    this->FightState = EAmazonDarkSackFightState::Invalid;
    this->SpearPosition = EAmazonDarkSackSpearPosition::Invalid;
    this->EnterIdleState = false;
    this->ExitIdleState = false;
    this->EnterFightState = false;
    this->ExitFightState = false;
    this->EnterCelebrationState = false;
    this->ExitCelebrationState = false;
    this->EnterDeathState = false;
    this->CapsuleComponent = NULL;
}

bool UAmazonDarkSackAnimInstance::ChangeGenericState(EAmazonDarkSackGenericState NewState) {
    return false;
}


