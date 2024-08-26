#include "RegularDoorway.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"

ARegularDoorway::ARegularDoorway(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TunnelMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TunnelMeshComponent"));
    this->DoorMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DoorMeshComponent"));
    this->DoorCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("DoorCollisionComponent"));
    this->EntranceDetectionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EntranceDetectionComponent"));
    this->EntranceInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("EntranceInteractionComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_RegularDoorway"));
    this->IgnoreNearbySackboys = false;
    this->CachedThreadMaterial = NULL;
    this->State = ERegularDoorwayState::Closed;
    this->TunnelMeshComponent->SetupAttachment(RootComponent);
    this->DoorMeshComponent->SetupAttachment(TunnelMeshComponent);
    this->DoorCollisionComponent->SetupAttachment(TunnelMeshComponent);
    this->EntranceDetectionComponent->SetupAttachment(TunnelMeshComponent);
    this->EntranceInteractionComponent->SetupAttachment(TunnelMeshComponent);
    this->AkComponent->SetupAttachment(RootComponent);
}

void ARegularDoorway::SetIgnoreNearbySackboys(bool NewValue) {
}

void ARegularDoorway::OnRep_State(ERegularDoorwayState OldState) {
}

void ARegularDoorway::OnPreSpawn(USpawnPointComponent* pSpawnPointComponent) {
}

void ARegularDoorway::OnPrepareToInstantSpawn(USpawnPointComponent* pSpawnPointComponent) {
}

void ARegularDoorway::OnPostSpawn(USpawnPointComponent* pSpawnPointComponent, bool FirstSpawn) {
}

void ARegularDoorway::OnEntranceDetectionEndOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void ARegularDoorway::OnEntranceDetectionEndInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void ARegularDoorway::OnEntranceDetectionBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ARegularDoorway::OnEntranceDetectionBeginInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

bool ARegularDoorway::IsDoorwayOpen() const {
    return false;
}

void ARegularDoorway::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARegularDoorway, State);
}


