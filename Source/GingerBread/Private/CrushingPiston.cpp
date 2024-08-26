#include "CrushingPiston.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "SplineFollowerComponent.h"
#include "TriggerActorComponent.h"

ACrushingPiston::ACrushingPiston(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->Root = (USceneComponent*)RootComponent;
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->CogMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CogMesh"));
    this->CogCollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CogCollisionMesh"));
    this->GameplayTagCog = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagCog"));
    this->MovementRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MovementRoot"));
    this->PoleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PoleMesh"));
    this->PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
    this->CrushDamageVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("CrushDamageVolume"));
    this->CrushDamageVolumeInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("CrushDamageVolumeInteraction"));
    this->Ak_CrushingPiston = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_CrushingPiston"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->SplineFollowerComponent = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollowerComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->ExtendedLength = 40.00f;
    this->ExtendMotionTime = 1.50f;
    this->RetractMotionTime = 1.50f;
    this->DelayBeforeRetracting = 1.00f;
    this->DelayBeforeExtending = 1.00f;
    this->StartExtended = true;
    this->ExtendMotionCurve = NULL;
    this->RetractMotionCurve = NULL;
    this->ExtendStartAudio = NULL;
    this->ExtendStopAudio = NULL;
    this->RetractStartAudio = NULL;
    this->RetractStopAudio = NULL;
    this->PlatformSize = ECrushingPistonSize::A;
    this->Server_State = ECrushingPistonState::Extended;
    this->Local_SplineFollowerDrivenState = ECrushingPistonState::Extended;
    this->BaseMesh->SetupAttachment(RootComponent);
    this->CogMesh->SetupAttachment(BaseMesh);
    this->CogCollisionMesh->SetupAttachment(BaseMesh);
    this->GameplayTagCog->SetupAttachment(CogCollisionMesh);
    this->MovementRoot->SetupAttachment(RootComponent);
    this->PoleMesh->SetupAttachment(PlatformMesh);
    this->PlatformMesh->SetupAttachment(MovementRoot);
    this->CrushDamageVolume->SetupAttachment(PlatformMesh);
    this->CrushDamageVolumeInteraction->SetupAttachment(PlatformMesh);
    this->Ak_CrushingPiston->SetupAttachment(MovementRoot);
    this->SplineComponent->SetupAttachment(RootComponent);
}

void ACrushingPiston::Server_OnChangeState(const ECrushingPistonState NewState) {
}

void ACrushingPiston::OnSplinePositionChanged(float NewSplinePosition, float DeltaTime) {
}

void ACrushingPiston::OnSplineMovementStarted(USplineFollowerComponent* pSplineFollowerComponent, const bool WillMoveForwards) {
}

void ACrushingPiston::OnSplineMovementPaused(USplineFollowerComponent* pSplineFollowerComponent, const bool WasMovingForwards) {
}

void ACrushingPiston::OnSplineEndReached(USplineFollowerComponent* pSplineFollowerComponent, const bool WasMovingForwards) {
}


