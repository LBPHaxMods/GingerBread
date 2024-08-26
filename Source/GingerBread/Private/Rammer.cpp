#include "Rammer.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "AIAttackChanceComponent.h"
#include "AIIdleComponent.h"
#include "AISpawnComponent.h"
#include "AIThrownComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "LookAtComponent.h"
#include "Net/UnrealNetwork.h"
#include "RammerActionComponent.h"
#include "RammerChargeAnticipationComponent.h"
#include "RammerChargeComponent.h"
#include "RammerFlippedComponent.h"
#include "RammerHitResponseComponent.h"
#include "RammerTurnToTargetAnticipationComponent.h"

ARammer::ARammer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->CapsuleInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("CapsuleInteraction"));
    this->DamageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("DamageCollider"));
    this->DamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("DamageInteraction"));
    this->ThrownCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("ThrownCollider"));
    this->ThrownInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("ThrownInteraction"));
    this->ThrownShockwaveDamageCollider = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ThrownShockwaveDamageCollider"));
    this->ThrownShockwaveDamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("ThrownShockwaveDamageInteraction"));
    this->ChargeCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("ChargeCapsule"));
    this->ChargeInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("ChargeInteraction"));
    this->GrabChargeCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("GrabChargeCapsule"));
    this->GrabChargeInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("GrabChargeInteraction"));
    this->ChargeVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ChargeVFX"));
    this->IdleComponent_RENAME_ME_AGAIN = CreateDefaultSubobject<UAIIdleComponent>(TEXT("IdleComponent_RENAME_ME_AGAIN"));
    this->AttackChanceComponent = CreateDefaultSubobject<UAIAttackChanceComponent>(TEXT("AttackChanceComponent"));
    this->RammerAction = CreateDefaultSubobject<URammerActionComponent>(TEXT("RammerAction"));
    this->RammerChargeComponent = CreateDefaultSubobject<URammerChargeComponent>(TEXT("RammerChargeComponent"));
    this->ThrownComponent = CreateDefaultSubobject<UAIThrownComponent>(TEXT("ThrownComponent"));
    this->LookAtComponent = CreateDefaultSubobject<ULookAtComponent>(TEXT("LookAtComponent"));
    this->RammerChargeAnticipationComponent = CreateDefaultSubobject<URammerChargeAnticipationComponent>(TEXT("RammerChargeAnticipationComponent"));
    this->RammerTurnToTargetAnticipationComponent = CreateDefaultSubobject<URammerTurnToTargetAnticipationComponent>(TEXT("RammerTurnToTargetAnticipationComponent"));
    this->ChargeHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("ChargeHitPointsModifier"));
    this->ThrownHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("ThrownHitPointsModifier"));
    this->ThrownShockwaveHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("ThrownShockwavePointsModifier"));
    this->GrabChargeHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("GrabChargeHitPointsModifier"));
    this->RammerFlippedComponent = CreateDefaultSubobject<URammerFlippedComponent>(TEXT("RammerFlippedComponent"));
    this->SpawnComponent = CreateDefaultSubobject<UAISpawnComponent>(TEXT("SpawnComponent"));
    this->RammerHitResponseComponent = CreateDefaultSubobject<URammerHitResponseComponent>(TEXT("RammerHitResponseComponent"));
    this->AnimInstance = NULL;
    this->IsFlipped = false;
    this->KeepChargingWhileReacting = false;
    this->PickedUpBy = NULL;
    this->RammerVariant = ERammerConfigVariant::Base;
    this->DazeVFX = NULL;
    this->DazeVFXComponent = NULL;
    this->DamageSackboyAudioEvent = NULL;
    this->Rep_ChargeVFXActive = false;
    this->ThrownShockwaveDamageCollider->SetupAttachment(RootComponent);
    this->ThrownShockwaveDamageInteraction->SetupAttachment(ThrownShockwaveDamageCollider);
    this->ChargeCapsule->SetupAttachment(RootComponent);
    this->ChargeInteraction->SetupAttachment(ChargeCapsule);
    this->GrabChargeCapsule->SetupAttachment(RootComponent);
    this->GrabChargeInteraction->SetupAttachment(GrabChargeCapsule);
    this->ChargeVFX->SetupAttachment(RootComponent);
    this->CapsuleInteraction->SetupAttachment(RootComponent);
    this->DamageCollider->SetupAttachment(RootComponent);
    this->DamageInteraction->SetupAttachment(DamageCollider);
    this->ThrownCollider->SetupAttachment(RootComponent);
    this->ThrownInteraction->SetupAttachment(ThrownCollider);
}

void ARammer::TriggerDazeVFX(FName AttachPointName, FVector Offset) {
}


void ARammer::OnThrowEnd() {
}

void ARammer::OnRep_DazeVFXActive() {
}

void ARammer::OnRep_ChargeVFXActive() {
}

void ARammer::FinishDazeVFX() {
}

void ARammer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARammer, Rep_DazeVFXData);
    DOREPLIFETIME(ARammer, Rep_ChargeVFXActive);
}


