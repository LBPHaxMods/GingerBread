#include "RhythmicRammer.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/TimelineComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"

ARhythmicRammer::ARhythmicRammer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("DamageCollider"));
    this->DamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("DamageInteraction"));
    this->ChargeCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("ChargeCapsule"));
    this->ChargeInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("ChargeInteraction"));
    this->ChargeHitPointsModifierComponent = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("ChargeHitPointsModifierComponent"));
    this->ChargingTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ChargingTimeline"));
    this->BrakingTurnTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("BrakingTurnTimeline"));
    this->PositionSequence.AddDefaulted(1);
    this->RearingPreStompDuration = 1.00f;
    this->RearingPostStompDuration = 1.00f;
    this->BrakingAnticipationDuration = 1.00f;
    this->ChargingDamageDisableTime = 0.90f;
    this->ChargingTimelineCurve = NULL;
    this->BrakingTurnTimelineCurve = NULL;
    this->DeathParticleSystem = NULL;
    this->DeathAudioEvent = NULL;
    this->DamageCollider->SetupAttachment(SkeletalMeshComponent);
    this->DamageInteraction->SetupAttachment(DamageCollider);
    this->ChargeCapsule->SetupAttachment(SkeletalMeshComponent);
    this->ChargeInteraction->SetupAttachment(ChargeCapsule);
}

void ARhythmicRammer::PlayStoppingAnimation() {
}

void ARhythmicRammer::OnChargingTimelineUpdated(const float Alpha) {
}

void ARhythmicRammer::OnBrakingTurnTimelineUpdated(const float Alpha) {
}

void ARhythmicRammer::DisableChargeDamage() {
}

void ARhythmicRammer::ClientSynchronisePosition_Implementation(int32 ServerPositionIndex, bool ServerChargedSinceFirstWake, float ChargeTimelineAlpha, float ChargeTimelinePlayRate) {
}

void ARhythmicRammer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARhythmicRammer, InitialTransformVariant);
}


