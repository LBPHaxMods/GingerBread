#include "SackboyWeaponBase.h"

ASackboyWeaponBase::ASackboyWeaponBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Carrier = NULL;
    this->ThrowSpeed = 96.00f;
    this->ThrowUpSpeed = 32.00f;
    this->Thrower = NULL;
    this->WeaponType = ESackboyWeaponType::InHand;
    this->HoldPrimitive = NULL;
}













bool ASackboyWeaponBase::IsBeingHeld() const {
    return false;
}


