#include "ProogleSuperAttackComponent.h"

UProogleSuperAttackComponent::UProogleSuperAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnticipateAction = TEXT("SuperAttackJump");
    this->JumpAction = TEXT("SuperAttackJumpTurnDone");
    this->FallAction = TEXT("SuperAttackFall");
    this->LandAction = TEXT("SuperAttackLand");
    this->RecoveryAction = TEXT("SuperAttackRecover");
    this->PreJumpTime = 0.00f;
    this->JumpingTime = 0.40f;
    this->HoverTime = 0.62f;
    this->FallingTime = 0.20f;
    this->GroundedTime = 3.00f;
    this->RecoveryTime = 1.67f;
    this->JumpHeight = 100.00f;
    this->FallShadowScale_MaxHeight = 2.00f;
    this->FallShadowScale_Floor = 8.75f;
    this->FallShadowBlur_MaxHeight = 7.00f;
    this->FallShadowBlur_Floor = 0.50f;
    this->CanModifyDynamicShadow = false;
    this->TargetActor = NULL;
    this->LandingNavDataName = TEXT("IncreasedRadius");
}

void UProogleSuperAttackComponent::SetupSuperAttackTeleportEnd_Implementation() {
}

void UProogleSuperAttackComponent::SetupSuperAttackLandStart_Implementation() {
}

void UProogleSuperAttackComponent::SetupSuperAttackLandEnd_Implementation() {
}

void UProogleSuperAttackComponent::SetupSuperAttackJumpStart_Implementation() {
}

void UProogleSuperAttackComponent::SetupSuperAttackJumpEnd_Implementation() {
}


