#include "Proogle.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "AIAttackChanceComponent.h"
#include "AIAttackRangeComponent.h"
#include "AICoordinatedAttackComponent.h"
#include "AIFlippedComponent.h"
#include "AIIdleComponent.h"
#include "AISpawnComponent.h"
#include "AIThrownComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "LookAtComponent.h"
#include "ProogleActionComponent.h"
#include "ProogleAlertTurnToComponent.h"
#include "ProogleCantAttackComponent.h"
#include "ProogleLaunchComponent.h"
#include "ProogleNormalAnticipateComponent.h"
#include "ProogleSpotShadowManagerComponent.h"
#include "ProogleStaticAnticipateComponent.h"
#include "ProogleSuperAnticipateComponent.h"
#include "ProogleSuperAttackComponent.h"
#include "SpotShadowComponent.h"

AProogle::AProogle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->DamageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("DamageCollider"));
    this->ThrownCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("ThrownCollider"));
    this->ThrownShockwaveDamageCollider = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ThrownShockwaveDamageCollider"));
    this->SmallHopDamageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("SmallHopDamageCollider"));
    this->HopDamageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("HopDamageCollider"));
    this->SquashDamageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("SquashDamageCollider"));
    this->DazeDamageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("DazeDamageCollider"));
    this->FallSpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("FallSpotShadow"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionComponent"));
    this->DamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("DamageInteraction"));
    this->ThrownInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("ThrownInteraction"));
    this->ThrownShockwaveDamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("ThrownShockwaveDamageInteraction"));
    this->SmallHopDamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("SmallHopDamageInteraction"));
    this->HopDamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("HopDamageInteraction"));
    this->SquashDamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("SquashDamageInteraction"));
    this->DazeDamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("DazeDamageInteraction"));
    this->ProogleAction = CreateDefaultSubobject<UProogleActionComponent>(TEXT("ProogleAction"));
    this->ProogleSuperAttackComponent = CreateDefaultSubobject<UProogleSuperAttackComponent>(TEXT("ProogleSuperAttackComponent"));
    this->LookAtComponent = CreateDefaultSubobject<ULookAtComponent>(TEXT("LookAtComponent"));
    this->AttackChanceComponent = CreateDefaultSubobject<UAIAttackChanceComponent>(TEXT("AttackChanceComponent"));
    this->FlippedComponent = CreateDefaultSubobject<UAIFlippedComponent>(TEXT("FlippedComponent"));
    this->CoordinatedAttackComponent = CreateDefaultSubobject<UAICoordinatedAttackComponent>(TEXT("CoordinatedAttackComponent"));
    this->AttackRangeComponent = CreateDefaultSubobject<UAIAttackRangeComponent>(TEXT("AttackRangeComponent"));
    this->StaticNormalAttackAnticipationComponent = CreateDefaultSubobject<UProogleStaticAnticipateComponent>(TEXT("StaticNormalAttackAnticipationComponent"));
    this->NormalAttackAnticipationComponent = CreateDefaultSubobject<UProogleNormalAnticipateComponent>(TEXT("NormalAttackAnticipationComponent"));
    this->SuperAttackAnticipationComponent = CreateDefaultSubobject<UProogleSuperAnticipateComponent>(TEXT("SuperAttackAnticipationComponent"));
    this->ProogleCantAttackComponent = CreateDefaultSubobject<UProogleCantAttackComponent>(TEXT("ProogleCantAttackComponent"));
    this->ProogleTurnToAlertTargetComponent = CreateDefaultSubobject<UProogleAlertTurnToComponent>(TEXT("ProogleTurnToAlertTargetComponent"));
    this->SpawnComponent = CreateDefaultSubobject<UAISpawnComponent>(TEXT("SpawnComponent"));
    this->ProogleLaunchComponent = CreateDefaultSubobject<UProogleLaunchComponent>(TEXT("ProogleLaunchComponent"));
    this->ThrownComponent = CreateDefaultSubobject<UAIThrownComponent>(TEXT("ThrownComponent"));
    this->IdleComponent = CreateDefaultSubobject<UAIIdleComponent>(TEXT("IdleComponent"));
    this->SpotShadowManagerComponent = CreateDefaultSubobject<UProogleSpotShadowManagerComponent>(TEXT("SpotShadowManagerComponent"));
    this->SmallHopDamageHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("SmallHopDamageHitPointsModifier"));
    this->HopDamageHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HopDamageHitPointsModifier"));
    this->SquashDamageHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("SquashDamageHitPointsModifier"));
    this->DazeDamageHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("DazeDamageHitPointsModifier"));
    this->ThrownDamageHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("ThrownDamageHitPointsModifier"));
    this->ThrownShockwaveDamageHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("ThrownShockwaveDamageHitPointsModifier"));
    this->AnimInstance = NULL;
    this->MonkeyBasketDazeDuration = 1.00f;
    this->FroogleVariant = EFroogleConfigVariant::Base;
    this->WaterSplashVFX = NULL;
    this->WaterSpashSFX = NULL;
    this->DamageCollider->SetupAttachment(RootComponent);
    this->ThrownCollider->SetupAttachment(RootComponent);
    this->ThrownShockwaveDamageCollider->SetupAttachment(RootComponent);
    this->SmallHopDamageCollider->SetupAttachment(RootComponent);
    this->HopDamageCollider->SetupAttachment(RootComponent);
    this->SquashDamageCollider->SetupAttachment(RootComponent);
    this->DazeDamageCollider->SetupAttachment(RootComponent);
    this->InteractionComponent->SetupAttachment(RootComponent);
    this->DamageInteraction->SetupAttachment(DamageCollider);
    this->ThrownInteraction->SetupAttachment(ThrownCollider);
    this->ThrownShockwaveDamageInteraction->SetupAttachment(ThrownShockwaveDamageCollider);
    this->SmallHopDamageInteraction->SetupAttachment(SmallHopDamageCollider);
    this->HopDamageInteraction->SetupAttachment(HopDamageCollider);
    this->SquashDamageInteraction->SetupAttachment(SquashDamageCollider);
    this->DazeDamageInteraction->SetupAttachment(DazeDamageCollider);
}

void AProogle::ThrowEndCallback() {
}

void AProogle::OnThrowEnd() {
}


