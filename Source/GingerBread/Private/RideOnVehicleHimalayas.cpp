#include "RideOnVehicleHimalayas.h"
#include "AkComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/ChildActorComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "CSPHelperComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"

ARideOnVehicleHimalayas::ARideOnVehicleHimalayas(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChimneyInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("ChimneyInteraction"));
    this->CheckpointGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("CheckpointGameplayTag"));
    this->RotatePointLeft = CreateDefaultSubobject<USceneComponent>(TEXT("RotatePointLeft"));
    this->RotatePointRight = CreateDefaultSubobject<USceneComponent>(TEXT("RotatePointRight"));
    this->RelativeVelocityGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("RelativeVelocityGameplayTag"));
    this->TrainSkeleton = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TrainSkeleton"));
    this->TrainCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TrainCollision"));
    this->TrainGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("TrainGameplayTag"));
    this->ChimneyCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ChimneyCollision"));
    this->BoilerCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoilerCollision"));
    this->BoilerGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("BoilerGameplayTag"));
    this->TrainDriver = CreateDefaultSubobject<UChildActorComponent>(TEXT("TrainDriver"));
    this->Ak_Train = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_Train"));
    this->Ak_TrainWhistle = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_TrainWhistle"));
    this->Ak_TrainWheelsLeft = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_TrainWheelsLeft"));
    this->Ak_TrainWheelsRight = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_TrainWheelsRight"));
    this->Ak_TrainHapticsLeft = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_TrainHapticsLeft"));
    this->Ak_TrainHapticsRight = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_TrainHapticsRight"));
    this->ChimneyVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ChimneyVFX"));
    this->SparksLeft01VFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SparksLeft01VFX"));
    this->SparksLeft02VFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SparksLeft02VFX"));
    this->SparksLeft03VFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SparksLeft03VFX"));
    this->SparksRight01VFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SparksRight01VFX"));
    this->SparksRight02VFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SparksRight02VFX"));
    this->SparksRight03VFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SparksRight03VFX"));
    this->WindSpeedVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WindSpeedVFX"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->RotateSidewaysTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("RotateSidewaysTimeline"));
    this->RotateForwardsTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("RotateForwardsTimeline"));
    this->WindSpeedTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("WindSpeedTimeline"));
    this->MoveToStartTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("MoveToStartTimeline"));
    this->CSPHelper = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelper"));
    this->EnemySpawnPoint0 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint0"));
    this->EnemySpawnPoint1 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint1"));
    this->EnemySpawnPoint2 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint2"));
    this->EnemySpawnPoint3 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint3"));
    this->EnemySpawnPoint4 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint4"));
    this->EnemySpawnPoint5 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint5"));
    this->EnemySpawnPoint6 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint6"));
    this->EnemySpawnPoint7 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint7"));
    this->EnemySpawnPoint8 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint8"));
    this->EnemySpawnPoint9 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint9"));
    this->EnemySpawnPoint10 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint10"));
    this->EnemySpawnPoint11 = CreateDefaultSubobject<UBillboardComponent>(TEXT("EnemySpawnPoint11"));
    this->BombSpawnPoint0 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BombSpawnPoint0"));
    this->BombSpawnPoint1 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BombSpawnPoint1"));
    this->BombSpawnPoint2 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BombSpawnPoint2"));
    this->BombSpawnPoint3 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BombSpawnPoint3"));
    this->BombSpawnPoint4 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BombSpawnPoint4"));
    this->BombSpawnPoint5 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BombSpawnPoint5"));
    this->BombSpawnPoint6 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BombSpawnPoint6"));
    this->BombSpawnPoint7 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BombSpawnPoint7"));
    this->BombSpawnPoint8 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BombSpawnPoint8"));
    this->BombSpawnPoint9 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BombSpawnPoint9"));
    this->BombSpawnPoint10 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BombSpawnPoint10"));
    this->BombSpawnPoint11 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BombSpawnPoint11"));
    this->BombSpawnPoint12 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BombSpawnPoint12"));
    this->BombSpawnPoint13 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BombSpawnPoint13"));
    this->BombSpawnPoint14 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BombSpawnPoint14"));
    this->BombSpawnPoint15 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BombSpawnPoint15"));
    this->BombSpawnPoint16 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BombSpawnPoint16"));
    this->BombSpawnPoint17 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BombSpawnPoint17"));
    this->TrainSFX = NULL;
    this->TrainWhistleSFX = NULL;
    this->TrainStopSFX = NULL;
    this->TrainHaptics = NULL;
    this->TrainHapticsStop = NULL;
    this->TrainHapticsSparkLeftStart = NULL;
    this->TrainHapticsSparkLeftStop = NULL;
    this->TrainHapticsSparkRightStart = NULL;
    this->TrainHapticsSparkRightStop = NULL;
    this->ScoreBubbleClass = NULL;
    this->LeftRightTilt = NULL;
    this->LeftRightRotate = NULL;
    this->ForwardsTilt = NULL;
    this->BackwardsTilt = NULL;
    this->FreeFallTilt = NULL;
    this->WindSpeed = NULL;
    this->MoveToStart = NULL;
    this->HeavyLandingDelay = 0.80f;
    this->StartOffset = -200.00f;
    this->MaxActiveScoreBubbles = 50;
    this->ServerForwardsRotation = 0.00f;
    this->ServerIsRotatedSideways = false;
    this->EnemySpawnPoint1->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawnPoint2->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawnPoint3->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawnPoint4->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawnPoint5->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawnPoint6->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawnPoint7->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawnPoint8->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawnPoint9->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawnPoint10->SetupAttachment(EnemySpawnersParent);
    this->EnemySpawnPoint11->SetupAttachment(EnemySpawnersParent);
    this->BombSpawnPoint0->SetupAttachment(BombThrowersParent);
    this->BombSpawnPoint1->SetupAttachment(BombThrowersParent);
    this->BombSpawnPoint2->SetupAttachment(BombThrowersParent);
    this->BombSpawnPoint3->SetupAttachment(BombThrowersParent);
    this->BombSpawnPoint4->SetupAttachment(BombThrowersParent);
    this->BombSpawnPoint5->SetupAttachment(BombThrowersParent);
    this->BombSpawnPoint6->SetupAttachment(BombThrowersParent);
    this->BombSpawnPoint7->SetupAttachment(BombThrowersParent);
    this->BombSpawnPoint8->SetupAttachment(BombThrowersParent);
    this->BombSpawnPoint9->SetupAttachment(BombThrowersParent);
    this->BombSpawnPoint10->SetupAttachment(BombThrowersParent);
    this->BombSpawnPoint11->SetupAttachment(BombThrowersParent);
    this->BombSpawnPoint12->SetupAttachment(BombThrowersParent);
    this->BombSpawnPoint13->SetupAttachment(BombThrowersParent);
    this->BombSpawnPoint14->SetupAttachment(BombThrowersParent);
    this->BombSpawnPoint15->SetupAttachment(BombThrowersParent);
    this->BombSpawnPoint16->SetupAttachment(BombThrowersParent);
    this->BombSpawnPoint17->SetupAttachment(BombThrowersParent);
    this->ChimneyInteraction->SetupAttachment(ChimneyCollision);
    this->CheckpointGameplayTag->SetupAttachment(SpawnPoint);
    this->RotatePointLeft->SetupAttachment(MeshAndCollision);
    this->RotatePointRight->SetupAttachment(RotatePointLeft);
    this->RelativeVelocityGameplayTag->SetupAttachment(RotatePointRight);
    this->TrainSkeleton->SetupAttachment(RotatePointRight);
    this->TrainCollision->SetupAttachment(TrainSkeleton);
    this->TrainGameplayTag->SetupAttachment(TrainCollision);
    this->ChimneyCollision->SetupAttachment(TrainSkeleton);
    this->BoilerCollision->SetupAttachment(TrainSkeleton);
    this->BoilerGameplayTag->SetupAttachment(BoilerCollision);
    this->TrainDriver->SetupAttachment(TrainCollision);
    this->Ak_Train->SetupAttachment(TrainCollision);
    this->Ak_TrainWhistle->SetupAttachment(ChimneyCollision);
    this->Ak_TrainWheelsLeft->SetupAttachment(TrainCollision);
    this->Ak_TrainWheelsRight->SetupAttachment(TrainCollision);
    this->Ak_TrainHapticsLeft->SetupAttachment(TrainCollision);
    this->Ak_TrainHapticsRight->SetupAttachment(TrainCollision);
    this->ChimneyVFX->SetupAttachment(ChimneyCollision);
    this->SparksLeft01VFX->SetupAttachment(TrainCollision);
    this->SparksLeft02VFX->SetupAttachment(TrainCollision);
    this->SparksLeft03VFX->SetupAttachment(TrainCollision);
    this->SparksRight01VFX->SetupAttachment(TrainCollision);
    this->SparksRight02VFX->SetupAttachment(TrainCollision);
    this->SparksRight03VFX->SetupAttachment(TrainCollision);
    this->WindSpeedVFX->SetupAttachment(MeshAndCollision);
    this->EnemySpawnPoint0->SetupAttachment(EnemySpawnersParent);
}

void ARideOnVehicleHimalayas::WindSpeedTimelineFinished() {
}

void ARideOnVehicleHimalayas::WindSpeedTimelineCallback(float val) {
}

void ARideOnVehicleHimalayas::UpdateRotatePoint(bool bLeft, bool bRight) {
}

void ARideOnVehicleHimalayas::TrainTiltForward(float RotationTime, float Degrees) {
}

void ARideOnVehicleHimalayas::TrainTiltBackward(float RotationTime, float Degrees) {
}

void ARideOnVehicleHimalayas::TrainLeftRightTilt(float RotationTime, float Degrees) {
}

void ARideOnVehicleHimalayas::TrainLeftRightRotate(float RotationTime, float Degrees) {
}

void ARideOnVehicleHimalayas::TrainFreeFallTilt(float RotationTime, float Degrees) {
}

void ARideOnVehicleHimalayas::StopHeavyLanding() {
}

void ARideOnVehicleHimalayas::SpeedWindOn(float RampUpTime) {
}

void ARideOnVehicleHimalayas::SpeedWindOff(float RampDownTime) {
}

void ARideOnVehicleHimalayas::SpawnScoreBubbles(int32 Amount, float DelayPerSpawn) {
}

void ARideOnVehicleHimalayas::SparksRightOn() {
}

void ARideOnVehicleHimalayas::SparksRightOff() {
}

void ARideOnVehicleHimalayas::SparksLeftOn() {
}

void ARideOnVehicleHimalayas::SparksLeftOff() {
}

void ARideOnVehicleHimalayas::RotateSidewaysTimelineFinished() {
}

void ARideOnVehicleHimalayas::RotateSidewaysTimelineCallback(float val) {
}

void ARideOnVehicleHimalayas::RotateForwardsTimelineFinished() {
}

void ARideOnVehicleHimalayas::RotateForwardsTimelineCallback(float val) {
}

void ARideOnVehicleHimalayas::PlayWhistleSound() {
}

void ARideOnVehicleHimalayas::OnCSPMoveToStart(uint32 Type) {
}

void ARideOnVehicleHimalayas::Multicast_MoveToStartPosition_Implementation(float DelayBeforeStarting, float Time, float Distance) {
}

void ARideOnVehicleHimalayas::MoveToStartTimelineFinished() {
}

void ARideOnVehicleHimalayas::MoveToStartTimelineCallback(float val) {
}

void ARideOnVehicleHimalayas::MoveToStartPosition(float DelayBeforeStarting, float Time, float Distance) {
}

void ARideOnVehicleHimalayas::ManageScoreBubble(AScoreBubble* ScoreBubble) {
}

void ARideOnVehicleHimalayas::ApplyImpulseToScoreBubbles(FVector Impulse) {
}

void ARideOnVehicleHimalayas::AllSackboysAboard() {
}

void ARideOnVehicleHimalayas::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARideOnVehicleHimalayas, ServerForwardsRotation);
    DOREPLIFETIME(ARideOnVehicleHimalayas, ServerIsRotatedSideways);
}


