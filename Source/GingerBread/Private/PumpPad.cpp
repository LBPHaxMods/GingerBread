#include "PumpPad.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "RollDazeOverride.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

APumpPad::APumpPad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->SplineComp = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->SKPumpPadMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PumpPadMesh"));
    this->TopCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TopCollision"));
    this->TopInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("TopInteraction"));
    this->TopDetector = CreateDefaultSubobject<UBoxComponent>(TEXT("TopDetector"));
    this->TopInteractDetector = CreateDefaultSubobject<UInteractionComponent>(TEXT("TopInteractDetector"));
    this->CollisionBottom = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionBottom"));
    this->RollDazeOverride = CreateDefaultSubobject<URollDazeOverride>(TEXT("RollDazeOverride"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->ActorCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ActorCollision"));
    this->ActorInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("ActorInteract"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->TriggerComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerComponent"));
    this->ThrowTargetComponent = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTargetComponent"));
    this->InflateState = true;
    this->PadToInflate = NULL;
    this->InflatedAtStart = false;
    this->BounceHeight = 160.00f;
    this->AddConnector = false;
    this->AutoAttachConnectors = false;
    this->MinimumForceToTrigger = 3.00f;
    this->MinimumMassToTrigger = 0.10f;
    this->MaxSplineMatSpeed = 6.00f;
    this->SplineMatSpeedBlendOutTime = 1.00f;
    this->SplineMatSpeedAlpha = 0.00f;
    this->PipeScale = 0.60f;
    this->AnimationUpdateInterval = 0.02f;
    this->DeflateAnim = NULL;
    this->DeflatePlayRate = 1.50f;
    this->InflateAnim = NULL;
    this->InflatePlayRate = 0.70f;
    this->InflateAnimationDuration = 0.17f;
    this->ConnectorMesh = NULL;
    this->SplineMaterial = NULL;
    this->ConnectorForwardAxis = ESplineMeshAxis::Z;
    this->DeflateAudio = NULL;
    this->InflateAudio = NULL;
    this->SuperJump = NULL;
    this->DeflateHapticsEvent = NULL;
    this->DeflateHapticsStopEvent = NULL;
    this->InflateHapticsEvent = NULL;
    this->InflateHapticsStopEvent = NULL;
    this->SuperJumpHaptics = NULL;
    this->ContractVFX = NULL;
    this->ExpandVFX = NULL;
    this->DynSplineMat = NULL;
    this->Local_InflateState = true;
    this->TopDetector->SetupAttachment(SKPumpPadMesh);
    this->TopInteractDetector->SetupAttachment(SKPumpPadMesh);
    this->CollisionBottom->SetupAttachment(RootComponent);
    this->RollDazeOverride->SetupAttachment(CollisionBottom);
    this->ActorCollision->SetupAttachment(RootComponent);
    this->ActorInteract->SetupAttachment(RootComponent);
    this->ThrowTargetComponent->SetupAttachment(SKPumpPadMesh);
    this->SplineComp->SetupAttachment(RootComponent);
    this->SKPumpPadMesh->SetupAttachment(RootComponent);
    this->TopCollision->SetupAttachment(SKPumpPadMesh);
    this->TopInteraction->SetupAttachment(TopCollision);
}

void APumpPad::UpdateLocalState() {
}

void APumpPad::UpdateConnectorAnimation() {
}

void APumpPad::OnTopCollisionHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void APumpPad::OnRep_InflateState() {
}

void APumpPad::OnRep_BlockedState() {
}

void APumpPad::OnPumpPadMaterialsLoaded() {
}

void APumpPad::OnGingerbreadLevelSettingsAvailable(AActor* ManagerActor) {
}

void APumpPad::OnActorCollisionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APumpPad::OnActorCollisionEndInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void APumpPad::OnActorCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APumpPad::OnActorCollisionBeginInteract(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void APumpPad::InflateRequested() {
}

void APumpPad::DeflateRequested() {
}

void APumpPad::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APumpPad, InflateState);
}


