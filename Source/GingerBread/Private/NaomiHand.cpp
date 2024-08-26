#include "NaomiHand.h"
#include "AkComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CSPHelperComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "Net/UnrealNetwork.h"

ANaomiHand::ANaomiHand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HandSK"));
    this->HandSK = (USkeletalMeshComponent*)RootComponent;
    this->AttachRoot = CreateDefaultSubobject<USceneComponent>(TEXT("AttachRoot"));
    this->HandCapsuleCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HandCapsuleCollider"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->HandDangerCollider = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HandDangerCollider"));
    this->HandChargeDangerCollider = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HandChargeDangerCollider"));
    this->HandAK = CreateDefaultSubobject<UAkComponent>(TEXT("HandAK"));
    this->HandDangerModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HandDangerModifier"));
    this->HandChargeDangerModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HandChargeDangerModifier"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->IsLeftHand = false;
    this->PunchSlowSpawnShockwaveDelay = 0.58f;
    this->PunchSlowPreImpactDelay = 0.63f;
    this->PunchSlowPostImpactDelay = 0.80f;
    this->PunchFastSpawnShockwaveDelay = 0.32f;
    this->PunchFastPreImpactDelay = 0.37f;
    this->PunchFastPostImpactDelay = 0.45f;
    this->PunchStartSFX = NULL;
    this->PunchImpactSFX = NULL;
    this->PunchImpactHaptics = NULL;
    this->PunchImpactForceFeedback = NULL;
    this->PunchImpactVFX = NULL;
    this->ChargePunchNumberOfSkullWaves = 3;
    this->ChargePunchTimeBetweenSkullWaves = 1.00f;
    this->ChargePunchPreChargeTime = 0.87f;
    this->ChargePunchChargeToShockwaveSpawnDelay = 3.53f;
    this->ChargePunchShockwaveSpawnToImpactDelay = 0.10f;
    this->ChargePunchFinalShockwaveToAnimFinishedDelay = 1.40f;
    this->ChargePunchChargingSFX = NULL;
    this->ChargePunchChargingBurstSFX = NULL;
    this->ChargePunchPullBackSFX = NULL;
    this->ChargePunchChargingHaptics = NULL;
    this->ChargePunchChargingForceFeedback = NULL;
    this->ChargePunchImpactHaptics = NULL;
    this->ChargePunchImpactForceFeedback = NULL;
    this->ChargePunchImpactCameraShake = NULL;
    this->ChargePunchChargingVFX = NULL;
    this->ChargePunchChargingVFXTimeDilation = 0.36f;
    this->ChargePunchImpactVFX = NULL;
    this->EnterArenaAnimDuration = 1.00f;
    this->CorruptionHitAnimDuration = 2.50f;
    this->SkullShockwaveClass = NULL;
    this->ChargingVFX = NULL;
    this->ChargingForceFeedback = NULL;
    this->AttachRoot->SetupAttachment(RootComponent);
    this->HandCapsuleCollider->SetupAttachment(AttachRoot);
    this->GameplayTagComponent->SetupAttachment(HandCapsuleCollider);
    this->HandDangerCollider->SetupAttachment(AttachRoot);
    this->HandChargeDangerCollider->SetupAttachment(AttachRoot);
}

void ANaomiHand::StopChargeFX_Implementation() {
}

void ANaomiHand::ShockwaveDestroyed(AActor* DestroyedActor) {
}

void ANaomiHand::OnRep_HandServerAnimData() {
}

void ANaomiHand::OnChargeVFXBurst(FName EventName, float EmitterTime, int32 ParticleCount) {
}

void ANaomiHand::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ANaomiHand, ServerPunchData);
    DOREPLIFETIME(ANaomiHand, Rep_HandServerAnimData);
}


