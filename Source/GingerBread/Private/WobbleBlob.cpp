#include "WobbleBlob.h"
#include "AkComponent.h"
#include "Components/ArrowComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "NavModifierComponent.h"
#include "BlastersTargetComponent.h"
#include "CSPHelperComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "GrappleTargetComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "SackboySlapTargetComponent.h"
#include "SpotShadowComponent.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"
#include "VertexAnimatedMeshComponent.h"

AWobbleBlob::AWobbleBlob(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base"));

    this->Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->SpikeHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("SpikeHitPointsModifier"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->SpikeCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SpikeCollision"));
    this->SpikeInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("SpikeInteraction"));
    this->NavModifier = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifier"));
    this->GameplayTag1 = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag1"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->BlastersTarget = CreateDefaultSubobject<UBlastersTargetComponent>(TEXT("BlastersTarget"));
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
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->SpotShadowComponent = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadowComponent"));
    this->RollBurst = false;
    this->ImpactVectorLS = 0.00f;
    this->JumpedOn = false;
    this->BlobIntact = false;
    this->LargeCollectabellLocations.AddDefaulted(4);
    this->WobbleBlobType = EWobbleBlobType::WobbleBlobSmall;
    this->OffsetFromBaseForHorizontal = -0.40f;
    this->OffsetFromBaseForVertical = 0.00f;
    this->BlobContents = EWobbleBlobContents::Empty;
    this->CutterOverlaps = true;
    this->EnableThrowTarget = true;
    this->inflatedUsingBlueprint = false;
    this->AllowDeflation = true;
    this->InflationDuration = 5.00f;
    this->InflationDelay = 1.00f;
    this->Reinflatable = false;
    this->reinflateDelayTime = 10.00f;
    this->FloatUpTime = 1.00f;
    this->ImpactThreshold = 100.00f;
    this->bombTimerDuration = 3.00f;
    this->WobbleDefinitionDT = NULL;
    this->WobbleBaseLargeMesh = NULL;
    this->WobbleBaseSmallMesh = NULL;
    this->LargeBlobCollisionMesh = NULL;
    this->SmallBlobCollisionMesh = NULL;
    this->DeflatedBlobStaticMeshArray[0] = NULL;
    this->DeflatedBlobStaticMeshArray[1] = NULL;
    this->DeflatedBlobStaticMeshArray[2] = NULL;
    this->DeflatedBlobStaticMeshArray[3] = NULL;
    this->UseMaterialOverrideWorldLocation = false;
    this->MaterialOverrideWorldLocation = EWorldLocation::Void;
    this->JumpOnWobbleBlobVibration = NULL;
    this->SlapHitVibration = NULL;
    this->CollisionHapticEvent = NULL;
    this->BombCountdownHapticEvent = NULL;
    this->SquashyPlantPickup = NULL;
    this->SquashyPlantGrow = NULL;
    this->SquashyPlantDetach = NULL;
    this->SquashyPlantWobbleWhistle = NULL;
    this->SquashyPlantCollision[0] = NULL;
    this->SquashyPlantCollision[1] = NULL;
    this->SquashyPlantCollision[2] = NULL;
    this->SquashyPlantCollision[3] = NULL;
    this->SquashyPlantWobbleWhistleStop = NULL;
    this->SquashyPlantPopLarge = NULL;
    this->SquashyPlantPop = NULL;
    this->SquashyPlantBarbBreak = NULL;
    this->ScoreBubbleEmerge = NULL;
    this->ScoreBubbleEmergeSwish = NULL;
    this->FeatherBounceSound = NULL;
    this->BombCountdown = NULL;
    this->BombCountdownGamepadAudioEvent = NULL;
    this->InflateCollisionInflateAlphaCurve = NULL;
    this->WobbleBombExplosionClass = NULL;
    this->CSPComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSP Component"));
    this->CollisionMesh->SetupAttachment(RootComponent);
    this->MeshInteraction->SetupAttachment(CollisionMesh);
    this->WobbleConstraint->SetupAttachment(RootComponent);
    this->PickupContainerComponent->SetupAttachment(RootComponent);
    this->ThrowTarget->SetupAttachment(RootComponent);
    this->SpotShadowComponent->SetupAttachment(BlobVertexAnimMesh);
    this->Arrow->SetupAttachment(RootComponent);
    this->SpikeCollision->SetupAttachment(CollisionMesh);
    this->SpikeInteraction->SetupAttachment(CollisionMesh);
    this->GameplayTag1->SetupAttachment(RootComponent);
    this->BlastersTarget->SetupAttachment(RootComponent);
    this->CraftCutterTarget->SetupAttachment(RootComponent);
    this->GrappleTarget->SetupAttachment(CollisionMesh);
    this->SackboySlapTarget->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(CollisionMesh);
    this->BlobVertexAnimMesh->SetupAttachment(RootComponent);
    this->DeflatedBlobStaticMesh->SetupAttachment(RootComponent);
    this->AKCompWobbleBlob->SetupAttachment(BlobVertexAnimMesh);
}

void AWobbleBlob::TriggerInflate() {
}

bool AWobbleBlob::TriggerBurst(const bool RolledInto, const bool Slapped) {
    return false;
}



void AWobbleBlob::SetInflatedUsingBlueprint(bool NewInflatedUsingBlueprint) {
}

void AWobbleBlob::OnRep_NetStateStructure() {
}

void AWobbleBlob::OnLevelSettingsAvailable(AActor* ManagerActor) {
}

void AWobbleBlob::OnCollisionMeshWake(UPrimitiveComponent* SelfComponent, FName BoneName) {
}

void AWobbleBlob::OnCollisionMeshSleep(UPrimitiveComponent* SelfComponent, FName BoneName) {
}

void AWobbleBlob::OnCollisionMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AWobbleBlob::InflateCollisionInflateAlpha_TimelineFunc(const float InflateAlpha) {
}

void AWobbleBlob::InflateCollision_TimelineFinishedFunc() {
}


TEnumAsByte<EWobbleBlobState::Type> AWobbleBlob::GetWobbleBlobState() const {
    return EWobbleBlobState::OnSurface;
}

void AWobbleBlob::EDITOR_SetupFromBlutility(const TEnumAsByte<EWobbleBlobContents::Type> NewBlobContents, const bool NewCutterOverlaps, const bool NewInflatedUsingBlueprint, const bool NewAllowDeflation, const float NewInflationDuration, const float NewInflationDelay, const bool NewReinflatable, const float NewReinflateDelayTime, const float NewFloatUpTime, const float impactThreashold, const float NewBombTimerDuration, const bool NewUseMaterialOverrideWorldLocation, const EWorldLocation NewMaterialOverrideWorldLocation) {
}

void AWobbleBlob::CSPStartTicking(uint32 Event) {
}


void AWobbleBlob::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWobbleBlob, NetStateStructure);
}


