#include "WorldMapDoorway.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"

AWorldMapDoorway::AWorldMapDoorway(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OnlyNetworkGameHostCanActivate = true;
    this->TunnelMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TunnelMeshComponent"));
    this->DoorMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DoorMeshComponent"));
    this->DoorCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("DoorCollisionComponent"));
    this->EntranceDetectionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EntranceDetectionComponent"));
    this->EntranceInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("EntranceInteractionComponent"));
    this->PushVolumeInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("PushVolumeInteractionComponent"));
    this->PushVolumeComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("PushVolumeComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_WorldMapDoorway"));
    this->IgnoreNearbySackboys = false;
    this->CachedThreadMaterial = NULL;
    this->State = EWorldMapDoorwayState::Closed;
    this->TunnelMeshComponent->SetupAttachment(RootComponent);
    this->DoorMeshComponent->SetupAttachment(TunnelMeshComponent);
    this->DoorCollisionComponent->SetupAttachment(TunnelMeshComponent);
    this->EntranceDetectionComponent->SetupAttachment(TunnelMeshComponent);
    this->EntranceInteractionComponent->SetupAttachment(TunnelMeshComponent);
    this->PushVolumeInteractionComponent->SetupAttachment(TunnelMeshComponent);
    this->PushVolumeComponent->SetupAttachment(TunnelMeshComponent);
    this->AkComponent->SetupAttachment(RootComponent);
}

void AWorldMapDoorway::SetIgnoreNearbySackboys(bool NewValue) {
}

void AWorldMapDoorway::OnRep_State(EWorldMapDoorwayState OldState) {
}

void AWorldMapDoorway::OnPushVolumeEndOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void AWorldMapDoorway::OnPushVolumeEndInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void AWorldMapDoorway::OnPushVolumeBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AWorldMapDoorway::OnPushVolumeBeginInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void AWorldMapDoorway::OnPreSpawn(USpawnPointComponent* pSpawnPointComponent) {
}

void AWorldMapDoorway::OnPrepareToInstantSpawn(USpawnPointComponent* pSpawnPointComponent) {
}

void AWorldMapDoorway::OnPostSpawn(USpawnPointComponent* pSpawnPointComponent, bool FirstSpawn) {
}

void AWorldMapDoorway::OnEntranceDetectionEndOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void AWorldMapDoorway::OnEntranceDetectionEndInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void AWorldMapDoorway::OnEntranceDetectionBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AWorldMapDoorway::OnEntranceDetectionBeginInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

bool AWorldMapDoorway::IsDoorwayOpen() const {
    return false;
}

void AWorldMapDoorway::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWorldMapDoorway, State);
}


