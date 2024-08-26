#include "HerdingCritter.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "GrappleTargetComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "SpotShadowComponent.h"
#include "TriggerActorComponent.h"

AHerdingCritter::AHerdingCritter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->Tags.AddDefaulted(1);

    this->CollisionMesh = (UStaticMeshComponent*)RootComponent;
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTarget"));
    this->BodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BodyMesh"));
    this->SackboySphere = CreateDefaultSubobject<USphereComponent>(TEXT("AlertSphere"));
    this->HerdSphere = CreateDefaultSubobject<USphereComponent>(TEXT("HerdSphere"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->SackboyInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("SackboyInteraction"));
    this->HerdInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("HerdInteraction"));
    this->MeshInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("PenInteraction"));
    this->SpotShadowComponent = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadowComponent"));
    this->MeshRadius = 4.00f;
    this->AvoidanceWeight = 1.00f;
    this->ManipulatorWeight = 1.00f;
    this->CohesionWeight = 0.20f;
    this->AlignmentWeight = 1.00f;
    this->FleeMode = EHerdingCritterFleeMode::AwayFromSackboy;
    this->FleeTriggerDistance = 35.00f;
    this->AlertTriggerDistance = 50.00f;
    this->TauntTriggerDistance = 50.00f;
    this->IdleTriggerDistance = 60.00f;
    this->HerdDistance = 45.00f;
    this->MinCornerWaitTime = 0.75f;
    this->MaxCornerWaitTime = 1.50f;
    this->MinIdleWaitTime = 5.00f;
    this->MaxIdleWaitTime = 10.00f;
    this->MinIdleWalkSpeed = 10.00f;
    this->MaxSpeedDistance = 15.00f;
    this->MinFleeSpeed = 10.00f;
    this->MaxFleeSpeed = 50.00f;
    this->MaxNormalTurnRate = 360.00f;
    this->MaxFastTurnRate = 450.00f;
    this->MaxSlopeAngle = 30.00f;
    this->MaxStepHeight = 1.50f;
    this->EscapedTaunt = NULL;
    this->ImpactVFX = NULL;
    this->ShowInfluenceDebugGfx = false;
    this->ShowLineTraceDebugGfx = false;
    this->ShowWallRepulsionDebugGfx = false;
    this->ShowInfectiousFleeingDebugGfx = false;
    this->State = EHerdingCritterState::Idle;
    this->IdleWalkState = EHerdingCritterIdleWalkState::None;
    this->FleeState = EHerdingCritterFleeState::None;
    this->Server_BouncePadBouncing = false;
    this->GameplayTag->SetupAttachment(RootComponent);
    this->SackboyInteractionComponent->SetupAttachment(RootComponent);
    this->HerdInteractionComponent->SetupAttachment(RootComponent);
    this->MeshInteractionComponent->SetupAttachment(RootComponent);
    this->SpotShadowComponent->SetupAttachment(RootComponent);
    this->GrappleTarget->SetupAttachment(RootComponent);
    this->BodyMesh->SetupAttachment(RootComponent);
    this->SackboySphere->SetupAttachment(RootComponent);
    this->HerdSphere->SetupAttachment(RootComponent);
}

void AHerdingCritter::OnSackboySphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHerdingCritter::OnSackboySphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHerdingCritter::OnSackboyEndInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AHerdingCritter::OnSackboyBeginInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AHerdingCritter::OnRep_State(const TEnumAsByte<EHerdingCritterState::Type> OldState) {
}

void AHerdingCritter::OnRep_IdleWalkState(const TEnumAsByte<EHerdingCritterIdleWalkState::Type> OldIdleWalkState) {
}

void AHerdingCritter::OnRep_FleeState(const TEnumAsByte<EHerdingCritterFleeState::Type> OldFleeState) {
}

void AHerdingCritter::OnHerdSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHerdingCritter::OnHerdSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHerdingCritter::OnHerdEndInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AHerdingCritter::OnHerdBeginInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AHerdingCritter::OnCollisionMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AHerdingCritter::AnimSetRotationSpeed_Implementation(const float Speed) {
}

void AHerdingCritter::AnimSetLinearSpeed_Implementation(const float Speed) {
}

void AHerdingCritter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHerdingCritter, State);
    DOREPLIFETIME(AHerdingCritter, IdleWalkState);
    DOREPLIFETIME(AHerdingCritter, FleeState);
    DOREPLIFETIME(AHerdingCritter, Server_BouncePadBouncing);
}


