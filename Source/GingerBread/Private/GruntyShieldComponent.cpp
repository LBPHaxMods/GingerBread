#include "GruntyShieldComponent.h"

UGruntyShieldComponent::UGruntyShieldComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SocketToAttachTo = TEXT("r_weapon_1_trail");
    this->ShieldToSpawn = NULL;
    this->AttackDuration = 1.00f;
    this->AnticipationDuration = 0.25f;
    this->MaxAngleToAttack = 30.00f;
}

void UGruntyShieldComponent::OnShieldGrappled(AGruntyBaseShield* Shield) {
}

void UGruntyShieldComponent::EquipItem(FVector SpawnLocation, FRotator SpawnRotation, AGingerbreadAICharacter* Instigator) {
}

void UGruntyShieldComponent::DropItem(bool KeepStatic) {
}


