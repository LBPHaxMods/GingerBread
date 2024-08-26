#include "RideOnVehicleUndersea.h"
#include "AkComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/DecalComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagComponent.h"
#include "Net/UnrealNetwork.h"

ARideOnVehicleUndersea::ARideOnVehicleUndersea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VfxHolder = CreateDefaultSubobject<USceneComponent>(TEXT("VfxHolder"));
    this->ParticleSystem1 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem1"));
    this->ParticleSystem2 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem2"));
    this->ParticleSystem3 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem3"));
    this->ParticleSystem4 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem4"));
    this->ParticleSystem5 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem5"));
    this->ParticleSystem6 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem6"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->CrackDecal1 = CreateDefaultSubobject<UDecalComponent>(TEXT("CrackDecal1"));
    this->CrackDecal2 = CreateDefaultSubobject<UDecalComponent>(TEXT("CrackDecal2"));
    this->CrackDecal3 = CreateDefaultSubobject<UDecalComponent>(TEXT("CrackDecal3"));
    this->EnemySpawnPoint1 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint1"));
    this->EnemySpawnPoint2 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint2"));
    this->EnemySpawnPoint3 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint3"));
    this->EnemySpawnPoint4 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint4"));
    this->EnemySpawnPoint5 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint5"));
    this->EnemySpawnPoint6 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint6"));
    this->EnemySpawnPoint7 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint7"));
    this->EnemySpawnPoint8 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint8"));
    this->ChildActor1 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor1"));
    this->ChildActor2 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor2"));
    this->ChildActor3 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor3"));
    this->ChildActor4 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor4"));
    this->ChildActor5 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor5"));
    this->ChildActor6 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor6"));
    this->ChildActor7 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor7"));
    this->ChildActor8 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor8"));
    this->ChildActor9 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor9"));
    this->ChildActor10 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor10"));
    this->ChildActor11 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor11"));
    this->ChildActor12 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor12"));
    this->ChildActor13 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor13"));
    this->ChildActor14 = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor14"));
    this->ProximityActivator = CreateDefaultSubobject<UChildActorComponent>(TEXT("ProximityActivator"));
    this->GameplayTagAtRoot = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagAtRoot"));
    this->GameplayTagAtCheckpoint = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagAtCheckpoint"));
    this->RotationCurveTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("RotationCurveTimeline"));
    this->Ak_UnderseaRideOn = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_UnderseaRideOn"));
    this->Ak_HapticsMoveLeft = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_HapticsMoveLeft"));
    this->Ak_HapticsRotateLeft = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_HapticsRotateLeft"));
    this->Ak_HapticsMoveRight = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_HapticsMoveRight"));
    this->Ak_HapticsRotateRight = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_HapticsRotateRight"));
    this->Ak_HapticsDamaged = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_HapticsDamaged"));
    this->RotationTimelineCurve = NULL;
    this->RumbleTimelineCurve = NULL;
    this->SpotLightConeFront = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpotLightConeFront"));
    this->SpotLightConeLeft = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpotLightConeLeft"));
    this->SpotLightConeRight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpotLightConeRight"));
    this->SpotLightLeft = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLightLeft"));
    this->SpotLightRight = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLightRight"));
    this->BoatDamageBubblesParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BoatDamageBubblesParticle"));
    this->BoatDamageSmokeParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BoatDamageSmokeParticle"));
    this->FishRamsBoatParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FishRamsBoatParticle"));
    this->LightFlickerOffTL = CreateDefaultSubobject<UTimelineComponent>(TEXT("LightFlickerOffTL"));
    this->LightFlickerOnTL = CreateDefaultSubobject<UTimelineComponent>(TEXT("LightFlickerOnTL"));
    this->CockpitStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CockpitStaticMesh"));
    this->CockpitGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("CockpitGameplayTag"));
    this->FlickerOnTLCurve = NULL;
    this->FlickerOffTLCurve = NULL;
    this->SpotlightConeMaterial = NULL;
    this->RideOnEmissiveIntensity = 0.65f;
    this->RideOnMinEmissiveIntensity = 0.10f;
    this->SpotlightSourceEmissiveIntensity = 3.50f;
    this->SpotlightSourceMinEmissiveIntensity = 0.50f;
    this->HeavyLandingDelay = 0.80f;
    this->CameraShake = NULL;
    this->bDisableCameraDescentShake = true;
    this->AudioEventSubmarineCreak = NULL;
    this->AudioEventSubmarineFullDamage = NULL;
    this->AudioEventSubmarinePartialDamage = NULL;
    this->AudioEventSubmarineMove = NULL;
    this->AudioEventSubmarineMoveStart = NULL;
    this->AudioEventSubmarineRotate = NULL;
    this->AudioEventSubmarineRotateStart = NULL;
    this->AudioEventSubmarineRotateStop = NULL;
    this->StartSpeed = 15.00f;
    this->StartSpeedChangeDuration = 1.00f;
    this->StartRotateTime = 5.00f;
    this->StartRotateDegrees = -90.00f;
    this->SpotlightIntensity = 2500.00f;
    this->ReplicatedLightState = false;
    this->SpotlightDMI = NULL;
    this->RideOnDMI = NULL;
    this->SpotlightSourceDMI = NULL;
    this->Ak_HapticsDamaged->SetupAttachment(RootComponent);
    this->SpotLightConeFront->SetupAttachment(SkeletalMesh);
    this->SpotLightConeLeft->SetupAttachment(SkeletalMesh);
    this->SpotLightConeRight->SetupAttachment(SkeletalMesh);
    this->SpotLightLeft->SetupAttachment(SkeletalMesh);
    this->SpotLightRight->SetupAttachment(SkeletalMesh);
    this->BoatDamageBubblesParticle->SetupAttachment(StaticMesh);
    this->BoatDamageSmokeParticle->SetupAttachment(StaticMesh);
    this->FishRamsBoatParticle->SetupAttachment(StaticMesh);
    this->CockpitStaticMesh->SetupAttachment(StaticMesh);
    this->CockpitGameplayTag->SetupAttachment(CockpitStaticMesh);
    this->CrackDecal2->SetupAttachment(MeshAndCollision);
    this->CrackDecal3->SetupAttachment(MeshAndCollision);
    this->EnemySpawnPoint1->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawnPoint2->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawnPoint3->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawnPoint4->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawnPoint5->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawnPoint6->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawnPoint7->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawnPoint8->SetupAttachment(EnemySpawnersParent);
    this->ChildActor1->SetupAttachment(BombThrowersParent);
    this->ChildActor2->SetupAttachment(BombThrowersParent);
    this->ChildActor3->SetupAttachment(BombThrowersParent);
    this->ChildActor4->SetupAttachment(BombThrowersParent);
    this->ChildActor5->SetupAttachment(BombThrowersParent);
    this->ChildActor6->SetupAttachment(BombThrowersParent);
    this->ChildActor7->SetupAttachment(BombThrowersParent);
    this->ChildActor8->SetupAttachment(BombThrowersParent);
    this->ChildActor9->SetupAttachment(BombThrowersParent);
    this->ChildActor10->SetupAttachment(BombThrowersParent);
    this->ChildActor11->SetupAttachment(BombThrowersParent);
    this->ChildActor12->SetupAttachment(BombThrowersParent);
    this->ChildActor13->SetupAttachment(BombThrowersParent);
    this->ChildActor14->SetupAttachment(BombThrowersParent);
    this->ProximityActivator->SetupAttachment(RootComponent);
    this->GameplayTagAtRoot->SetupAttachment(RootComponent);
    this->GameplayTagAtCheckpoint->SetupAttachment(SpawnPoint);
    this->Ak_UnderseaRideOn->SetupAttachment(RootComponent);
    this->Ak_HapticsMoveLeft->SetupAttachment(RootComponent);
    this->Ak_HapticsRotateLeft->SetupAttachment(RootComponent);
    this->Ak_HapticsMoveRight->SetupAttachment(RootComponent);
    this->Ak_HapticsRotateRight->SetupAttachment(RootComponent);
    this->VfxHolder->SetupAttachment(RootComponent);
    this->ParticleSystem1->SetupAttachment(VfxHolder);
    this->ParticleSystem2->SetupAttachment(VfxHolder);
    this->ParticleSystem3->SetupAttachment(VfxHolder);
    this->ParticleSystem4->SetupAttachment(VfxHolder);
    this->ParticleSystem5->SetupAttachment(VfxHolder);
    this->ParticleSystem6->SetupAttachment(VfxHolder);
    this->SkeletalMesh->SetupAttachment(MeshAndCollision);
    this->StaticMesh->SetupAttachment(SkeletalMesh);
    this->CrackDecal1->SetupAttachment(MeshAndCollision);
}

void ARideOnVehicleUndersea::TriggerPartiallyDamagedState() {
}

void ARideOnVehicleUndersea::TriggerFullyDamagedState() {
}

void ARideOnVehicleUndersea::StopHeavyLanding() {
}

void ARideOnVehicleUndersea::StartRotationTimeline() {
}

void ARideOnVehicleUndersea::RotationCurveTimelineFinished() {
}

void ARideOnVehicleUndersea::RotationCurveTimelineCallback(float Value) {
}

void ARideOnVehicleUndersea::RotateEvent(float Time, float Degrees, UCurveFloat* NewCurve) {
}

void ARideOnVehicleUndersea::ResetAnimationTriggers() {
}

void ARideOnVehicleUndersea::PlayFishRamsThroughBoatAnim() {
}

void ARideOnVehicleUndersea::PlayEndReached() {
}

void ARideOnVehicleUndersea::PlayCrashThroughFloorAnim() {
}

void ARideOnVehicleUndersea::PlayBoatTiltSharpRightAnim() {
}

void ARideOnVehicleUndersea::OnRep_ServerMeshRotation() {
}

void ARideOnVehicleUndersea::OnRep_LightState() {
}

void ARideOnVehicleUndersea::LightsFlickeringTurnOff() {
}

void ARideOnVehicleUndersea::LightsFlickeringStayOn() {
}

void ARideOnVehicleUndersea::LightFlickerOnTLCallback(float InAlpha) {
}

void ARideOnVehicleUndersea::LightFlickerOffTLCallback(float InAlpha) {
}

void ARideOnVehicleUndersea::FishRamsBoatImpactVFX() {
}

void ARideOnVehicleUndersea::ChangeSpeedAndStartRotation() {
}

void ARideOnVehicleUndersea::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARideOnVehicleUndersea, ServerMeshRotation);
    DOREPLIFETIME(ARideOnVehicleUndersea, ReplicatedLightState);
}


