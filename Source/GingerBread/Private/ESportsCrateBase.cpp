#include "ESportsCrateBase.h"
#include "Components/StaticMeshComponent.h"
#include "BlastersTargetComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

AESportsCrateBase::AESportsCrateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CrateStaticMesh"));

    this->CrateStaticMesh = (UStaticMeshComponent*)RootComponent;
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("Pickup"));
    this->InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionComponent"));

    this->BlastersTarget = CreateDefaultSubobject<UBlastersTargetComponent>(TEXT("BlastersTarget"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->DestroyParticles = NULL;
    this->TorqueForceOnDestroy = 50.00f;
    this->ParticlesOnDestroy = NULL;
    this->PieceDestroyStartDelay = 1.00f;
    this->SpawnedPieceMaxLifetimeAfterBounce = 0.50f;
    this->CurrentCrateState = EESportsCrateState::Intact;
    this->ThreadAttachmentOffset = 0.00f;
    this->UseMaterialOverrideWorldLocation = false;
    this->MaterialOverrideWorldLocation = EWorldLocation::Void;
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->PieceDestroyDelay = 0.10f;
    this->AudioEvent = NULL;
    this->GameplayTag->SetupAttachment(RootComponent);
    this->PickupContainer->SetupAttachment(RootComponent);
    this->InteractionComponent->SetupAttachment(RootComponent);
    this->BlastersTarget->SetupAttachment(RootComponent);
    this->ThrowTarget->SetupAttachment(RootComponent);
}

void AESportsCrateBase::OnRep_State() {
}

void AESportsCrateBase::OnLevelSettingsAvailable(AActor* ManagerActor) {
}

void AESportsCrateBase::OnCrateBaseHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AESportsCrateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AESportsCrateBase, CurrentCrateState);
}


