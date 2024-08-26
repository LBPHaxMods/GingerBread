#include "MeanieMiniboss.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "AIAttackRangeComponent.h"
#include "AITargetPredictionComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "MeanieMinibossCommanderComponent.h"
#include "MeanieMinibossDynamicHitPointsComponent.h"
#include "MeanieMinibossFallComponent.h"
#include "MinibossMeanieActionComponent.h"
#include "MinibossMeanieMovementParamsComponent.h"
#include "MinibossMeaniePhaseComponent.h"
#include "MinibossMeaniePunchAttackComponent.h"
#include "MinibossMeanieSlamAttackComponent.h"
#include "Net/UnrealNetwork.h"

AMeanieMiniboss::AMeanieMiniboss(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->HeadCapsuleFallen = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HeadCapsuleFallen"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->HeadBoxUpright = CreateDefaultSubobject<UBoxComponent>(TEXT("HeadBoxUpright"));
    this->HeadBoxGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("HeadBoxGameplayTag"));
    this->HeadHealthCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("HeadHealthCollider"));
    this->LegsCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LegsCapsule"));
    this->LeftHandSlamDamageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftHandSlamDamageCollider"));
    this->RightHandSlamDamageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("RightHandSlamDamageCollider"));
    this->LeftHandShootDamageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftHandShootDamageCollider"));
    this->RightHandShootDamageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("RightHandShootDamageCollider"));
    this->LeftArmDamageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftArmDamageCollider"));
    this->RightArmDamageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("RightArmDamageCollider"));
    this->TrailVFXComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TrailVFXComponent"));
    this->HeadFallenInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("HeadFallenInteraction"));
    this->HeadUprightInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("HeadUprightInteraction"));
    this->HeadHealthInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("HeadHealthInteraction"));
    this->LegsInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("LegsInteraction"));
    this->LeftHandSlamDamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("LeftHandSlamDamageInteraction"));
    this->RightHandSlamDamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("RightHandSlamDamageInteraction"));
    this->LeftHandShootDamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("LeftHandShootDamageInteraction"));
    this->RightHandShootDamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("RightHandShootDamageInteraction"));
    this->LeftArmDamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("LeftArmDamageInteraction"));
    this->RightArmDamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("RightArmDamageInteraction"));
    this->ShootLeftShortRangeHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("ShootLeftShortRangeHitPointsModifier"));
    this->ShootRightShortRangeHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("ShootRightShortRangeHitPointsModifier"));
    this->ShootLeftLongRangeHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("ShootLeftLongRangeHitPointsModifier"));
    this->ShootRightLongRangeHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("ShootRightLongRangeHitPointsModifier"));
    this->LeftSlamHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("LeftSlamHitPointsModifier"));
    this->RightSlamHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("RightSlamHitPointsModifier"));
    this->AttackRangeComponent = CreateDefaultSubobject<UAIAttackRangeComponent>(TEXT("AttackRangeComponent"));
    this->MeanieMinibossActionComponent = CreateDefaultSubobject<UMinibossMeanieActionComponent>(TEXT("MeanieMinibossActionComponent"));
    this->MeanieMinibossPhaseComponent = CreateDefaultSubobject<UMinibossMeaniePhaseComponent>(TEXT("MeanieMinibossPhaseComponent"));
    this->MeanieMinibossMovementParamsComponent = CreateDefaultSubobject<UMinibossMeanieMovementParamsComponent>(TEXT("MeanieMinibossMovementParamsComponent"));
    this->MeanieMinibossPunchAttackComponent = CreateDefaultSubobject<UMinibossMeaniePunchAttackComponent>(TEXT("MeanieMinibossPunchAttackComponent"));
    this->DynamicHitPointsComponent = CreateDefaultSubobject<UMeanieMinibossDynamicHitPointsComponent>(TEXT("DynamicHitPointsComponent"));
    this->FallComponent = CreateDefaultSubobject<UMeanieMinibossFallComponent>(TEXT("FallComponent"));
    this->SlamAttackComponent = CreateDefaultSubobject<UMinibossMeanieSlamAttackComponent>(TEXT("SlamAttackComponent"));
    this->CommanderComponent = CreateDefaultSubobject<UMeanieMinibossCommanderComponent>(TEXT("CommanderComponent"));
    this->TargetPredictionComponent = CreateDefaultSubobject<UAITargetPredictionComponent>(TEXT("TargetPredictionComponent"));
    this->AkHapticsComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkHapticsComponent"));
    this->Variant = EMinibossMeanieConfigVariant::Base;
    this->ArenaRingManager = NULL;
    this->IsInvulnerable = false;
    this->DynamicNumPlayers = -1;
    this->HeadFallenInteraction->SetupAttachment(HeadCapsuleFallen);
    this->HeadUprightInteraction->SetupAttachment(HeadBoxUpright);
    this->HeadHealthInteraction->SetupAttachment(HeadHealthCollider);
    this->LegsInteraction->SetupAttachment(LegsCapsule);
    this->LeftHandSlamDamageInteraction->SetupAttachment(LeftHandSlamDamageCollider);
    this->RightHandSlamDamageInteraction->SetupAttachment(RightHandSlamDamageCollider);
    this->LeftHandShootDamageInteraction->SetupAttachment(LeftHandShootDamageCollider);
    this->RightHandShootDamageInteraction->SetupAttachment(RightHandShootDamageCollider);
    this->LeftArmDamageInteraction->SetupAttachment(LeftArmDamageCollider);
    this->RightArmDamageInteraction->SetupAttachment(RightArmDamageCollider);
    this->AkHapticsComponent->SetupAttachment(RootComponent);
}

void AMeanieMiniboss::OnRep_DynamicNumPlayers() {
}

void AMeanieMiniboss::OnGruntyLandedCallback(AActor* Grunty, const FHitResult& Hit) {
}

void AMeanieMiniboss::OnGruntyDied(AActor* Murderer) {
}

void AMeanieMiniboss::OnAlertStateChanged(EAlertState oldAlertState, EAlertState newAlertState) {
}

void AMeanieMiniboss::Multicast_GruntyEmitted_Implementation(AGrunty* LaunchedGrunty) {
}

void AMeanieMiniboss::IntroCutsceneStarted() {
}

void AMeanieMiniboss::Initialise(AActor* ArenaCentreActor) {
}

void AMeanieMiniboss::EmitGrunty_Implementation(float Angle, float Distance) {
}

void AMeanieMiniboss::Auth_TriggerAdditiveAnim_Implementation(EMinibossMeanieAdditiveState AdditiveAnim) {
}

void AMeanieMiniboss::ArenaManipulationStart() {
}

void AMeanieMiniboss::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMeanieMiniboss, IsInvulnerable);
    DOREPLIFETIME(AMeanieMiniboss, DynamicNumPlayers);
}


