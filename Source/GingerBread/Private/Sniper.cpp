#include "Sniper.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "AITargetPredictionComponent.h"
#include "AIThrownComponent.h"
#include "InteractionComponent.h"
#include "LookAtComponent.h"
#include "SniperActionComponent.h"
#include "SniperCanAttackComponent.h"
#include "SniperFlippedComponent.h"
#include "SniperNeedlesComponent.h"
#include "SniperReloadComponent.h"
#include "SniperRunAwayComponent.h"
#include "SniperThrowNeedleComponent.h"
#include "SniperTurnComponent.h"

ASniper::ASniper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->DamageCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DamageCollider"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->TailCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TailCapsule"));
    this->TailDamageCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TailDamageCollider"));
    this->DamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("DamageInteraction"));
    this->TailDamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("TailDamageInteraction"));
    this->ActionComponent = CreateDefaultSubobject<USniperActionComponent>(TEXT("ActionComponent"));
    this->CanAttackComponent = CreateDefaultSubobject<USniperCanAttackComponent>(TEXT("CanAttackComponent"));
    this->RunAwayComponent = CreateDefaultSubobject<USniperRunAwayComponent>(TEXT("RunAwayComponent"));
    this->ThrowNeedleComponent = CreateDefaultSubobject<USniperThrowNeedleComponent>(TEXT("ThrowNeedleComponent"));
    this->ReloadComponent = CreateDefaultSubobject<USniperReloadComponent>(TEXT("ReloadComponent"));
    this->ThrownComponent = CreateDefaultSubobject<UAIThrownComponent>(TEXT("ThrownComponent"));
    this->LookAtComponent = CreateDefaultSubobject<ULookAtComponent>(TEXT("LookAtComponent"));
    this->TurnComponent = CreateDefaultSubobject<USniperTurnComponent>(TEXT("TurnComponent"));
    this->FlippedComponent = CreateDefaultSubobject<USniperFlippedComponent>(TEXT("FlippedComponent"));
    this->NeedlesComponent = CreateDefaultSubobject<USniperNeedlesComponent>(TEXT("NeedlesComponent"));
    this->PredictionComponent = CreateDefaultSubobject<UAITargetPredictionComponent>(TEXT("PredictionComponent"));
    this->AnimInstance = NULL;
    this->SniperVariant = ESniperConfigVariant::Base;
    this->TailDamageInteraction->SetupAttachment(TailDamageCollider);
    this->DamageInteraction->SetupAttachment(DamageCollider);
}


