#include "Stompy.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "AIFlippedComponent.h"
#include "AIIdleComponent.h"
#include "AISpawnComponent.h"
#include "AIThrownComponent.h"
#include "InteractionComponent.h"
#include "LookAtComponent.h"
#include "StompyActionComponent.h"
#include "StompyCanAttackComponent.h"
#include "StompyChaseComponent.h"

AStompy::AStompy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->DamageCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("DamageCollider"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->DamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("DamageInteraction"));
    this->SpinHitCylinder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpinHitCylinder"));
    this->StompyCanAttackComponent = CreateDefaultSubobject<UStompyCanAttackComponent>(TEXT("StompyCanAttackComponent"));
    this->StompyActionComponent = CreateDefaultSubobject<UStompyActionComponent>(TEXT("StompyActionComponent"));
    this->FlippedComponent = CreateDefaultSubobject<UAIFlippedComponent>(TEXT("FlippedComponent"));
    this->ThrownComponent = CreateDefaultSubobject<UAIThrownComponent>(TEXT("ThrownComponent"));
    this->StompyChaseComponent = CreateDefaultSubobject<UStompyChaseComponent>(TEXT("StompyChaseComponent"));
    this->AIIdleComponent = CreateDefaultSubobject<UAIIdleComponent>(TEXT("AIIdleComponent"));
    this->StompySpinComponent = NULL;
    this->SpawnComponent = CreateDefaultSubobject<UAISpawnComponent>(TEXT("SpawnComponent"));
    this->LookAtComponent = CreateDefaultSubobject<ULookAtComponent>(TEXT("LookAtComponent"));
    this->AnimInstance = NULL;
    this->StompyVariant = EStompyConfigVariant::Base;
    this->SpinVFX = NULL;
    this->UseSpinVFX = true;
    this->DamageInteraction->SetupAttachment(DamageCollider);
    this->SpinHitCylinder->SetupAttachment(RootComponent);
}

void AStompy::OnAlertStateChanged(EAlertState oldAlertState, EAlertState newAlertState) {
}


