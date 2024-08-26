#include "HangingHive.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/ForceFeedbackComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "AttackFlashComponent.h"
#include "BlastersTargetComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "OverlapManagerComponent.h"
#include "PickupContainerComponent.h"
#include "PoIComponent.h"
#include "SackboyJumpStompTargetComponent.h"
#include "SackboySlapTargetComponent.h"
#include "SpotShadowComponent.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

AHangingHive::AHangingHive(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HiveCollision"));

    this->HiveCollision = (UCapsuleComponent*)RootComponent;
    this->HiveInteractionCollision = CreateDefaultSubobject<UInteractionComponent>(TEXT("HiveInteractionCollision"));
    this->SackboySlapTarget = CreateDefaultSubobject<USackboySlapTargetComponent>(TEXT("SackboySlapTarget"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->BlastersTarget = CreateDefaultSubobject<UBlastersTargetComponent>(TEXT("BlastersTarget"));
    this->SackboyJumpStompTarget = CreateDefaultSubobject<USackboyJumpStompTargetComponent>(TEXT("SackboyJumpStompTarget"));
    this->AkHangingHive = CreateDefaultSubobject<UAkComponent>(TEXT("AkSurpriseHive"));
    this->PoIComponent = CreateDefaultSubobject<UPoIComponent>(TEXT("PoIComponent"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->ForceFeedback = CreateDefaultSubobject<UForceFeedbackComponent>(TEXT("ForceFeedback"));
    this->HangingHive_SK = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HangingHive_SK"));
    this->BeeSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("BeeSpawnPoint"));
    this->RevealSphere = CreateDefaultSubobject<USphereComponent>(TEXT("RevealSphere"));
    this->Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    this->DropBox = CreateDefaultSubobject<UBoxComponent>(TEXT("DropBox"));
    this->RevealInteractionSphere = CreateDefaultSubobject<UInteractionComponent>(TEXT("RevealInteractionSphere"));
    this->MainInteractionSphere = NULL;
    this->InteractionDropBox = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionDropBox"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->PickupContainerComponent = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->OverlapManagerRevealSphere = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManagerRevealSphere"));
    this->HitFlashComponentBase = NULL;
    this->AttackFlash = CreateDefaultSubobject<UAttackFlashComponent>(TEXT("AttackFlash"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->SpawnReward = true;
    this->IsHiveVisible = false;
    this->ManualDrop = false;
    this->ManuallyFireBees = false;
    this->StartActive = true;
    this->HiveRevealRange = 75.00f;
    this->BeesInBurst = 3;
    this->BurstCooldown = 9.50f;
    this->RestrictBeeHeight = false;
    this->BeeLifespan = 8.00f;
    this->DeathFX = NULL;
    this->HitStrength = 8.00f;
    this->Boomblebee_BP = NULL;
    this->RevealRandomImpulse = 5.00f;
    this->RevealRandomAngularImpulse = 500.00f;
    this->RevealRandomRot = 1000.00f;
    this->BeeHiveRevealAudio = NULL;
    this->BeeHiveImpactAudio = NULL;
    this->BeeHiveDeathExplosionAudio = NULL;
    this->BeeHiveFireAudio = NULL;
    this->HiveStringCutterCutAudio = NULL;
    this->BeeHiveRevealHaptics = NULL;
    this->BeeHiveImpactHaptics = NULL;
    this->BeeHiveDeathExplosionHaptics = NULL;
    this->BeeHiveFireHaptics = NULL;
    this->BeeSpawnVFX = NULL;
    this->HiveHitVFX = NULL;
    this->SpawnMontage = NULL;
    this->HitMontage = NULL;
    this->Revealed = false;
    this->HiveInteractionCollision->SetupAttachment(RootComponent);
    this->SackboySlapTarget->SetupAttachment(RootComponent);
    this->SpotShadow->SetupAttachment(RootComponent);
    this->ThrowTarget->SetupAttachment(RootComponent);
    this->CraftCutterTarget->SetupAttachment(RootComponent);
    this->BlastersTarget->SetupAttachment(RootComponent);
    this->SackboyJumpStompTarget->SetupAttachment(RootComponent);
    this->AkHangingHive->SetupAttachment(RootComponent);
    this->PoIComponent->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->ForceFeedback->SetupAttachment(RootComponent);
    this->HangingHive_SK->SetupAttachment(RootComponent);
    this->BeeSpawnPoint->SetupAttachment(HangingHive_SK);
    this->RevealSphere->SetupAttachment(RootComponent);
    this->Sphere->SetupAttachment(RootComponent);
    this->DropBox->SetupAttachment(RootComponent);
    this->RevealInteractionSphere->SetupAttachment(RootComponent);
    this->InteractionDropBox->SetupAttachment(RootComponent);
    this->HitPoints->SetupAttachment(RootComponent);
    this->PickupContainerComponent->SetupAttachment(RootComponent);
}

void AHangingHive::OnSpawnMontageBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void AHangingHive::OnRevealHive_Implementation(const FVector hiveImpulse, const FVector hiveAngImpulse) {
}

void AHangingHive::OnRep_Revealed() {
}

void AHangingHive::OnHiveDeath_Implementation() {
}

void AHangingHive::OnHiveCollisionHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AHangingHive::OnHiveCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHangingHive::OnHiveCollisionBeginInteraction(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AHangingHive::OnFireBurst_Implementation() {
}

void AHangingHive::OnFireBee_Implementation(ABoomblebee* newBee) {
}

void AHangingHive::OnEndOverlapAnySackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void AHangingHive::OnEndInteractAnySackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void AHangingHive::OnDropBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHangingHive::OnDropBoxBeginInteraction(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AHangingHive::OnBeginOverlapAnySackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHangingHive::OnBeginInteractAnySackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void AHangingHive::AttachedThreadCut(const FVector& CutLocation, const FHitPointModifyResult& DamageResult, AActor* DamageActor, UPrimitiveComponent* DamagePrimitive) {
}

void AHangingHive::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHangingHive, Revealed);
}


