#include "VoidEnergy.h"
#include "AkComponent.h"
#include "Components/DecalComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/TimelineComponent.h"
#include "Net/UnrealNetwork.h"
#include "OverlapManagerComponent.h"
#include "PoIComponent.h"
#include "SpotShadowComponent.h"

AVoidEnergy::AVoidEnergy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldDestroyOnCollected = false;
    this->ShouldUseCraftCutterTarget = false;
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->DecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("Decal"));
    this->CollectionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollectionSphere"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->POI = CreateDefaultSubobject<UPoIComponent>(TEXT("POI"));
    this->PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
    this->IdleParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("IdleParticles"));
    this->CollectionParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("CollectionParticles"));
    this->VoidProximityAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkVoidProximity"));
    this->VoidEnergyAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkVoidEnergy"));
    this->VoidEnergyAkHapticsComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkHapticsVoidEnergy"));
    this->CollectionOverlapManager = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("CollectionOverlapManager"));
    this->CubeSuckTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("CubeSuckTimeline"));
    this->CollectEvent = NULL;
    this->AmbientEvent = NULL;
    this->AmbientStopEvent = NULL;
    this->ExplosionEvent = NULL;
    this->ReverseEvent = NULL;
    this->EndEvent = NULL;
    this->ProximityEvent = NULL;
    this->ExplosionGamepadEvent = NULL;
    this->ReverseGamepadEvent = NULL;
    this->EndGamepadEvent = NULL;
    this->CollectStartGamepadEvent = NULL;
    this->DestroyedGamepadEvent = NULL;
    this->PickUpHapticsEvent = NULL;
    this->PickupForceFeedback = NULL;
    this->AmbientHapticsEvent = NULL;
    this->AmbientStopHapticsEvent = NULL;
    this->ExplosionHapticsEvent = NULL;
    this->ReverseHapticsEvent = NULL;
    this->EndHapticsEvent = NULL;
    this->CollectStarHapticsEvent = NULL;
    this->DestroyedHapticsEvent = NULL;
    this->bShouldAwardScore = true;
    this->ScoreToAward = 200;
    this->DetectionRadius = 120.00f;
    this->CollectionToTimeDilationDelay = 0.00f;
    this->OpenMultiplier = 1.00f;
    this->MasterMultiplier = 1.00f;
    this->MasterPlaySpeed = 1.00f;
    this->NumberOfPieces = 25;
    this->PieceImpulsePower = 1.00f;
    this->SuckDelay = 0.30f;
    this->SuckTriggerDelay = 1.00f;
    this->DecalFadeDelay = 1.00f;
    this->DecalFadeOutDuration = 0.20f;
    this->DefaultMusicBeatDuration = 0.50f;
    this->ExplosionVFX = NULL;
    this->CubeTrailVFX = NULL;
    this->CubeCollectionEndVFX = NULL;
    this->OnCollectedPS = NULL;
    this->SackboyProximityCurve = NULL;
    this->CubeSuckLocationCurve = NULL;
    this->CubeSuckScaleCurve = NULL;
    this->CollectionMontage = NULL;
    this->ExplosionMontage = NULL;
    this->GhostedMeshMaterialParameterTable = NULL;
    this->GhostedSpotShadowMaterialParameterTable = NULL;
    this->GhostedDecalMaterialParameterTable = NULL;
    this->CameraEffect = NULL;
    this->CollectingSackboy = NULL;
    this->CurrentState = EVoidEnergyState::Idle;
    this->VoidEnergyAkHapticsComponent->SetupAttachment(RootComponent);
    this->SpotShadow->SetupAttachment(RootComponent);
    this->DecalComponent->SetupAttachment(RootComponent);
    this->CollectionComponent->SetupAttachment(SkeletalMesh);
    this->SkeletalMesh->SetupAttachment(RootComponent);
    this->POI->SetupAttachment(RootComponent);
    this->PointLight->SetupAttachment(RootComponent);
    this->IdleParticleComponent->SetupAttachment(SkeletalMesh);
    this->CollectionParticleComponent->SetupAttachment(SkeletalMesh);
    this->VoidProximityAkComponent->SetupAttachment(RootComponent);
    this->VoidEnergyAkComponent->SetupAttachment(RootComponent);
}

void AVoidEnergy::OnRep_CurrentState() {
}

void AVoidEnergy::OnMusicEvent(TEnumAsByte<MusicEventType> MusicEvent, float BarDuration, float BeatDuration) {
}

void AVoidEnergy::OnCubeSuckTrigger() {
}

void AVoidEnergy::OnCubeSuckTimelineFinished() {
}

void AVoidEnergy::OnCubeSuckScaleTimelineUpdate(float Alpha) {
}

void AVoidEnergy::OnCubeSuckLocationTimelineUpdate(float Alpha) {
}

void AVoidEnergy::OnCubeSuckDelayEnd() {
}

void AVoidEnergy::OnCollectionTimeDilationDelay() {
}

void AVoidEnergy::OnCollectionOverlapSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AVoidEnergy::OnCollectingSackboyDestroyed(AActor* DestroyedActor) {
}

void AVoidEnergy::OnAnimNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}

void AVoidEnergy::FindSackboys() {
}

void AVoidEnergy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVoidEnergy, CollectingSackboy);
    DOREPLIFETIME(AVoidEnergy, CurrentState);
}


