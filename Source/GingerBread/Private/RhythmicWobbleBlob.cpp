#include "RhythmicWobbleBlob.h"
#include "AkComponent.h"
#include "Components/ArrowComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "NavModifierComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "GrappleTargetComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "SackboySlapTargetComponent.h"
#include "TriggerActorComponent.h"
#include "VertexAnimatedMeshComponent.h"

ARhythmicWobbleBlob::ARhythmicWobbleBlob(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base"));

    this->Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->NavModifier = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifier"));
    this->GameplayTag1 = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag1"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTarget"));
    this->SackboySlapTarget = CreateDefaultSubobject<USackboySlapTargetComponent>(TEXT("SackboySlapTarget"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->Base = (UStaticMeshComponent*)RootComponent;
    this->BlobVertexAnimMesh = CreateDefaultSubobject<UVertexAnimatedMeshComponent>(TEXT("BlobVertexAnimMesh"));
    this->DeflatedBlobStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DeflatedBlobStaticMesh"));
    this->AKCompWobbleBlob = CreateDefaultSubobject<UAkComponent>(TEXT("AKCompWobbleBlob"));
    this->CollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->MeshInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("MeshInteraction"));
    this->WobbleConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("WobbleConstraint"));
    this->PickupContainerComponent = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->InflateCollision = CreateDefaultSubobject<UTimelineComponent>(TEXT("InflateCollision"));
    this->ImpactVectorLS = 0.00f;
    this->JumpedOn = false;
    this->BlobIntact = false;
    this->LargeCollectabellLocations.AddDefaulted(4);
    this->RhythmicWobbleBlobType = ERhythmicWobbleBlobType::WobbleBlobSmall;
    this->OffsetFromBaseForHorizontal = -0.40f;
    this->OffsetFromBaseForVertical = 0.00f;
    this->BlobContents = ERhythmicWobbleBlobContents::Empty;
    this->CutterOverlaps = true;
    this->Reinflatable = false;
    this->ImpactThreshold = 100.00f;
    this->BeatFractionSynchronisation = 1.00f;
    this->WobbleDefinitionDT = NULL;
    this->WobbleBaseLargeMesh = NULL;
    this->WobbleBaseSmallMesh = NULL;
    this->LargeBlobCollisionMesh = NULL;
    this->SmallBlobCollisionMesh = NULL;
    this->DeflatedBlobStaticMeshArray[0] = NULL;
    this->DeflatedBlobStaticMeshArray[1] = NULL;
    this->UseMaterialOverrideWorldLocation = false;
    this->MaterialOverrideWorldLocation = EWorldLocation::Void;
    this->JumpOnWobbleBlobVibration = NULL;
    this->SlapHitVibration = NULL;
    this->CollisionHapticEvent = NULL;
    this->SquashyPlantPickup = NULL;
    this->SquashyPlantGrow = NULL;
    this->SquashyPlantDetach = NULL;
    this->SquashyPlantWobbleWhistle = NULL;
    this->SquashyPlantCollisionLarge = NULL;
    this->SquashyPlantCollisionSmall = NULL;
    this->SquashyPlantWobbleWhistleStop = NULL;
    this->SquashyPlantPopLarge = NULL;
    this->SquashyPlantPop = NULL;
    this->SquashyPlantBarbBreak = NULL;
    this->ScoreBubbleEmerge = NULL;
    this->ScoreBubbleEmergeSwish = NULL;
    this->InflateCollisionInflateAlphaCurve = NULL;
    this->NetState = ERhythmicWobbleBlobNetState::None;
    this->BlobVertexAnimMesh->SetupAttachment(RootComponent);
    this->DeflatedBlobStaticMesh->SetupAttachment(RootComponent);
    this->AKCompWobbleBlob->SetupAttachment(BlobVertexAnimMesh);
    this->CollisionMesh->SetupAttachment(RootComponent);
    this->MeshInteraction->SetupAttachment(CollisionMesh);
    this->WobbleConstraint->SetupAttachment(RootComponent);
    this->PickupContainerComponent->SetupAttachment(RootComponent);
    this->Arrow->SetupAttachment(RootComponent);
    this->GameplayTag1->SetupAttachment(RootComponent);
    this->CraftCutterTarget->SetupAttachment(RootComponent);
    this->GrappleTarget->SetupAttachment(CollisionMesh);
    this->SackboySlapTarget->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(CollisionMesh);
}

bool ARhythmicWobbleBlob::TriggerBurst(const bool RolledInto) {
    return false;
}


void ARhythmicWobbleBlob::OnRep_NetState() {
}

void ARhythmicWobbleBlob::OnLevelSettingsAvailable(AActor* ManagerActor) {
}

void ARhythmicWobbleBlob::OnCollisionMeshWake(UPrimitiveComponent* SelfComponent, FName BoneName) {
}

void ARhythmicWobbleBlob::OnCollisionMeshSleep(UPrimitiveComponent* SelfComponent, FName BoneName) {
}

void ARhythmicWobbleBlob::OnCollisionMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ARhythmicWobbleBlob::OnClipLooped(int32 ClipIndex) {
}

void ARhythmicWobbleBlob::InflateCollisionInflateAlpha_TimelineFunc(const float InflateAlpha) {
}

void ARhythmicWobbleBlob::InflateCollision_TimelineFinishedFunc() {
}


TEnumAsByte<ERhythmicWobbleBlobState::Type> ARhythmicWobbleBlob::GetWobbleBlobState() const {
    return ERhythmicWobbleBlobState::OnSurface;
}


void ARhythmicWobbleBlob::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARhythmicWobbleBlob, NetState);
}


