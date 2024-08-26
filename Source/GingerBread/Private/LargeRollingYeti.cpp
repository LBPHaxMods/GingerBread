#include "LargeRollingYeti.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ForceFeedbackComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "NetworkEventComponent.h"
#include "RollingMovementComponent.h"
#include "TriggerActorComponent.h"

ALargeRollingYeti::ALargeRollingYeti(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));

    this->SphereCollision = (USphereComponent*)RootComponent;
    this->HitPointsModification_Collider = CreateDefaultSubobject<USphereComponent>(TEXT("HitPointsModifierCollision"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->Ak_LargeRollingYeti = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_LargeRollingYeti"));
    this->Ak_Haptics = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_Haptics"));
    this->RollingDustKickup_ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RollingDustKickup"));
    this->StandardHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("StandardHitDamager"));
    this->CrushHitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("CrushHitPointsModifier"));
    this->RollingFeedback = CreateDefaultSubobject<UForceFeedbackComponent>(TEXT("RollingFeedback"));
    this->CrushDamage_Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("CrushDamage_Collider"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("Trigger"));
    this->RollingMovementComponent = CreateDefaultSubobject<URollingMovementComponent>(TEXT("RollingMovement"));
    this->NetworkEventComponent = CreateDefaultSubobject<UNetworkEventComponent>(TEXT("NetworkEventComponent"));
    this->HitPointModification_Interact = CreateDefaultSubobject<UInteractionComponent>(TEXT("HitPointsModifierInteract"));
    this->CrushDamage_Interact = CreateDefaultSubobject<UInteractionComponent>(TEXT("CrushDamage_Interact"));
    this->bFakeMovement = false;
    this->bAutoReset = true;
    this->bForceAlwaysGrounded = true;
    this->RollStopAudio = NULL;
    this->LandAudio = NULL;
    this->RollingHapticsStart = NULL;
    this->RollingHapticsStop = NULL;
    this->LandHaptics = NULL;
    this->AkSizeSwitchGroup = TEXT("rolling_yeti_size");
    this->AkLargeSwitchState = TEXT("large");
    this->AkGroundedSwitchState = TEXT("grounded");
    this->AkFallingSwitchState = TEXT("falling");
    this->AkRotationSpeedRTPCId = TEXT("rollingyeti_rotationspeed");
    this->AkGroundedSwitchGroup = TEXT("rolling_yeti_grounded");
    this->LandingVFX = NULL;
    this->RollingDustKickupFloatParam = TEXT("SpawnRateRolling");
    this->bIsActive = false;
    this->bHasHaptics = false;
    this->LandingRumble = NULL;
    this->StartShake = NULL;
    this->LoopShake = NULL;
    this->LandShake = NULL;
    this->RollingCameraShake = NULL;
    this->StartedCameraShakeOuterRadius = 350.00f;
    this->LoopedCameraShakeOuterRadius = 300.00f;
    this->LandCameraShakeOuterRadius = 250.00f;
    this->StartedCameraShakeFallOff = 1.00f;
    this->LoopedCameraShakeFallOff = 2.00f;
    this->CameraShakeLoopTime = 0.10f;
    this->RollingCameraShakeInnerRadius = 0.00f;
    this->RollingCameraShakeOuterRadius = 350.00f;
    this->RollingCameraShakeFallOff = 2.00f;
    this->ImpactEffectImpulseThreshold = 50000.00f;
    this->HitReactionMontage = NULL;
    this->HitImpulseStrength = 11.00f;
    this->HitImpulseUpFactor = 4.00f;
    this->RotationFactor = 0.83f;
    this->HitPointsModification_Collider->SetupAttachment(RootComponent);
    this->SkeletalMesh->SetupAttachment(RootComponent);
    this->HitPointsComponent->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->Ak_LargeRollingYeti->SetupAttachment(SkeletalMesh);
    this->Ak_Haptics->SetupAttachment(SkeletalMesh);
    this->RollingDustKickup_ParticleSystem->SetupAttachment(RootComponent);
    this->RollingFeedback->SetupAttachment(RootComponent);
    this->CrushDamage_Collider->SetupAttachment(RootComponent);
    this->HitPointModification_Interact->SetupAttachment(RootComponent);
    this->CrushDamage_Interact->SetupAttachment(RootComponent);
}

void ALargeRollingYeti::TriggerRollingCameraShake() {
}

void ALargeRollingYeti::SetRotationSpeed(float RotSpeed) {
}

void ALargeRollingYeti::PlayLandingEffect_Implementation() {
}

void ALargeRollingYeti::OnRep_IsActive() {
}

void ALargeRollingYeti::OnNetworkEvent(FName EventName) {
}

void ALargeRollingYeti::OnHitPointsModifierPreModificationAttempt(const FHitPointModifyAttempt& Attempt) {
}

void ALargeRollingYeti::OnHitPointsModifierPostModificationAttempt(const FHitPointModifyResult& Result) {
}

void ALargeRollingYeti::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ALargeRollingYeti::LoopCameraShake() {
}

void ALargeRollingYeti::LandingEffectReset() {
}

float ALargeRollingYeti::CalculateYetiCircumference() const {
    return 0.0f;
}

void ALargeRollingYeti::ApplyGroundedState(bool bGrounded) {
}

void ALargeRollingYeti::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALargeRollingYeti, bAutoReset);
    DOREPLIFETIME(ALargeRollingYeti, bForceAlwaysGrounded);
    DOREPLIFETIME(ALargeRollingYeti, StartTransform);
    DOREPLIFETIME(ALargeRollingYeti, bIsActive);
}


