#include "RhythmicDuopedeSegment.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "GrappleTargetComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "SackboySlapTargetComponent.h"
#include "ThrowTargetComponent.h"

ARhythmicDuopedeSegment::ARhythmicDuopedeSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SackboyCollider"));
    this->Tags.AddDefaulted(1);

    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->SackboyCollider = (UStaticMeshComponent*)RootComponent;
    this->SackboyInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("SackboyInteraction"));
    this->GampelayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->TopCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("TopCollider"));
    this->TopInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("TopInteraction"));
    this->DuopedeMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DuopedeMesh"));
    this->FrontCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("FrontCollider"));
    this->FrontInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("FrontInteraction"));
    this->SpikeCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("SpikeCollider"));
    this->SpikeInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("SpikeInteraction"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->Ak_RhythmicDuopede = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTargetComponent"));
    this->TextRenderer = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRenderComponent"));
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->SackboySlapTarget = CreateDefaultSubobject<USackboySlapTargetComponent>(TEXT("SackboySlapTarget"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->IsLevelPlaced = false;
    this->DuopedeSpeed = ERhythmicDuopedeSpeed::Slow;
    this->Speed = 0.00f;
    this->ReplicatedState = ERhythmicDuopedeState::Sleeping;
    this->State = ERhythmicDuopedeState::Sleeping;
    this->SplineFollowLeader = NULL;
    this->AnimStartPosition = 0.00f;
    this->CanSpawnRewards = true;
    this->ShouldLeanInOppositeDirection = false;
    this->UseAlternateWalk = false;
    this->EnemyImpactSlap = NULL;
    this->EnemyImpactBouncedOn = NULL;
    this->EnemyImpactHeadStomp = NULL;
    this->EnemyImpactCutter = NULL;
    this->EnemyImpactBlaster = NULL;
    this->EnemyImpactBlasterHeavy = NULL;
    this->EnemyOutOfLevel = NULL;
    this->DuopedeDeathSound = NULL;
    this->PlayCarriedHapticsEvent = NULL;
    this->StopCarriedHapticsEvent = NULL;
    this->DuopedeDeathEmitter = NULL;
    this->LiveDuopede = false;
    this->CarryingSackboy = NULL;
    this->RewardedSackboy = NULL;
    this->DuopedePosition = ERhythmicDuopedePositions::Front;
    this->DefaultPosition = ERhythmicDuopedePositions::Front;
    this->ShowDebugText = false;
    this->DuopedeAudioEvents = NULL;
    this->SectionIndex = 0;
    this->SackboyInteraction->SetupAttachment(RootComponent);
    this->GampelayTag->SetupAttachment(RootComponent);
    this->TopCollider->SetupAttachment(RootComponent);
    this->TopInteraction->SetupAttachment(TopCollider);
    this->DuopedeMesh->SetupAttachment(RootComponent);
    this->FrontCollider->SetupAttachment(DuopedeMesh);
    this->FrontInteraction->SetupAttachment(FrontCollider);
    this->SpikeCollider->SetupAttachment(DuopedeMesh);
    this->SpikeInteraction->SetupAttachment(SpikeCollider);
    this->CraftCutterTarget->SetupAttachment(DuopedeMesh);
    this->Ak_RhythmicDuopede->SetupAttachment(DuopedeMesh);
    this->GrappleTarget->SetupAttachment(DuopedeMesh);
    this->PickupContainer->SetupAttachment(RootComponent);
    this->SackboySlapTarget->SetupAttachment(RootComponent);
    this->ThrowTarget->SetupAttachment(DuopedeMesh);
}

void ARhythmicDuopedeSegment::UpdatePosition() {
}

void ARhythmicDuopedeSegment::SynchroniseAnimation_Implementation() {
}

void ARhythmicDuopedeSegment::OnSackboyColliderHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ARhythmicDuopedeSegment::OnRep_ReplicatedState() {
}

void ARhythmicDuopedeSegment::OnFrontColliderHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ARhythmicDuopedeSegment::CheckForSackboyCarriedState() {
}

void ARhythmicDuopedeSegment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARhythmicDuopedeSegment, DuopedeSpeed);
    DOREPLIFETIME(ARhythmicDuopedeSegment, ReplicatedState);
    DOREPLIFETIME(ARhythmicDuopedeSegment, AnimStartPosition);
    DOREPLIFETIME(ARhythmicDuopedeSegment, CarryingSackboy);
    DOREPLIFETIME(ARhythmicDuopedeSegment, DuopedePosition);
    DOREPLIFETIME(ARhythmicDuopedeSegment, DefaultPosition);
}


