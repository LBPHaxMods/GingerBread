#include "BigLifePickupAnimInstance.h"

UBigLifePickupAnimInstance::UBigLifePickupAnimInstance() {
    this->PlayRate = 1.00f;
    this->Fallen = false;
    this->Collected = false;
    this->LifePickupEntry = ELifePickupAnimEntry::Angle0;
}


