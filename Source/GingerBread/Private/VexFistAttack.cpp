#include "VexFistAttack.h"
#include "Components/BoxComponent.h"
#include "Components/DecalComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CSPHelperComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"

AVexFistAttack::AVexFistAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceenRoot"));
    this->SceenRoot = (USceneComponent*)RootComponent;
    this->HandRoot = CreateDefaultSubobject<USceneComponent>(TEXT("HandRoot"));
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
    this->OverlapCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapCollider"));
    this->OverlapInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("OverlapInteraction"));
    this->FistBlockingCollider = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FistBlockingCollider"));
    this->FistBlockingGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("FistBlockingGameplayTag"));
    this->DamageCollider = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DamageCollider"));
    this->DamageInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("DamageInteraction"));
    this->ShadowComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("ShadowComponent"));
    this->ShadowComponentHQ = CreateDefaultSubobject<UDecalComponent>(TEXT("ShadowComponentHQ"));
    this->IndependentTrackingVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("IndependentTrackingVolume"));
    this->IndependentTriggerVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("IndependentTriggerVolume"));
    this->IndependentTriggerInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("IndependentTriggerInteraction"));
    this->ArmSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("ArmSplineComponent"));
    this->ArmVFXComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ArmVFXComponent"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->HitsPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitsPointsModifier"));
    this->FistType = EVexFistAttackType::Invalid;
    this->IsRightHand = true;
    this->FlyHeight_Conveyor = 44.00f;
    this->StartHeightFromGround_FinalFight = 30.00f;
    this->IndependentAttack_FinalFight = false;
    this->IndependentAttack_TriggerWidth = 20.00f;
    this->IndependentAttack_TriggerDepth = 20.00f;
    this->IndependentAttack_TrackingWidth = 20.00f;
    this->IndependentAttack_TrackingDepth = 20.00f;
    this->OneShot = false;
    this->IsBreakingFist_FinalFight = false;
    this->AttackOnSpot_FinalFight = false;
    this->IsPredicting = false;
    this->PredictAheadSeconds = 0.75f;
    this->CreateArmSplineDuration = 0.50f;
    this->MoveToTargetCurve = NULL;
    this->MoveToTargetDuration = 1.25f;
    this->MaxTargetAimLocationSpeed = 45.00f;
    this->MoveOverConveyorCurve = NULL;
    this->MoveOverConveyorDuration = 0.20f;
    this->SlamDownCurve = NULL;
    this->SlamDownDuration = 1.00f;
    this->SlamDownStartMovingTime = 0.65f;
    this->SlamDownDamageActiveTime = 0.74f;
    this->SlamDownImpactTime = 0.75f;
    this->PostSlamDespawnVFXTime = 0.20f;
    this->OverlapExplosionClass = NULL;
    this->HandFinishLifetime_Conveyor = 0.80f;
    this->EmissiveTexture = NULL;
    this->MaxEmissiveIntensity = 5.00f;
    this->ShadowShrinkDelay = 0.50f;
    this->ShadowGrowCurve = NULL;
    this->ShadowShrinkCurve = NULL;
    this->ShadowShrinkDuration = 0.25f;
    this->UseHQShadow = false;
    this->HQShadowRTIndex = 0;
    this->HandRoot->SetupAttachment(RootComponent);
    this->MeshComponent->SetupAttachment(HandRoot);
    this->OverlapCollider->SetupAttachment(HandRoot);
    this->OverlapInteraction->SetupAttachment(HandRoot);
    this->FistBlockingCollider->SetupAttachment(HandRoot);
    this->FistBlockingGameplayTag->SetupAttachment(FistBlockingCollider);
    this->DamageCollider->SetupAttachment(HandRoot);
    this->DamageInteraction->SetupAttachment(HandRoot);
    this->ShadowComponent->SetupAttachment(HandRoot);
    this->ShadowComponentHQ->SetupAttachment(HandRoot);
    this->IndependentTrackingVolume->SetupAttachment(RootComponent);
    this->IndependentTriggerVolume->SetupAttachment(RootComponent);
    this->IndependentTriggerInteraction->SetupAttachment(RootComponent);
    this->ArmSplineComponent->SetupAttachment(RootComponent);
    this->ArmVFXComponent->SetupAttachment(RootComponent);
}

void AVexFistAttack::TriggerAttackFromFistManager(ASackboy* inTargetSackboy, UPrimitiveComponent* TriggerVolume) {
}

void AVexFistAttack::SetUpFistFromFistManager(float FloorHeight, AVexFinalEncounter* InVexFinal) {
}

void AVexFistAttack::OnVexDefeated() {
}





void AVexFistAttack::OnBeginOverlap_IndependentAttackTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AVexFistAttack::OnBeginOverlap_Hand(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AVexFistAttack::OnBeginInteract_IndependentAttackTrigger(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AVexFistAttack::OnBeginInteract_Hand(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

bool AVexFistAttack::IsFistActive() const {
    return false;
}


