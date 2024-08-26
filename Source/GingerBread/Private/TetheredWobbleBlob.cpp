#include "TetheredWobbleBlob.h"
#include "AkComponent.h"
#include "Components/ArrowComponent.h"
#include "PhysicsEngine/PhysicsThrusterComponent.h"
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
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"
#include "VertexAnimatedMeshComponent.h"

ATetheredWobbleBlob::ATetheredWobbleBlob(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionMesh"));

    this->Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->NavModifier = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifier"));
    this->GameplayTag1 = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag1"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTarget"));
    this->SackboySlapTarget = CreateDefaultSubobject<USackboySlapTargetComponent>(TEXT("SackboySlapTarget"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->BlobVertexAnimMesh = CreateDefaultSubobject<UVertexAnimatedMeshComponent>(TEXT("BlobVertexAnimMesh"));
    this->AKCompWobbleBlob = CreateDefaultSubobject<UAkComponent>(TEXT("AKCompWobbleBlob"));
    this->CollisionMesh = (UStaticMeshComponent*)RootComponent;
    this->MeshInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("MeshInteraction"));
    this->PickupContainerComponent = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->PhysicsThruster = CreateDefaultSubobject<UPhysicsThrusterComponent>(TEXT("PhysicsThruster"));
    this->InflateCollision = CreateDefaultSubobject<UTimelineComponent>(TEXT("InflateCollision"));
    this->PostThrownThrust = CreateDefaultSubobject<UTimelineComponent>(TEXT("PostThrownThrust"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->RollBurst = false;
    this->ImpactVectorLS = 0.00f;
    this->JumpedOn = false;
    this->BlobIntact = false;
    this->LargeCollectabellLocations.AddDefaulted(4);
    this->Bouyancy = 0.50f;
    this->VisualZOffset = -1.80f;
    this->ThrusterStrengthMultiplier = 0.28f;
    this->BlobContents = ETetheredWobbleBlobContents::Empty;
    this->CutterOverlaps = true;
    this->inflatedUsingBlueprint = false;
    this->AllowDeflation = true;
    this->InflationDuration = 5.00f;
    this->InflationDelay = 1.00f;
    this->FloatUpTime = 5.00f;
    this->HeightGainToBurst = 20.00f;
    this->TimeToBurst = 2.00f;
    this->ImpactThreshold = 100.00f;
    this->DetachThreadImpulseMagnitude = 0.50f;
    this->UseThreadCollision = false;
    this->WobbleDefinitionDT = NULL;
    this->BaseBP = NULL;
    this->ThreadBP = NULL;
    this->UserWorldMaterialType = EWobbleBlobMaterialType::UseWorldLocation;
    this->JumpOnWobbleBlobVibration = NULL;
    this->SlapHitVibration = NULL;
    this->CollisionHapticEvent = NULL;
    this->SquashyPlantPickup = NULL;
    this->SquashyPlantGrow = NULL;
    this->SquashyPlantDetach = NULL;
    this->SquashyPlantWobbleWhistle = NULL;
    this->SquashyPlantCollision = NULL;
    this->SquashyPlantWobbleWhistleStop = NULL;
    this->SquashyPlantPop = NULL;
    this->SquashyPlantBarbBreak = NULL;
    this->ScoreBubbleEmerge = NULL;
    this->ScoreBubbleEmergeSwish = NULL;
    this->InflateCollisionInflateAlphaCurve = NULL;
    this->PostThrownThrustStrengthCurve = NULL;
    this->BlobVertexAnimMesh->SetupAttachment(RootComponent);
    this->AKCompWobbleBlob->SetupAttachment(BlobVertexAnimMesh);
    this->MeshInteraction->SetupAttachment(RootComponent);
    this->PickupContainerComponent->SetupAttachment(RootComponent);
    this->PhysicsThruster->SetupAttachment(RootComponent);
    this->ThrowTarget->SetupAttachment(RootComponent);
    this->Arrow->SetupAttachment(RootComponent);
    this->GameplayTag1->SetupAttachment(RootComponent);
    this->CraftCutterTarget->SetupAttachment(RootComponent);
    this->GrappleTarget->SetupAttachment(RootComponent);
    this->SackboySlapTarget->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(RootComponent);
}

void ATetheredWobbleBlob::TriggerInflate() {
}

void ATetheredWobbleBlob::TriggerBurst(const bool RolledInto, const bool Slapped) {
}


void ATetheredWobbleBlob::SetInflatedUsingBlueprint(bool NewInflatedUsingBlueprint) {
}

void ATetheredWobbleBlob::PostThrownThrustStrength_TimelineFunc(const float Strength) {
}

void ATetheredWobbleBlob::PostThrownThrust_TimelineFinishedFunc() {
}

void ATetheredWobbleBlob::OnRep_NetStateStructure() {
}

void ATetheredWobbleBlob::OnLevelSettingsAvailable(AActor* ManagerActor) {
}

void ATetheredWobbleBlob::OnCollisionMeshWake(UPrimitiveComponent* SelfComponent, FName BoneName) {
}

void ATetheredWobbleBlob::OnCollisionMeshSleep(UPrimitiveComponent* SelfComponent, FName BoneName) {
}

void ATetheredWobbleBlob::OnCollisionMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ATetheredWobbleBlob::InflateCollisionInflateAlpha_TimelineFunc(const float InflateAlpha) {
}

void ATetheredWobbleBlob::InflateCollision_TimelineFinishedFunc() {
}


TEnumAsByte<ETetheredWobbleBlobState::Type> ATetheredWobbleBlob::GetWobbleBlobState() const {
    return ETetheredWobbleBlobState::OnSurface;
}


void ATetheredWobbleBlob::AddBaseAndThread() {
}

void ATetheredWobbleBlob::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATetheredWobbleBlob, NetStateStructure);
}


