#include "ElectricCoil.h"
#include "AkComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

AElectricCoil::AElectricCoil(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoilMesh"));

    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->ElectricityStartAudioEvent = NULL;
    this->ElectricityStopAudioEvent = NULL;
    this->CoilElectricVFX = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoilElectricVFX"));
    this->ElectricWallVisuals = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ElectricWallVisuals"));
    this->PlaneDamager = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SBDamager"));
    this->CoilMesh = (UStaticMeshComponent*)RootComponent;
    this->CoilVibrationZone = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CoilVibrationZone"));
    this->CoilVibrationInteractZone = CreateDefaultSubobject<UInteractionComponent>(TEXT("CoilVibraionInteractZone"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->ElectricForceFeedbackEffect = NULL;
    this->ConnectedCoilMovesIndependently = false;
    this->ConnectedCoil = NULL;
    this->IsActive = true;
    this->IsEnabled = true;
    this->AkComponent->SetupAttachment(RootComponent);
    this->CoilElectricVFX->SetupAttachment(RootComponent);
    this->ElectricWallVisuals->SetupAttachment(PlaneDamager);
    this->PlaneDamager->SetupAttachment(RootComponent);
    this->CoilVibrationZone->SetupAttachment(RootComponent);
    this->CoilVibrationInteractZone->SetupAttachment(RootComponent);
}

void AElectricCoil::UpdateElectricConnection() {
}

void AElectricCoil::Trigger_Implementation() {
}

void AElectricCoil::OnWake_Implementation() {
}

void AElectricCoil::OnSleep_Implementation() {
}

void AElectricCoil::OnRep_EnabledChanged() {
}

void AElectricCoil::OnRep_ActiveChanged() {
}

void AElectricCoil::Deactivate_Implementation() {
}

void AElectricCoil::Activate_Implementation(bool bAutoTrigger) {
}

void AElectricCoil::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AElectricCoil, IsActive);
    DOREPLIFETIME(AElectricCoil, IsEnabled);
}


