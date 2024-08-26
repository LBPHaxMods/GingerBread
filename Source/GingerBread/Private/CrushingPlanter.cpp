#include "CrushingPlanter.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/DecalComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "SplineFollowerComponent.h"
#include "TriggerActorComponent.h"

ACrushingPlanter::ACrushingPlanter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->Root = (USceneComponent*)RootComponent;
    this->MovementRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MovementRoot"));
    this->PlanterMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlanterMeshComponent"));
    this->CrushDamageVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("CrushDamageVolume"));
    this->CrushDamageVolumeInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("CrushDamageVolumeInteraction"));
    this->OptionalMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OptionalMeshComponent"));
    this->OptionalDecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("OptionalDecalComponent"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->Ak_CrushingPlanter = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_CrushingPlanter"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->SplineFollowerComponent = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollowerComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->ExtendedLength = 30.00f;
    this->RaiseMotionTime = 1.00f;
    this->LowerMotionTime = 3.00f;
    this->DelayBeforeLowering = 0.00f;
    this->RaiseMotionCurve = NULL;
    this->LowerMotionCurve = NULL;
    this->RaiseStartAudio = NULL;
    this->RaiseStopAudio = NULL;
    this->LowerStartAudio = NULL;
    this->LowerStopAudio = NULL;
    this->OptionalDecalMaterial = NULL;
    this->OptionalStaticMesh = NULL;
    this->Server_State = ECrushingPlanterState::Lowered;
    this->Local_SplineFollowerDrivenState = ECrushingPlanterState::Lowered;
    this->OptionalMeshComponent->SetupAttachment(MovementRoot);
    this->OptionalDecalComponent->SetupAttachment(PlanterMeshComponent);
    this->SplineComponent->SetupAttachment(RootComponent);
    this->Ak_CrushingPlanter->SetupAttachment(MovementRoot);
    this->MovementRoot->SetupAttachment(RootComponent);
    this->PlanterMeshComponent->SetupAttachment(MovementRoot);
    this->CrushDamageVolume->SetupAttachment(PlanterMeshComponent);
    this->CrushDamageVolumeInteraction->SetupAttachment(PlanterMeshComponent);
}

void ACrushingPlanter::Server_OnChangeState(const ECrushingPlanterState NewState) {
}

void ACrushingPlanter::OnSplineMovementStarted(USplineFollowerComponent* pSplineFollowerComponent, const bool WillMoveForwards) {
}

void ACrushingPlanter::OnSplineMovementPaused(USplineFollowerComponent* pSplineFollowerComponent, const bool WasMovingForwards) {
}

void ACrushingPlanter::OnSplineEndReached(USplineFollowerComponent* pSplineFollowerComponent, const bool WasMovingForwards) {
}


