#include "GroundedHive.h"
#include "AkComponent.h"
#include "Components/ForceFeedbackComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "AttackFlashComponent.h"
#include "BlastersTargetComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "OverlapManagerComponent.h"
#include "PickupContainerComponent.h"
#include "PoIComponent.h"
#include "SackboyJumpStompTargetComponent.h"
#include "SackboySlapTargetComponent.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

AGroundedHive::AGroundedHive(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->Root = (USceneComponent*)RootComponent;
    this->HiveBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HiveBody"));
    this->HiveInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("HiveInteract"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->BlastersTarget = CreateDefaultSubobject<UBlastersTargetComponent>(TEXT("BlastersTarget"));
    this->SackboyJumpStompTarget = CreateDefaultSubobject<USackboyJumpStompTargetComponent>(TEXT("SackboyJumpStompTarget"));
    this->SackboySlapTarget = CreateDefaultSubobject<USackboySlapTargetComponent>(TEXT("SackboySlapTarget"));
    this->PoIComponent = CreateDefaultSubobject<UPoIComponent>(TEXT("PoIComponent"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->BeeSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("BeeSpawnPoint"));
    this->POI = CreateDefaultSubobject<UPoIComponent>(TEXT("POI"));
    this->ForceFeedback = CreateDefaultSubobject<UForceFeedbackComponent>(TEXT("ForceFeedback"));
    this->SackboyDetection = CreateDefaultSubobject<USphereComponent>(TEXT("SackboyDetection"));
    this->SackboyInteractionDetection = CreateDefaultSubobject<UInteractionComponent>(TEXT("SackboyInteractionDetection"));
    this->HiveMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HiveMesh"));
    this->AkGroundedHive = CreateDefaultSubobject<UAkComponent>(TEXT("AkGroundedHive"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->PickupContainerComponent = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->OverlapManager = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManager"));
    this->HitFlashComponentBase = NULL;
    this->AttackFlash = CreateDefaultSubobject<UAttackFlashComponent>(TEXT("AttackFlash"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->SpawnReward = true;
    this->ManuallySpawnBees = false;
    this->IsActivated = true;
    this->IsHiveVisible = false;
    this->HitStrength = 20.00f;
    this->SpawnRotationLimit = 35.00f;
    this->BeesInBurst = 3;
    this->BurstCooldown = 9.50f;
    this->Boomblebee_BP = NULL;
    this->RestrictBeeHeight = false;
    this->BeeLifespan = 8.00f;
    this->DeathFX = NULL;
    this->BeeSpawnVFX = NULL;
    this->HiveHitVFX = NULL;
    this->BeeHiveImpactAudio = NULL;
    this->BeeHiveDeathExplosionAudio = NULL;
    this->BeeHiveFireAudio = NULL;
    this->BeeHiveImpactHaptics = NULL;
    this->BeeHiveDeathExplosionHaptics = NULL;
    this->BeeHiveFireHaptics = NULL;
    this->SpawnMontage = NULL;
    this->HitMontage = NULL;
    this->DetectionRange = 75.00f;
    this->HiveBody->SetupAttachment(RootComponent);
    this->HiveInteract->SetupAttachment(HiveBody);
    this->ThrowTarget->SetupAttachment(HiveBody);
    this->CraftCutterTarget->SetupAttachment(HiveBody);
    this->BlastersTarget->SetupAttachment(HiveBody);
    this->SackboyJumpStompTarget->SetupAttachment(HiveBody);
    this->SackboySlapTarget->SetupAttachment(HiveBody);
    this->PoIComponent->SetupAttachment(HiveBody);
    this->GameplayTag->SetupAttachment(HiveBody);
    this->BeeSpawnPoint->SetupAttachment(HiveBody);
    this->POI->SetupAttachment(HiveBody);
    this->ForceFeedback->SetupAttachment(HiveBody);
    this->SackboyInteractionDetection->SetupAttachment(HiveBody);
    this->HiveMesh->SetupAttachment(HiveBody);
    this->AkGroundedHive->SetupAttachment(HiveBody);
    this->HitPoints->SetupAttachment(HiveBody);
    this->PickupContainerComponent->SetupAttachment(HiveBody);
}

void AGroundedHive::OnSpawnMontageBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void AGroundedHive::OnHiveDeath_Implementation() {
}

void AGroundedHive::OnHiveBodyHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AGroundedHive::OnFireBurst_Implementation() {
}

void AGroundedHive::OnFireBee_Implementation(ABoomblebee* newBee) {
}

void AGroundedHive::OnEndOverlapLastSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void AGroundedHive::OnEndInteractionLastSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void AGroundedHive::OnBeginOverlapFirstSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGroundedHive::OnBeginInteractionFirstSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}


