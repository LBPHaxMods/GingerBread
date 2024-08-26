#include "DuopedeSegment.h"
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

ADuopedeSegment::ADuopedeSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
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
    this->DuopedeMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DuopedeMesh"));
    this->FrontCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("FrontCollider"));
    this->FrontInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("FrontInteraction"));
    this->SpikeCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("SpikeCollider"));
    this->SpikeInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("SpikeInteraction"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->Ak_Duopede = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTargetComponent"));
    this->TextRenderer = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRenderComponent"));
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->SackboySlapTarget = CreateDefaultSubobject<USackboySlapTargetComponent>(TEXT("SackboySlapTarget"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTargetComponent"));
    this->IsLevelPlaced = false;
    this->DuopedeSpeed = EDuopedeSpeed::Slow;
    this->Speed = 0.00f;
    this->State = EDuopedeState::Sleeping;
    this->SplineFollowLeader = NULL;
    this->AnimStartPosition = 0.00f;
    this->CanSpawnRewards = true;
    this->UseStandardBladeSpinSpeedAnim = true;
    this->DisableSpikesDamage = false;
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
    this->DuopedePosition = EDuopedePositions::Front;
    this->DefaultPosition = EDuopedePositions::Front;
    this->ShowDebugText = false;
    this->DuopedeAudioEvents = NULL;
    this->SectionIndex = 0;
    this->DuopedeMesh->SetupAttachment(RootComponent);
    this->FrontCollider->SetupAttachment(DuopedeMesh);
    this->FrontInteraction->SetupAttachment(FrontCollider);
    this->SpikeCollider->SetupAttachment(DuopedeMesh);
    this->SpikeInteraction->SetupAttachment(SpikeCollider);
    this->CraftCutterTarget->SetupAttachment(DuopedeMesh);
    this->Ak_Duopede->SetupAttachment(DuopedeMesh);
    this->GrappleTarget->SetupAttachment(DuopedeMesh);
    this->PickupContainer->SetupAttachment(RootComponent);
    this->SackboySlapTarget->SetupAttachment(RootComponent);
    this->ThrowTarget->SetupAttachment(DuopedeMesh);
    this->SackboyInteraction->SetupAttachment(RootComponent);
    this->GampelayTag->SetupAttachment(RootComponent);
}

void ADuopedeSegment::UpdatePosition() {
}

void ADuopedeSegment::SynchroniseAnimation_Implementation() {
}

void ADuopedeSegment::OnSackboyColliderHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ADuopedeSegment::OnRep_State() {
}

void ADuopedeSegment::OnFrontColliderHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ADuopedeSegment::CheckForSackboyCarriedState() {
}

void ADuopedeSegment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADuopedeSegment, DuopedeSpeed);
    DOREPLIFETIME(ADuopedeSegment, State);
    DOREPLIFETIME(ADuopedeSegment, AnimStartPosition);
    DOREPLIFETIME(ADuopedeSegment, UseStandardBladeSpinSpeedAnim);
    DOREPLIFETIME(ADuopedeSegment, CarryingSackboy);
    DOREPLIFETIME(ADuopedeSegment, DuopedePosition);
    DOREPLIFETIME(ADuopedeSegment, DefaultPosition);
}


