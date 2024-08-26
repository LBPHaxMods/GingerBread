#include "RollingYeti_Line.h"
#include "AkComponent.h"
#include "Components/CapsuleComponent.h"
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

ARollingYeti_Line::ARollingYeti_Line(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));

    this->SphereCollision = (USphereComponent*)RootComponent;
    this->HitPointsModification_Collider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HitPointsModifierCollision"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->Ak_RollingYeti = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_RollingYeti"));
    this->Ak_RollingYetiHaptics = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_RollingYetiHaptics"));
    this->RollingDustKickup_ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RollingDustKickup"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("StandardHitDamager"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("Trigger"));
    this->RollingMovementComponent = CreateDefaultSubobject<URollingMovementComponent>(TEXT("RollingMovement"));
    this->NetworkEventComponent = CreateDefaultSubobject<UNetworkEventComponent>(TEXT("NetworkEventComponent"));
    this->RollingFeedback = CreateDefaultSubobject<UForceFeedbackComponent>(TEXT("RollingFeedback"));
    this->HitPointModification_Interact = CreateDefaultSubobject<UInteractionComponent>(TEXT("HitPointsModifierInteract"));
    this->bFakeMovement = false;
    this->bAutoReset = true;
    this->bCancelMoverToolSearch = true;
    this->bForceAlwaysGrounded = true;
    this->NumYetis = 3;
    this->YetiSpacing = 1.00f;
    this->bIsSpawnedAwake = false;
    this->CapsuleRadMultiplier = 1.05f;
    this->RollStopAudio = NULL;
    this->LandAudio = NULL;
    this->RollingHapticsStart = NULL;
    this->RollingHapticsStop = NULL;
    this->LandHaptics = NULL;
    this->AkSizeSwitchGroup = TEXT("rolling_yeti_size");
    this->AkSmallSwitchState = TEXT("small");
    this->AkGroundedSwitchState = TEXT("grounded");
    this->AkFallingSwitchState = TEXT("falling");
    this->AkRotationSpeedRTPCId = TEXT("rollingyeti_rotationspeed");
    this->AkGroundedSwitchGroup = TEXT("rolling_yeti_grounded");
    this->LandingVFX = NULL;
    this->RollingDustKickupFloatParam = TEXT("SpawnRateRolling");
    this->bIsActive = false;
    this->bHasHaptics = false;
    this->LandingRumble = NULL;
    this->ImpactEffectImpulseThreshold = 50000.00f;
    this->HitReactionMontage = NULL;
    this->HitImpulseStrength = 11.00f;
    this->HitImpulseUpFactor = 4.00f;
    this->RotationFactor = 0.83f;
    this->HitPointsModification_Collider->SetupAttachment(RootComponent);
    this->SkeletalMesh->SetupAttachment(RootComponent);
    this->HitPointsComponent->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->Ak_RollingYeti->SetupAttachment(SkeletalMesh);
    this->Ak_RollingYetiHaptics->SetupAttachment(SkeletalMesh);
    this->RollingDustKickup_ParticleSystem->SetupAttachment(RootComponent);
    this->RollingFeedback->SetupAttachment(RootComponent);
    this->HitPointModification_Interact->SetupAttachment(RootComponent);
}

void ARollingYeti_Line::SetRotationSpeed(float RotSpeed) {
}

void ARollingYeti_Line::PlayLandingEffect_Implementation() {
}

void ARollingYeti_Line::OnRep_IsActive() {
}

void ARollingYeti_Line::OnNetworkEvent(FName EventName) {
}

void ARollingYeti_Line::OnHitPointsModifierPreModificationAttempt(const FHitPointModifyAttempt& Attempt) {
}

void ARollingYeti_Line::OnHitPointsModifierPostModificationAttempt(const FHitPointModifyResult& Result) {
}

void ARollingYeti_Line::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ARollingYeti_Line::LandingEffectReset() {
}

float ARollingYeti_Line::CalculateYetiCircumference() const {
    return 0.0f;
}

void ARollingYeti_Line::ApplyGroundedState(bool bGrounded) {
}

void ARollingYeti_Line::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARollingYeti_Line, bAutoReset);
    DOREPLIFETIME(ARollingYeti_Line, bForceAlwaysGrounded);
    DOREPLIFETIME(ARollingYeti_Line, bIsSpawnedAwake);
    DOREPLIFETIME(ARollingYeti_Line, StartTransform);
    DOREPLIFETIME(ARollingYeti_Line, bIsActive);
}


