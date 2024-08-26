#include "Grunty.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "AIAttackRangeComponent.h"
#include "AIAvoidanceSpeedLimiterComponent.h"
#include "AIFlippedComponent.h"
#include "AIIdleComponent.h"
#include "AISpawnComponent.h"
#include "AIThrownComponent.h"
#include "GruntyActionComponent.h"
#include "GruntyAttackComponent.h"
#include "GruntyDestructibleObstacleComponent.h"
#include "GruntyStackComponent.h"
#include "GruntyStackLaunchComponent.h"
#include "GruntyTurnComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "LookAtComponent.h"

AGrunty::AGrunty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->DamageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("DamageCollider"));
    this->AttackCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("AttackCollider"));
    this->StackLaunchAttackCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("StackLaunchAttackCollider"));
    this->DestructibleObstacleDetectionRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DestructibleObstacleDetectionRoot"));
    this->DestructibleObstacleDetectionCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("DestructibleObstacleDetectionCollider"));
    this->AvoidanceCollider = CreateDefaultSubobject<USphereComponent>(TEXT("AvoidanceSpeedCollider"));
    this->ThrownCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("ThrownCollider"));
    this->DamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("DamageInteraction"));
    this->AttackInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("AttackInteraction"));
    this->StackLaunchAttackInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("StackLaunchAttackInteraction"));
    this->DestructibleObstacleDetectionInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("DestructibleObstacleDetectionInteraction"));
    this->AvoidanceInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("AvoidanceInteraction"));
    this->ThrownInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("ThrownInteraction"));
    this->GruntyAction = CreateDefaultSubobject<UGruntyActionComponent>(TEXT("GruntyAction"));
    this->AttackRangeComponent = CreateDefaultSubobject<UAIAttackRangeComponent>(TEXT("AttackRangeComponent"));
    this->BasicAttackModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("BasicAttackModifier"));
    this->StackLaunchAttackModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("StackLaunchAttackModifier"));
    this->ThrownHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("ThrownHitPointsModifier"));
    this->GruntyStackComponent = CreateDefaultSubobject<UGruntyStackComponent>(TEXT("GruntyStackComponent"));
    this->FlippedComponent = CreateDefaultSubobject<UAIFlippedComponent>(TEXT("FlippedComponent"));
    this->ThrowComponent = CreateDefaultSubobject<UAIThrownComponent>(TEXT("ThrowComponent"));
    this->IdleComponent = CreateDefaultSubobject<UAIIdleComponent>(TEXT("IdleComponent"));
    this->GruntyAttackComponent = CreateDefaultSubobject<UGruntyAttackComponent>(TEXT("GruntyAttackComponent"));
    this->GruntyTurnComponent = CreateDefaultSubobject<UGruntyTurnComponent>(TEXT("GruntyTurnComponent"));
    this->LookAtComponent = CreateDefaultSubobject<ULookAtComponent>(TEXT("LookAtComponent"));
    this->SpawnComponent = CreateDefaultSubobject<UAISpawnComponent>(TEXT("SpawnComponent"));
    this->GruntyStackLaunchComponent = CreateDefaultSubobject<UGruntyStackLaunchComponent>(TEXT("GruntyStackLaunchComponent"));
    this->AvoidanceSpeedLimiterComponent = CreateDefaultSubobject<UAIAvoidanceSpeedLimiterComponent>(TEXT("AvoidanceSpeedLimiterComponent"));
    this->GruntyDestructibleObstacleComponent = CreateDefaultSubobject<UGruntyDestructibleObstacleComponent>(TEXT("GruntyDestructibleObstacleComponent"));
    this->AnimInstance = NULL;
    this->Variant = EGruntyConfigVariant::Base;
    this->DamageCollider->SetupAttachment(RootComponent);
    this->AttackCollider->SetupAttachment(RootComponent);
    this->StackLaunchAttackCollider->SetupAttachment(RootComponent);
    this->DestructibleObstacleDetectionRoot->SetupAttachment(RootComponent);
    this->DestructibleObstacleDetectionCollider->SetupAttachment(DestructibleObstacleDetectionRoot);
    this->AvoidanceCollider->SetupAttachment(RootComponent);
    this->ThrownCollider->SetupAttachment(RootComponent);
    this->DamageInteraction->SetupAttachment(DamageCollider);
    this->AttackInteraction->SetupAttachment(AttackCollider);
    this->StackLaunchAttackInteraction->SetupAttachment(StackLaunchAttackCollider);
    this->DestructibleObstacleDetectionInteraction->SetupAttachment(DestructibleObstacleDetectionCollider);
    this->AvoidanceInteraction->SetupAttachment(AvoidanceCollider);
    this->ThrownInteraction->SetupAttachment(ThrownCollider);
}

void AGrunty::OnThrowEnd() {
}

void AGrunty::OnStackPositionChanged(EGruntyStackPosition NewStackPosition) {
}

void AGrunty::OnDetachedFromStack() {
}


