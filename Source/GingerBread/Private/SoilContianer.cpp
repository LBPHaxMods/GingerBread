#include "SoilContianer.h"
#include "AkComponent.h"
#include "Components/ArrowComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

ASoilContianer::ASoilContianer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));

    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->SoilMeshCollider = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SoilMeshCollider"));
    this->PlantPot = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlantPot"));
    this->AKFlowerPot = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_FlowerPot"));
    this->Timeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Timeline"));
    this->DappledLightBlockedStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DappledLightBlocker"));
    this->Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->FlowerSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FlowerSkeletalMesh"));
    this->FarThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("FarThrowTarget"));
    this->NearThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("NearThrowTarget"));
    this->PotCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PotCollision"));
    this->RimCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RimCollision"));
    this->SackboyRimCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SackboyRimCollision"));
    this->SackboyRimGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("SackboyRimGameplayTag"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->UseArrowLaunchVector = false;
    this->NearTargetMinRange = 0.00f;
    this->NearTargetMaxRange = 20.00f;
    this->FarTargetMaxRange = 75.00f;
    this->NearThrowPitch = 80.00f;
    this->FarThrowPitch = 60.00f;
    this->BellsToSpawn = 1;
    this->FlowerType = EFlowerType::FlowerType1;
    this->CollectabellSize = ECollectabellSize::S;
    this->SeedLandAndBurrow = NULL;
    this->SeedBellPop = NULL;
    this->SeedFlowerPop = NULL;
    this->SoilPlantGrowVFX = NULL;
    this->PlantEmergeVFX = NULL;
    this->SeedSinkAlpha = NULL;
    this->RotationAlpha = NULL;
    this->vibration = NULL;
    this->TimelineLength = 1.00f;
    this->CollectabellBlueprint = NULL;
    this->VibrationStrength = 0.50f;
    this->SeedPlantRangeSquared = 20.00f;
    this->SeedActor = NULL;
    this->bPlantHasGrown = false;
    this->SoilMeshCollider->SetupAttachment(RootComponent);
    this->PlantPot->SetupAttachment(RootComponent);
    this->AKFlowerPot->SetupAttachment(PlantPot);
    this->DappledLightBlockedStaticMesh->SetupAttachment(SoilMeshCollider);
    this->Arrow->SetupAttachment(RootComponent);
    this->FlowerSkeletalMesh->SetupAttachment(RootComponent);
    this->FarThrowTarget->SetupAttachment(FlowerSkeletalMesh);
    this->NearThrowTarget->SetupAttachment(FlowerSkeletalMesh);
    this->PotCollision->SetupAttachment(RootComponent);
    this->RimCollision->SetupAttachment(RootComponent);
    this->SackboyRimCollision->SetupAttachment(RootComponent);
    this->SackboyRimGameplayTag->SetupAttachment(SackboyRimCollision);
    this->PickupContainer->SetupAttachment(RootComponent);
}

void ASoilContianer::SpawnPrize() {
}


void ASoilContianer::PlantSeed_Implementation(ASeed* Seed) {
}

void ASoilContianer::OnVibrationTrackUpdate(FVector VibrationValue) {
}

void ASoilContianer::OnTimelineUpdated() {
}

void ASoilContianer::OnTimelineStartedEvent() {
}

void ASoilContianer::OnTimelineFinished() {
}

void ASoilContianer::OnSoilMeshColliderHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASoilContianer::OnSeedSinkAlphaTrackUpdate(float SeedSinkAlphaValue) {
}

void ASoilContianer::OnSeedCollide(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASoilContianer::OnRotationAlphaTrackUpdate(float RotationAlphaValue) {
}

void ASoilContianer::OnRep_PlantHasGrown() {
}

void ASoilContianer::OnPrizeSpawned(UPickupContainerComponent* container, AActor* spawnedPrize, int32 Index) {
}

void ASoilContianer::BounceTowardsGrowthPoint_Implementation(FVector ToGrowthPointVector, ASeed* Seed) {
}

void ASoilContianer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASoilContianer, SeedActor);
    DOREPLIFETIME(ASoilContianer, bPlantHasGrown);
}


