#include "MamapedeVFXComponent.h"
#include "Net/UnrealNetwork.h"

UMamapedeVFXComponent::UMamapedeVFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Server_DebrisState = EMamapedeFallingDebrisVFXState::None;
    this->BurrowVFXEnabled = false;
    this->GroundDive_ExitGroundVFX = NULL;
    this->GroundDive_EnterGroundVFX = NULL;
    this->VerticalJump_ExitGroundVFX = NULL;
    this->VerticalJump_EnterGroundVFX = NULL;
    this->FollowSpline_ExitGroundVFX = NULL;
    this->FollowSpline_EnterGroundVFX = NULL;
    this->WallCharge_ExitWallVFX = NULL;
    this->WallCharge_EnterWallVFX = NULL;
    this->JumpFromWall_EnterGroundVFX = NULL;
    this->RageHeadPop_SignpostVFX = NULL;
    this->PersistentDebris1 = NULL;
    this->PersistentDebris2 = NULL;
}

void UMamapedeVFXComponent::TriggerVFX_Implementation(EMamapedeVFXType VFXType, const FVector& EmitterLocation, const FRotator& EmitterRotation) {
}

void UMamapedeVFXComponent::DeactivateVFX_Implementation(EMamapedeVFXType VFXType) {
}

void UMamapedeVFXComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMamapedeVFXComponent, Server_DebrisState);
    DOREPLIFETIME(UMamapedeVFXComponent, BurrowVFXEnabled);
}


