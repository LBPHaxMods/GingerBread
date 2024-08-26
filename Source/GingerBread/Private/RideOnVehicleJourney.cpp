#include "RideOnVehicleJourney.h"
#include "AkComponent.h"
#include "Components/BillboardComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Components/ChildActorComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "RegistrationComponent.h"

ARideOnVehicleJourney::ARideOnVehicleJourney(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EngineMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EngineMesh"));
    this->ExhaustMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ExhaustMesh"));
    this->RearPartMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RearPartMesh"));
    this->BodyMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->WheelVFX01 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WheelVFX01"));
    this->WheelVFX02 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WheelVFX02"));
    this->WheelVFX03 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WheelVFX03"));
    this->WheelVFX04 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WheelVFX04"));
    this->WheelVFX05 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WheelVFX05"));
    this->WheelVFX06 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WheelVFX06"));
    this->RearWheelVFX01 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RearWheelVFX01"));
    this->RearWheelVFX02 = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RearWheelVFX02"));
    this->VexificationEndVexVeesParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("VexificationEndVexVeesVFX"));
    this->ChimneySmokeParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ChimneySmokeVFX"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->EnemySpawner01 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawner01"));
    this->EnemySpawner02 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawner02"));
    this->EnemySpawner03 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawner03"));
    this->EnemySpawner04 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawner04"));
    this->EnemySpawner05 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawner05"));
    this->EnemySpawner06 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawner06"));
    this->EnemySpawner07 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawner07"));
    this->EnemySpawner08 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawner08"));
    this->EnemySpawner09 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawner09"));
    this->EnemySpawner10 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawner10"));
    this->EnemySpawner11 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawner11"));
    this->EnemySpawner12 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawner12"));
    this->BombThrower01 = CreateDefaultSubobject<UChildActorComponent>(TEXT("BombThrower01"));
    this->BombThrower02 = CreateDefaultSubobject<UChildActorComponent>(TEXT("BombThrower02"));
    this->BombThrower03 = CreateDefaultSubobject<UChildActorComponent>(TEXT("BombThrower03"));
    this->BombThrower04 = CreateDefaultSubobject<UChildActorComponent>(TEXT("BombThrower04"));
    this->BombThrower05 = CreateDefaultSubobject<UChildActorComponent>(TEXT("BombThrower05"));
    this->BombThrower06 = CreateDefaultSubobject<UChildActorComponent>(TEXT("BombThrower06"));
    this->BombThrower07 = CreateDefaultSubobject<UChildActorComponent>(TEXT("BombThrower07"));
    this->BombThrower08 = CreateDefaultSubobject<UChildActorComponent>(TEXT("BombThrower08"));
    this->BombThrower09 = CreateDefaultSubobject<UChildActorComponent>(TEXT("BombThrower09"));
    this->BombThrower10 = CreateDefaultSubobject<UChildActorComponent>(TEXT("BombThrower10"));
    this->BombThrower11 = CreateDefaultSubobject<UChildActorComponent>(TEXT("BombThrower11"));
    this->BombThrower12 = CreateDefaultSubobject<UChildActorComponent>(TEXT("BombThrower12"));
    this->BombThrower13 = CreateDefaultSubobject<UChildActorComponent>(TEXT("BombThrower13"));
    this->BombThrower14 = CreateDefaultSubobject<UChildActorComponent>(TEXT("BombThrower14"));
    this->BombThrower15 = CreateDefaultSubobject<UChildActorComponent>(TEXT("BombThrower15"));
    this->BombThrower16 = CreateDefaultSubobject<UChildActorComponent>(TEXT("BombThrower16"));
    this->AkTrain = CreateDefaultSubobject<UAkComponent>(TEXT("AkTrain"));
    this->AkTrainFront = CreateDefaultSubobject<UAkComponent>(TEXT("AkTrainFront"));
    this->AkHapticsLeft = CreateDefaultSubobject<UAkComponent>(TEXT("AkHapticsLeft"));
    this->AkHapticsRight = CreateDefaultSubobject<UAkComponent>(TEXT("AkHapticsRight"));
    this->AkHapticsRear = CreateDefaultSubobject<UAkComponent>(TEXT("AkHapticsRear"));
    this->CheckpointGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("CheckpointGameplayTag"));
    this->CollisionGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("CollisionGameplayTag"));
    this->EngineGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("EngineGameplayTag"));
    this->RearPartGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("RearPartGameplayTag"));
    this->BodyGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("BodyGameplayTag"));
    this->RegistrationComponent = CreateDefaultSubobject<URegistrationComponent>(TEXT("registration"));
    this->ProximityActivator = CreateDefaultSubobject<UChildActorComponent>(TEXT("ProximityActivator"));
    this->VexificationTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("VexificationTimeline"));
    this->MoveToStartTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("MoveToStartTimeline"));
    this->ChimneyInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("ChimneyInteraction"));
    this->PreviewVexificationTime = 0.00f;
    this->MoveToStartPositionDuration = 2.74f;
    this->DelayBeforeRevealStarts = 0.80f;
    this->TrainRevealVexificationDuration = 3.50f;
    this->StartOffset = -1000.00f;
    this->CameraShake = NULL;
    this->RideOnTrainEvent = NULL;
    this->RideOnStartEvent = NULL;
    this->RideOnStartReversedEvent = NULL;
    this->RideOnStopEvent = NULL;
    this->RideOnWhistleEvent = NULL;
    this->VibrationWreckersWhistleBlow = NULL;
    this->VibrationMovementLoopStart = NULL;
    this->VexificationCurve = NULL;
    this->MoveToStartCurve = NULL;
    this->Rep_ServerVehicleState = EJourneyVehicleState::Unknown;
    this->BombThrower16->SetupAttachment(BombThrowersParent);
    this->AkTrain->SetupAttachment(ExhaustMeshComponent);
    this->AkTrainFront->SetupAttachment(RootComponent);
    this->AkHapticsLeft->SetupAttachment(MeshAndCollision);
    this->AkHapticsRight->SetupAttachment(MeshAndCollision);
    this->AkHapticsRear->SetupAttachment(MeshAndCollision);
    this->CheckpointGameplayTag->SetupAttachment(SpawnPoint);
    this->CollisionGameplayTag->SetupAttachment(MeshAndCollision);
    this->EngineGameplayTag->SetupAttachment(EngineMeshComponent);
    this->RearPartGameplayTag->SetupAttachment(RearPartMeshComponent);
    this->BodyGameplayTag->SetupAttachment(BodyMeshComponent);
    this->RegistrationComponent->SetupAttachment(RootComponent);
    this->ProximityActivator->SetupAttachment(RootComponent);
    this->ChimneyInteraction->SetupAttachment(ExhaustMeshComponent);
    this->WheelVFX06->SetupAttachment(BodyMeshComponent);
    this->RearWheelVFX01->SetupAttachment(BodyMeshComponent);
    this->RearWheelVFX02->SetupAttachment(BodyMeshComponent);
    this->VexificationEndVexVeesParticleComponent->SetupAttachment(BodyMeshComponent);
    this->ChimneySmokeParticleComponent->SetupAttachment(ExhaustMeshComponent);
    this->EnemySpawner01->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawner02->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawner03->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawner04->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawner05->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawner06->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawner07->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawner08->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawner09->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawner10->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawner11->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawner12->SetupAttachment(EnemySpawnersParent);
    this->BombThrower01->SetupAttachment(BombThrowersParent);
    this->BombThrower02->SetupAttachment(BombThrowersParent);
    this->BombThrower03->SetupAttachment(BombThrowersParent);
    this->BombThrower04->SetupAttachment(BombThrowersParent);
    this->BombThrower05->SetupAttachment(BombThrowersParent);
    this->BombThrower06->SetupAttachment(BombThrowersParent);
    this->BombThrower07->SetupAttachment(BombThrowersParent);
    this->BombThrower08->SetupAttachment(BombThrowersParent);
    this->BombThrower09->SetupAttachment(BombThrowersParent);
    this->BombThrower10->SetupAttachment(BombThrowersParent);
    this->BombThrower11->SetupAttachment(BombThrowersParent);
    this->BombThrower12->SetupAttachment(BombThrowersParent);
    this->BombThrower13->SetupAttachment(BombThrowersParent);
    this->BombThrower14->SetupAttachment(BombThrowersParent);
    this->BombThrower15->SetupAttachment(BombThrowersParent);
    this->EngineMeshComponent->SetupAttachment(SkeletalMeshComponent);
    this->ExhaustMeshComponent->SetupAttachment(SkeletalMeshComponent);
    this->RearPartMeshComponent->SetupAttachment(SkeletalMeshComponent);
    this->BodyMeshComponent->SetupAttachment(SkeletalMeshComponent);
    this->SkeletalMeshComponent->SetupAttachment(MeshAndCollision);
    this->WheelVFX01->SetupAttachment(BodyMeshComponent);
    this->WheelVFX02->SetupAttachment(BodyMeshComponent);
    this->WheelVFX03->SetupAttachment(BodyMeshComponent);
    this->WheelVFX04->SetupAttachment(BodyMeshComponent);
    this->WheelVFX05->SetupAttachment(BodyMeshComponent);
}

void ARideOnVehicleJourney::StartRideOn() {
}

void ARideOnVehicleJourney::PlayVexificationOverDuration(float Duration) {
}

void ARideOnVehicleJourney::PlayReverseVexificationOverDuration(float Duration) {
}

void ARideOnVehicleJourney::OnVexificationTimelineUpdate(float Alpha) {
}

void ARideOnVehicleJourney::OnVexificationTimelineFinished() {
}

void ARideOnVehicleJourney::OnRep_ServerVehicleState() {
}

void ARideOnVehicleJourney::OnMoveToStartTimelineUpdate(float Alpha) {
}

void ARideOnVehicleJourney::OnMoveToStartTimelineFinished() {
}

void ARideOnVehicleJourney::OnMoveToStartBegin() {
}


void ARideOnVehicleJourney::DoChimneyBurst() {
}

void ARideOnVehicleJourney::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARideOnVehicleJourney, Rep_ServerVehicleState);
}


