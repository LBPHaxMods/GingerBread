#include "WobbleBlobBase.h"
#include "AkComponent.h"
#include "Components/ArrowComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "NavModifierComponent.h"
#include "BlastersTargetComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "GrappleTargetComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "SackboySlapTargetComponent.h"
#include "TriggerActorComponent.h"
#include "VertexAnimatedMeshComponent.h"

AWobbleBlobBase::AWobbleBlobBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base"));

    this->Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->SpikeHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("SpikeHitPointsModifier"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->SpikeCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SpikeCollision"));
    this->NavModifier = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifier"));
    this->DeflatedBlob = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DeflatedBlob"));
    this->GameplayTag1 = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag1"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->BlastersTarget = CreateDefaultSubobject<UBlastersTargetComponent>(TEXT("BlastersTarget"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTarget"));
    this->SackboySlapTarget = CreateDefaultSubobject<USackboySlapTargetComponent>(TEXT("SackboySlapTarget"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->Base = (UStaticMeshComponent*)RootComponent;
    this->WobbleBlob = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WobbleBlob"));
    this->BlobVertexAnimMesh = CreateDefaultSubobject<UVertexAnimatedMeshComponent>(TEXT("BlobVertexAnimMesh"));
    this->DeflatedBlobStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DeflatedBlobStaticMesh"));
    this->AKCompWobbleBlob = CreateDefaultSubobject<UAkComponent>(TEXT("AKCompWobbleBlob"));
    this->CollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));
    this->WobbleConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("WobbleConstraint"));
    this->PickupContainerComponent = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->MegaBlobScale = CreateDefaultSubobject<UTimelineComponent>(TEXT("MegaBlobScale"));
    this->FloatyMotion = CreateDefaultSubobject<UTimelineComponent>(TEXT("FloatyMotion"));
    this->ScaleUpBounce = CreateDefaultSubobject<UTimelineComponent>(TEXT("ScaleUpBounce"));
    this->InflateCollision = CreateDefaultSubobject<UTimelineComponent>(TEXT("InflateCollision"));
    this->RollBurst = false;
    this->ImpactVectorLS = 0.00f;
    this->JumpedOn = false;
    this->BlobIntact = false;
    this->LargeCollectabellLocations.AddDefaulted(4);
    this->BlobType = EWobbleBlobBaseType::Standard;
    this->WobbleBlobType = EWobbleBlobType::WobbleBlobSmall;
    this->UseVertexAnim = false;
    this->LargeBlob = false;
    this->BlobContents = EWobbleBlobBaseContents::Empty;
    this->CutterOverlaps = true;
    this->inflatedUsingBlueprint = false;
    this->AllowDeflation = true;
    this->InflationDuration = 5.00f;
    this->InflationDelay = 1.00f;
    this->Reinflatable = false;
    this->reinflateDelayTime = 10.00f;
    this->FloatUpTime = 5.00f;
    this->ImpactThreshold = 100.00f;
    this->EditCondition_IsWobbleBomb = false;
    this->bombTimerDuration = 3.00f;
    this->LargeBlastRadius = 0.00f;
    this->SmallBlastRadius = 0.00f;
    this->VisualiseBombDebug = false;
    this->EditCondition_IsMegaBlob = false;
    this->MegaBlobHits = 5;
    this->MegaBlobMaxScale = 3.00f;
    this->DeflationRate = 10.00f;
    this->EditCondition_IsWobbleCopter = false;
    this->UseFloatyMotion = true;
    this->WobbleDefinitionDT = NULL;
    this->WobbleBaseLargeMesh = NULL;
    this->WobbleBaseSmallMesh = NULL;
    this->SmallBlobSkeletalMeshArray[0] = NULL;
    this->SmallBlobSkeletalMeshArray[1] = NULL;
    this->SmallBlobSkeletalMeshArray[2] = NULL;
    this->SmallBlobSkeletalMeshArray[3] = NULL;
    this->SmallBlobSkeletalMeshArray[4] = NULL;
    this->LargeBlobSkeletalMeshArray[0] = NULL;
    this->LargeBlobSkeletalMeshArray[1] = NULL;
    this->LargeBlobSkeletalMeshArray[2] = NULL;
    this->LargeBlobSkeletalMeshArray[3] = NULL;
    this->LargeBlobSkeletalMeshArray[4] = NULL;
    this->LargeBlobCollisionMesh = NULL;
    this->SmallBlobCollisionMesh = NULL;
    this->UserWorldMaterialType = EWobbleBlobMaterialType::UseWorldLocation;
    this->UseMaterialOverrideWorldLocation = false;
    this->MaterialOverrideWorldLocation = EWorldLocation::Void;
    this->LargeBlobAnimInstance = NULL;
    this->SmallBlobAnimInstance = NULL;
    this->DeflatedBlobStaticMeshArray[0] = NULL;
    this->DeflatedBlobStaticMeshArray[1] = NULL;
    this->DeflatedBlobStaticMeshArray[2] = NULL;
    this->DeflatedBlobStaticMeshArray[3] = NULL;
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
    this->SquashyPlantExplodeLarge = NULL;
    this->SquashyPlantExplode = NULL;
    this->FeatherBounceSound = NULL;
    this->BombCountdownGamepadAudioEvent = NULL;
    this->MegaBlobScaleAlphaCurve = NULL;
    this->FloatyMotionFloatyVectorCurve = NULL;
    this->ScaleUpBounceAlphaCurve = NULL;
    this->InflateCollisionInflateAlphaCurve = NULL;
    this->WobbleBombExplosionClass = NULL;
    this->BlobVertexAnimMesh->SetupAttachment(RootComponent);
    this->DeflatedBlobStaticMesh->SetupAttachment(RootComponent);
    this->AKCompWobbleBlob->SetupAttachment(WobbleBlob);
    this->CollisionMesh->SetupAttachment(RootComponent);
    this->WobbleConstraint->SetupAttachment(RootComponent);
    this->PickupContainerComponent->SetupAttachment(RootComponent);
    this->Arrow->SetupAttachment(RootComponent);
    this->SpikeCollision->SetupAttachment(CollisionMesh);
    this->DeflatedBlob->SetupAttachment(RootComponent);
    this->GameplayTag1->SetupAttachment(RootComponent);
    this->BlastersTarget->SetupAttachment(RootComponent);
    this->CraftCutterTarget->SetupAttachment(RootComponent);
    this->GrappleTarget->SetupAttachment(CollisionMesh);
    this->SackboySlapTarget->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(CollisionMesh);
    this->WobbleBlob->SetupAttachment(RootComponent);
}

void AWobbleBlobBase::TriggerInflate() {
}

bool AWobbleBlobBase::TriggerBurst(const bool RolledInto) {
    return false;
}



void AWobbleBlobBase::SetInflatedUsingBlueprint(bool NewInflatedUsingBlueprint) {
}

void AWobbleBlobBase::ScaleUpBounceAlpha_TimelineFunc(const float BounceAlpha) {
}

void AWobbleBlobBase::ScaleUpBounce_TimelineFinishedFunc() {
}

void AWobbleBlobBase::OnRep_NetStateStructure() {
}

void AWobbleBlobBase::OnLevelSettingsAvailable(AActor* ManagerActor) {
}

void AWobbleBlobBase::OnCollisionMeshWake(UPrimitiveComponent* SelfComponent, FName BoneName) {
}

void AWobbleBlobBase::OnCollisionMeshSleep(UPrimitiveComponent* SelfComponent, FName BoneName) {
}

void AWobbleBlobBase::OnCollisionMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AWobbleBlobBase::MegaBlobScaleAlpha_TimelineFunc(const FVector& ScaleAlpha) {
}

void AWobbleBlobBase::InflateCollisionInflateAlpha_TimelineFunc(const float InflateAlpha) {
}

void AWobbleBlobBase::InflateCollision_TimelineFinishedFunc() {
}


TEnumAsByte<EWobbleBlobBaseState::Type> AWobbleBlobBase::GetWobbleBlobState() const {
    return EWobbleBlobBaseState::OnSurface;
}

void AWobbleBlobBase::FloatyMotionFloatyVector_TimelineFunc(const FVector& FloatyVector) {
}



void AWobbleBlobBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWobbleBlobBase, NetStateStructure);
}


