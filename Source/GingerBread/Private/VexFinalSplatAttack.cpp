#include "VexFinalSplatAttack.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SplineComponent.h"
#include "CSPHelperComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "OverlapManagerComponent.h"

AVexFinalSplatAttack::AVexFinalSplatAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->OverlapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapBox"));
    this->InteractBox = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractBox"));
    this->LeftArmSpline = CreateDefaultSubobject<USplineComponent>(TEXT("LeftArmSpline"));
    this->RightArmSpline = CreateDefaultSubobject<USplineComponent>(TEXT("RightArmSpline"));
    this->ImpactLocation = CreateDefaultSubobject<USceneComponent>(TEXT("ImpactLocation"));
    this->LeftHandLocation = CreateDefaultSubobject<USceneComponent>(TEXT("LeftHandImpactLocation"));
    this->LeftHandCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftHandCollision"));
    this->LeftHandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LeftHandMesh"));
    this->LeftHandGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("LeftHandGameplayTag"));
    this->LeftHandSplineSpawnVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LeftHandSplineSpawnVFX"));
    this->RightHandLocation = CreateDefaultSubobject<USceneComponent>(TEXT("RightHandImpactLocation"));
    this->RightHandCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("RightHandCollision"));
    this->RightHandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RightHandMesh"));
    this->RightHandGameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("RightHandGameplayTag"));
    this->RightHandSplineSpawnVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RightHandSplineSpawnVFX"));
    this->DamageVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("DamageVolume"));
    this->DamageInteractVolume = CreateDefaultSubobject<UInteractionComponent>(TEXT("DamageInteractVolume"));
    this->OverlapManager = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManager"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->Vex = NULL;
    this->OnlyAttackOnce = false;
    this->IndependentAttack = false;
    this->AnticipationDuration = 0.50f;
    this->HandMovementAlphaCurve = NULL;
    this->HandMovementAlphaCurve_UsingVexMeshHands = NULL;
    this->CustomPlayRate = 1.00f;
    this->CustomPlayRate_UsingVexMeshHands = 0.75f;
    this->ApplyDamageTime = 0.95f;
    this->ApplyDamageTime_UsingVexMeshHands = 0.89f;
    this->AttackFinishTime = 1.00f;
    this->AttackFinishTime_UsingVexMeshHands = 0.94f;
    this->CollisionEnabledTime = 0.75f;
    this->AttackTotalDuration = 2.00f;
    this->BackEdgePadding = 20.00f;
    this->HandCollisionDepthOffset = 0.00f;
    this->MinHandSeperation = 1.00f;
    this->DamageWidth = 4.00f;
    this->DamageDepthMargin = 1.00f;
    this->DamageHeightMargin = 1.00f;
    this->DamageHeightOffset = 0.00f;
    this->EmissiveTexture = NULL;
    this->MaxEmissiveIntensity = 5.00f;
    this->DebugShowCollision = false;
    this->RightHandCollision->SetupAttachment(RightHandLocation);
    this->RightHandMesh->SetupAttachment(RightHandLocation);
    this->RightHandGameplayTag->SetupAttachment(RightHandLocation);
    this->RightHandSplineSpawnVFX->SetupAttachment(RightHandLocation);
    this->DamageVolume->SetupAttachment(ImpactLocation);
    this->DamageInteractVolume->SetupAttachment(DamageVolume);
    this->OverlapBox->SetupAttachment(RootComponent);
    this->InteractBox->SetupAttachment(OverlapBox);
    this->LeftArmSpline->SetupAttachment(RootComponent);
    this->RightArmSpline->SetupAttachment(RootComponent);
    this->ImpactLocation->SetupAttachment(RootComponent);
    this->LeftHandLocation->SetupAttachment(ImpactLocation);
    this->LeftHandCollision->SetupAttachment(LeftHandLocation);
    this->LeftHandMesh->SetupAttachment(LeftHandLocation);
    this->LeftHandGameplayTag->SetupAttachment(LeftHandLocation);
    this->LeftHandSplineSpawnVFX->SetupAttachment(LeftHandLocation);
    this->RightHandLocation->SetupAttachment(ImpactLocation);
}

void AVexFinalSplatAttack::TriggerSplatFromVex(bool InUsingVexMeshHands) {
}

void AVexFinalSplatAttack::OnVexDefeated() {
}

void AVexFinalSplatAttack::OnSlapAttackComplete() {
}



void AVexFinalSplatAttack::OnEndOverlapLastSackboy(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, ASackboy* OtherSackboy, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AVexFinalSplatAttack::OnEndInteractLastSackboy(UOverlapManagerComponent* OverlapManagerComponent, UInteractionComponent* OverlappedComponent, ASackboy* OtherSackboy, UInteractionComponent* OtherComp) {
}

void AVexFinalSplatAttack::OnBeginOverlapAnySackboy(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, ASackboy* OtherSackboy, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AVexFinalSplatAttack::OnBeginInteractAnySackboy(UOverlapManagerComponent* OverlapManagerComponent, UInteractionComponent* OverlappedComponent, ASackboy* OtherSackboy, UInteractionComponent* OtherComp) {
}



bool AVexFinalSplatAttack::IsOverlappingSackboys() const {
    return false;
}


