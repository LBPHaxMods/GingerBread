#include "Popshot.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "AISpawnComponent.h"
#include "AITargetPredictionComponent.h"
#include "AIThrownComponent.h"
#include "ActorPoolComponent.h"
#include "InteractionComponent.h"
#include "LookAtComponent.h"
#include "PopshotActionComponent.h"
#include "PopshotCanAttackComponent.h"
#include "PopshotCowerComponent.h"
#include "PopshotRecoilComponent.h"
#include "PopshotReturnHomeComponent.h"
#include "PopshotShootProjectileComponent.h"
#include "PopshotTailComponent.h"
#include "PopshotTurnToTargetComponent.h"

APopshot::APopshot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->TailCollisionBase = CreateDefaultSubobject<USphereComponent>(TEXT("TailCollisionBase"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->TailVisualBase = CreateDefaultSubobject<USceneComponent>(TEXT("TailVisualBase"));
    this->TailMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TailMesh"));
    this->HealthCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HealthCollider"));
    this->HealthInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("HealthInteraction"));
    this->ThrownObjectsCollider = CreateDefaultSubobject<USphereComponent>(TEXT("ThrownObjectsCollider"));
    this->PopshotActionComponent = CreateDefaultSubobject<UPopshotActionComponent>(TEXT("PopshotAction"));
    this->PopshotCanAttackComponent = CreateDefaultSubobject<UPopshotCanAttackComponent>(TEXT("PopshotCanAttackComponent"));
    this->ThrownComponent = CreateDefaultSubobject<UAIThrownComponent>(TEXT("ThrownComponent"));
    this->PopshotRecoilComponent = CreateDefaultSubobject<UPopshotRecoilComponent>(TEXT("PopshotRecoilComponent"));
    this->PopshotReturnHomeComponent = CreateDefaultSubobject<UPopshotReturnHomeComponent>(TEXT("PopshotReturnHomeComponent"));
    this->PopshotTailComponent = CreateDefaultSubobject<UPopshotTailComponent>(TEXT("PopshotTailComponent"));
    this->ProjectilePool = CreateDefaultSubobject<UActorPoolComponent>(TEXT("ProjectilePool"));
    this->PopshotTurnToTargetComponent = CreateDefaultSubobject<UPopshotTurnToTargetComponent>(TEXT("PopshotTurnToTargetComponent"));
    this->LookAtComponent = CreateDefaultSubobject<ULookAtComponent>(TEXT("LookAtComponent"));
    this->PopshotCowerComponent = CreateDefaultSubobject<UPopshotCowerComponent>(TEXT("PopshotCowerComponent"));
    this->PopshotShootProjectileComponent = CreateDefaultSubobject<UPopshotShootProjectileComponent>(TEXT("PopshotShootProjectileComponent"));
    this->SpawnComponent = CreateDefaultSubobject<UAISpawnComponent>(TEXT("SpawnComponent"));
    this->PredictionComponent = CreateDefaultSubobject<UAITargetPredictionComponent>(TEXT("PredictionComponent"));
    this->AnimInstance = NULL;
    this->PopshotVariant = EPopshotConfigVariant::Base;
    this->TailPullLoopRTPC = TEXT("vib_popshot_tail_pull");
    this->TailPullLoopStartHapticEvent = NULL;
    this->TailPullLoopStopHapticEvent = NULL;
    this->TailOverpulledHapticEvent = NULL;
    this->TailOverpulledVibration = NULL;
    this->ThrownObjectsCollider->SetupAttachment(RootComponent);
    this->HealthCollider->SetupAttachment(RootComponent);
    this->HealthInteraction->SetupAttachment(HealthCollider);
}

void APopshot::UpdateTailVisibility(bool showTail) {
}

void APopshot::TailOverPulled(ASackboy* MurdererSackboy) {
}

void APopshot::TailGrabChanged_Implementation(bool IsGrabbed) {
}


