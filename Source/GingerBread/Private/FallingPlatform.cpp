#include "FallingPlatform.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "Net/UnrealNetwork.h"
#include "SplineFollowerComponent.h"
#include "TriggerActorComponent.h"

AFallingPlatform::AFallingPlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->PlatformMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMeshComponent"));
    this->MovementSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("MovementSplineComponent"));
    this->PillarSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("PillarSplineComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->AkHapticsComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkHapticsComponent"));
    this->SplineFollowerComponent = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollowerComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->LightAnimationTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("LightAnimationTimeline"));
    this->VibrationTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("VibrationTimeline"));
    this->PillarScaleTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("PillarScaleTimeline"));
    this->Size = EFallingPlatformSize::Small;
    this->DelayBeforeFalling = 2.00f;
    this->FallDistance = 120.00f;
    this->FallDuration = 1.00f;
    this->AllowAutomaticReset = true;
    this->DelayBeforeResetting = 6.00f;
    this->LightAnimationDuration = 0.25f;
    this->PillarStaticMesh = NULL;
    this->LightAnimationTimelineCurve = NULL;
    this->VibrationTimelineCurve = NULL;
    this->PillarScaleTimelineCurve = NULL;
    this->VibrationForceFeedbackEffect = NULL;
    this->VibrationAkEvent = NULL;
    this->FallingAkEvent = NULL;
    this->ResettingAkEvent = NULL;
    this->FallingEventHaptics = NULL;
    this->ShakeEventHaptics = NULL;
    this->TriggerEventHaptics = NULL;
    this->PlatformDynamicMaterialInstance = NULL;
    this->VibrationPlayRate = 1.00f;
    this->State = EFallingPlatformState::Idle;
    this->BoxComponent->SetupAttachment(RootComponent);
    this->PlatformMeshComponent->SetupAttachment(BoxComponent);
    this->MovementSplineComponent->SetupAttachment(RootComponent);
    this->PillarSplineComponent->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
    this->AkHapticsComponent->SetupAttachment(RootComponent);
}

void AFallingPlatform::StartVibrating() {
}

void AFallingPlatform::StartSplineFollowerResetting() {
}

void AFallingPlatform::StartSplineFollowerFalling() {
}

void AFallingPlatform::StartResetting() {
}

void AFallingPlatform::PostResettingAkEvent() {
}

void AFallingPlatform::OnVibrationTimelineUpdate(const FVector& Offset) {
}

void AFallingPlatform::OnSplineMovementStarted(USplineFollowerComponent* pSplineFollowerComponent, const bool WillMoveForwards) {
}

void AFallingPlatform::OnSplineEndReached(USplineFollowerComponent* pSplineFollowerComponent, const bool WasMovingForwards) {
}

void AFallingPlatform::OnRep_VibrationPlayRate() {
}

void AFallingPlatform::OnRep_State() {
}

void AFallingPlatform::OnPillarScaleTimelineUpdate(const float Alpha) {
}

void AFallingPlatform::OnLightAnimationTimelineUpdate(const float Alpha) {
}

void AFallingPlatform::OnBoxComponentHit(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector NormalImpulse, const FHitResult& HitResult) {
}

void AFallingPlatform::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFallingPlatform, VibrationPlayRate);
    DOREPLIFETIME(AFallingPlatform, State);
}


