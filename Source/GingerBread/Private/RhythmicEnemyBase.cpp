#include "RhythmicEnemyBase.h"
#include "AkComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "AttackFlashComponent.h"
#include "BlastersTargetComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "GrappleTargetComponent.h"
#include "HitPointsComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "PoIComponent.h"
#include "SpotShadowComponent.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

ARhythmicEnemyBase::ARhythmicEnemyBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));

    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->SpotShadowComponent = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadowComponent"));
    this->PoIComponent = CreateDefaultSubobject<UPoIComponent>(TEXT("PoIComponent"));
    this->BlastersTargetComponent = CreateDefaultSubobject<UBlastersTargetComponent>(TEXT("BlastersTargetComponent"));
    this->CraftCutterTargetComponent = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTargetComponent"));
    this->GrappleTargetComponent = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTargetComponent"));
    this->PickupContainerComponent = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPointsComponent"));
    this->AttackFlashComponent = CreateDefaultSubobject<UAttackFlashComponent>(TEXT("AttackFlashComponent"));
    this->ThrowTargetComponent = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTargetComponent"));
    this->StandardDamageAudioEvent = NULL;
    this->HeadStompDamageAudioEvent = NULL;
    this->CraftCutterDamageAudioEvent = NULL;
    this->RollingDamageAudioEvent = NULL;
    this->SpotShadowComponent->SetupAttachment(SkeletalMeshComponent);
    this->PoIComponent->SetupAttachment(RootComponent);
    this->BlastersTargetComponent->SetupAttachment(RootComponent);
    this->CraftCutterTargetComponent->SetupAttachment(RootComponent);
    this->GrappleTargetComponent->SetupAttachment(RootComponent);
    this->PickupContainerComponent->SetupAttachment(RootComponent);
    this->GameplayTagComponent->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
    this->ThrowTargetComponent->SetupAttachment(RootComponent);
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
}


void ARhythmicEnemyBase::OnRep_EnemyState() {
}

void ARhythmicEnemyBase::OnDeathSyncPointReached() {
}

bool ARhythmicEnemyBase::IsAlive() const {
    return false;
}

ASackboy* ARhythmicEnemyBase::GetDamageInstigator() const {
    return NULL;
}

void ARhythmicEnemyBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARhythmicEnemyBase, EnemyState);
}


