#include "GruntyAttackComponent.h"

UGruntyAttackComponent::UGruntyAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxShieldAttackAngle = 30.00f;
    this->ShieldAnticipationDuration = 0.30f;
    this->ShieldDamageDuration = 0.40f;
    this->ShieldExtendDuration = 0.80f;
    this->BasicAttackAnim = TEXT("AttackAnim");
    this->BasicPreDamageDelay = 0.50f;
    this->BasicMidDamageDelay = 0.20f;
    this->BasicPostDamageDelay = 0.45f;
    this->BasicMoveSpeed = 20.00f;
}


