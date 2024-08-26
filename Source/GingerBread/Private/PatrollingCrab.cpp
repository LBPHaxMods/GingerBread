#include "PatrollingCrab.h"
#include "AkComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SplineComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "SplineFollowerComponent.h"
#include "SpotShadowComponent.h"
#include "TriggerActorComponent.h"

APatrollingCrab::APatrollingCrab(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->Root = (USceneComponent*)RootComponent;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->SplineFollower = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollower"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->BodyCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("BodyCollision"));
    this->BodyInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("BodyInteraction"));
    this->CrabSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CrabSkeletalMesh"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->Ak_PatrollingCrab = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_PatrollingCrab"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->CrabStopSFX = NULL;
    this->HitSFX = NULL;
    this->MoveSFX = NULL;
    this->TipSFX = NULL;
    this->HitVFX = NULL;
    this->StartingPosition = 0.00f;
    this->UseTimeToTraverseSpline = true;
    this->TimeToTraverseSpline = 1.60f;
    this->Speed = 25.00f;
    this->TriggerManually = false;
    this->FlipDirection = false;
    this->DoTipAnim = false;
    this->PauseTime = 0.60f;
    this->Active = true;
    this->MovingLeft = false;
    this->Spline->SetupAttachment(RootComponent);
    this->BodyCollision->SetupAttachment(CrabSkeletalMesh);
    this->BodyInteraction->SetupAttachment(BodyCollision);
    this->CrabSkeletalMesh->SetupAttachment(RootComponent);
    this->SpotShadow->SetupAttachment(CrabSkeletalMesh);
    this->GameplayTag->SetupAttachment(BodyCollision);
    this->Ak_PatrollingCrab->SetupAttachment(BodyCollision);
}

void APatrollingCrab::StartMoving() {
}

void APatrollingCrab::OnSplineStarted(USplineFollowerComponent* pSplineFollowerComponent, const bool WasMovingForwards) {
}

void APatrollingCrab::OnSplineEndReached(USplineFollowerComponent* pSplineFollowerComponent, const bool WasMovingForwards) {
}

void APatrollingCrab::OnRep_Active() {
}

void APatrollingCrab::OnPauseTimerFinished() {
}

void APatrollingCrab::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APatrollingCrab, Active);
    DOREPLIFETIME(APatrollingCrab, MovingLeft);
}


