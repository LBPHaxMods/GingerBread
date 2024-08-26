#include "FlyingDuopedeSegment.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
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

AFlyingDuopedeSegment::AFlyingDuopedeSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SackboyCollider"));

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
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->Ak_FlyingDuopede = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTargetComponent"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainer"));
    this->SackboySlapTarget = CreateDefaultSubobject<USackboySlapTargetComponent>(TEXT("SackboySlapTarget"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->DuopedeSpeed = EFlyingDuopedeSpeed::Slow;
    this->State = EFlyingDuopedeState::Sleeping;
    this->AnimStartPosition = 0.00f;
    this->DuopedePosition = EFlyingDuopedePositions::Middle;
    this->DefaultPosition = EFlyingDuopedePositions::Middle;
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
    this->DuopedeAudioEvents = NULL;
    this->DuopedeDeathEmitter = NULL;
    this->TimeDelayToStopCarry = 0.10f;
    this->bShowDebugText = false;
    this->bLiveDuopede = false;
    this->SectionIndex = 0;
    this->bIsLevelPlaced = false;
    this->Speed = 0.00f;
    this->bCanSpawnRewards = true;
    this->CarryingSackboy = NULL;
    this->Ak_FlyingDuopede->SetupAttachment(DuopedeMesh);
    this->GrappleTarget->SetupAttachment(DuopedeMesh);
    this->SpotShadow->SetupAttachment(RootComponent);
    this->PickupContainer->SetupAttachment(RootComponent);
    this->SackboySlapTarget->SetupAttachment(RootComponent);
    this->ThrowTarget->SetupAttachment(DuopedeMesh);
    this->SackboyInteraction->SetupAttachment(RootComponent);
    this->GampelayTag->SetupAttachment(RootComponent);
    this->TopCollider->SetupAttachment(RootComponent);
    this->TopInteraction->SetupAttachment(TopCollider);
    this->DuopedeMesh->SetupAttachment(RootComponent);
    this->FrontCollider->SetupAttachment(DuopedeMesh);
    this->FrontInteraction->SetupAttachment(FrontCollider);
    this->CraftCutterTarget->SetupAttachment(DuopedeMesh);
}

void AFlyingDuopedeSegment::UpdatePosition() {
}

void AFlyingDuopedeSegment::SynchroniseAnimation_Implementation() {
}

void AFlyingDuopedeSegment::OnSackboyColliderHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AFlyingDuopedeSegment::OnRep_State() {
}

void AFlyingDuopedeSegment::OnFrontColliderHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AFlyingDuopedeSegment::CheckForSackboyCarriedState() {
}

void AFlyingDuopedeSegment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFlyingDuopedeSegment, DuopedeSpeed);
    DOREPLIFETIME(AFlyingDuopedeSegment, State);
    DOREPLIFETIME(AFlyingDuopedeSegment, AnimStartPosition);
    DOREPLIFETIME(AFlyingDuopedeSegment, DuopedePosition);
    DOREPLIFETIME(AFlyingDuopedeSegment, DefaultPosition);
    DOREPLIFETIME(AFlyingDuopedeSegment, CarryingSackboy);
}


