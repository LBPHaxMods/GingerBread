#include "MemoryOrb.h"
#include "AkComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/TimelineComponent.h"
#include "AttractionCollectableComponent.h"
#include "CollectableHUDMoverComponent.h"
#include "CollectablePickupMoverComponent.h"
#include "CollectableReturnComponent.h"
#include "Net/UnrealNetwork.h"
#include "PoIComponent.h"
#include "SpotShadowComponent.h"
#include "TrackableSecretComponent.h"

AMemoryOrb::AMemoryOrb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldDestroyOnCollected = false;
    this->ShouldUseSackboyTracker = false;
    this->ShouldUseCraftCutterTarget = false;
    this->TrackCollection = true;
    this->bAutoWake = false;
    this->ParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
    this->PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotLight"));
    this->POI = CreateDefaultSubobject<UPoIComponent>(TEXT("POI"));
    this->TrackableSecret = CreateDefaultSubobject<UTrackableSecretComponent>(TEXT("TrackableSecret"));
    this->CollectableHUDMover = CreateDefaultSubobject<UCollectableHUDMoverComponent>(TEXT("HUDMover"));
    this->CollectablePickupMover = CreateDefaultSubobject<UCollectablePickupMoverComponent>(TEXT("PickupMover"));
    this->CollectableReturnComponent = CreateDefaultSubobject<UCollectableReturnComponent>(TEXT("PickupReturnComponent"));
    this->SoundAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("SoundAkComponent"));
    this->HapticsAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("HapticsAkComponent"));
    this->AttractionComponent = CreateDefaultSubobject<UAttractionCollectableComponent>(TEXT("AttractionComponent"));
    this->CollectAnimVFX = CreateDefaultSubobject<UTimelineComponent>(TEXT("CollectedTimeLine"));
    this->SpawnTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("SpawnTimeline"));
    this->CollectTime = 0.00f;
    this->DeformationCurve = NULL;
    this->CollectedHaptics = NULL;
    this->PlayCollectionLoopHaptics = NULL;
    this->StopCollectionLoopHaptics = NULL;
    this->CloudHitHaptics = NULL;
    this->BeginCollectedRumble = NULL;
    this->EndCollectedRumble = NULL;
    this->CollectedRumbleName = TEXT("WobbleBlobLandedOn");
    this->SpawnType = EMemoryOrbSpawnType::PreExisting;
    this->AutoSpawn = false;
    this->SpawnPS = NULL;
    this->StaticSpawnDelay = 1.00f;
    this->StaticScaleInDelay = 0.80f;
    this->ScaleCurve = NULL;
    this->LocationCurve = NULL;
    this->SpawnAudioEvent = NULL;
    this->ReturnAudioEvent = NULL;
    this->GhostedMaterialParameterTable = NULL;
    this->CameraEffect = NULL;
    this->Spawned = false;
    this->ItemPickUpAudioEvent = NULL;
    this->ItemPickUpGamepadAudioEvent = NULL;
    this->CloudHitGamepadAudioEvent = NULL;
    this->AwardScoreAmount = 50;
    this->AuthoritySackboy = NULL;
    this->AuthorityState = EMemoryOrbState::Idle;
    this->OnCollectedVFX = NULL;
    this->OrbDyamicMaterial = NULL;
    this->BaseMaterial = NULL;
    this->StaticPS = NULL;
    this->SoundAkComponent->SetupAttachment(StaticMeshComponent);
    this->HapticsAkComponent->SetupAttachment(StaticMeshComponent);
    this->ParticleComponent->SetupAttachment(StaticMeshComponent);
    this->PointLight->SetupAttachment(StaticMeshComponent);
    this->SpotShadow->SetupAttachment(StaticMeshComponent);
    this->POI->SetupAttachment(StaticMeshComponent);
}

void AMemoryOrb::Spawn() {
}

void AMemoryOrb::SetMemoryTexture(UTexture2D* Texture) {
}

void AMemoryOrb::SetMemoryRef(const FDataTableRowHandle& memoryRef) {
}

void AMemoryOrb::SetAutoSpawn(bool Enabled) {
}

void AMemoryOrb::RunHUDMovementLogic(UCollectablePickupMoverComponent* mover, FVector OrbLocation, FVector OrbPreviousLocation) {
}

void AMemoryOrb::RecordMemory_Implementation() {
}

void AMemoryOrb::OrbHUBMovementEnded(UCollectableHUDMoverComponent* mover) {
}

void AMemoryOrb::OnSpawnTimelineFinish() {
}

void AMemoryOrb::OnSpawnScaleUpdate(float Scale) {
}

void AMemoryOrb::OnSpawnLocationUpdate(float Location) {
}

void AMemoryOrb::OnSackboyDied(ASackboy* Sackboy) {
}

void AMemoryOrb::OnReturnComplete(UCollectableReturnComponent* mover) {
}

void AMemoryOrb::OnRep_OrbReference() {
}

void AMemoryOrb::OnRep_AuthorityState() {
}

void AMemoryOrb::OnRep_AuthoritySackboy() {
}

void AMemoryOrb::OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer) {
}

void AMemoryOrb::OnMemoryTextureLoaded() {
}

void AMemoryOrb::OnDeformationCurveUpdate(float Deformation) {
}

void AMemoryOrb::OnCollectEvent() {
}

EMemoryOrbSpawnType AMemoryOrb::GetSpawnType() {
    return EMemoryOrbSpawnType::PreExisting;
}

UMemoryOrbsHUDComponent* AMemoryOrb::GetMemoryOrbHUD() {
    return NULL;
}

int32 AMemoryOrb::GetMemoryID() {
    return 0;
}

void AMemoryOrb::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMemoryOrb, MemoryReference);
    DOREPLIFETIME(AMemoryOrb, SpawnType);
    DOREPLIFETIME(AMemoryOrb, SpawnPS);
    DOREPLIFETIME(AMemoryOrb, Spawned);
    DOREPLIFETIME(AMemoryOrb, AuthoritySackboy);
    DOREPLIFETIME(AMemoryOrb, AuthorityState);
}


