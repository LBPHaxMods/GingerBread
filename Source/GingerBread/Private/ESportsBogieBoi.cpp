#include "ESportsBogieBoi.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CSPHelperComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "OverlapManagerComponent.h"
#include "SackboySlapTargetComponent.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

AESportsBogieBoi::AESportsBogieBoi(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->JarMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("JarMeshComponent"));
    this->BodyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BodyRootComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->LidCollisionComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LidCollisionComponent"));
    this->LidOverlapComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LidOverlapComponent"));
    this->LidGameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("LidGameplayTagComponent"));
    this->BodyCollisionComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("BodyCollisionComponent"));
    this->BodyGameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("BodyGameplayTagComponent"));
    this->SlapTargetComponent = CreateDefaultSubobject<USackboySlapTargetComponent>(TEXT("SlapTargetComponent"));
    this->ThrowTargetComponent = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTargetComponent"));
    this->SpikeyRollerSpawnPointComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SpikeyRollerSpawnPointComponent"));
    this->ShootingHurtBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ShootingHurtBoxComponent"));
    this->ShootingParticleSystemComponent = NULL;
    this->BashedDownParticleSystemComponent = NULL;
    this->LaunchParticleSystemComponent = NULL;
    this->PoppedOutParticleSystemComponent = NULL;
    this->Ak_BogieBoi = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_BogieBoi"));
    this->Ak_BogieBoiSpit = NULL;
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPointsComponent"));
    this->OverlapComponentOuter = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapComponentOuter"));
    this->OverlapComponentInner = CreateDefaultSubobject<UCapsuleComponent>(TEXT("OverlapComponentInner"));
    this->OverlapComponentLeaving = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapComponentLeaving"));
    this->PowerupDetectionComponent = NULL;
    this->HitPointsModifierComponent = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifierComponent"));
    this->OverlapManagerInner = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManagerInner"));
    this->OverlapManagerOuter = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManagerOuter"));
    this->OverlapManagerLeaving = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManagerLeaving"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->ShootingHurtBoxInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("ShootingHurtInteract"));
    this->LidInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("LidInteract"));
    this->BodyInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("BodyInteract"));
    this->OuterInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("OuterInteract"));
    this->InnerInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("InnerInteract"));
    this->LeavingInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("LeavingInteract"));
    this->PowerupInteract = NULL;
    this->StartsActive = true;
    this->ManualMode = false;
    this->ConstantFireMode = false;
    this->ShootWhileSackboyIsBelow = false;
    this->StartDelay = 0.00f;
    this->ShootingCooldown = 1.60f;
    this->ProjectileLaunchSpeed = 30.00f;
    this->FireArcLimit = 180.00f;
    this->RollerLifeSpan = 10.00f;
    this->LaunchStrength = 4.75f;
    this->LaunchDelay = 0.40f;
    this->LaunchRandomness = 0.10f;
    this->LaunchedObjectStrength = 19.00f;
    this->DizzyTime = 3.50f;
    this->ScrewCooldown = 0.75f;
    this->RotationSpeed = 2.50f;
    this->ProjectileSpeed = 27.50f;
    this->SpikeyRollerClass = NULL;
    this->BashedDownAudioEvent = NULL;
    this->LaunchingAudioEvent = NULL;
    this->HideAudioEvent = NULL;
    this->UnhideAudioEvent = NULL;
    this->DizzyAudioEvent = NULL;
    this->DizzyStopAudioEvent = NULL;
    this->TellStartAudioEvent = NULL;
    this->TellStopAudioEvent = NULL;
    this->LidCloseTurnAudioEvent = NULL;
    this->LidOpenTurnAudioEvent = NULL;
    this->LidCloseImpactAudioEvent = NULL;
    this->LidOpenImpactAudioEvent = NULL;
    this->ShootAudioEvent = NULL;
    this->SpitAudioEvent = NULL;
    this->TellStartHapticsEvent = NULL;
    this->TellStopHapticsEvent = NULL;
    this->SpinOutHapticsEvent = NULL;
    this->LaunchingHapticsEvent = NULL;
    this->IdleToPeepingMontage = NULL;
    this->HiddenToPeepingMontage = NULL;
    this->PeepingToHideMontage = NULL;
    this->PoppedOutToHideMontage = NULL;
    this->HideToPoppedOutMontage = NULL;
    this->PeepingToPoppedOutMontage = NULL;
    this->LaunchMontage = NULL;
    this->ScrewTightenMontage = NULL;
    this->ScrewLoosenMontage = NULL;
    this->HitReactionMontage = NULL;
    this->BashedDownReactionMontage = NULL;
    this->LaunchTellMontage = NULL;
    this->ShootMontage = NULL;
    this->ShootingParticleSystem = NULL;
    this->BashedDownParticleSystem = NULL;
    this->LaunchParticleSystem = NULL;
    this->PoppedOutParticleSystem = NULL;
    this->State = EESportsBogieBoiState::Peeping;
    this->IsActive = true;
    this->ScrewedDown = false;
    this->HapticsTellComp = NULL;
    this->SlapTargetComponent->SetupAttachment(BodyCollisionComponent);
    this->ThrowTargetComponent->SetupAttachment(BodyCollisionComponent);
    this->SpikeyRollerSpawnPointComponent->SetupAttachment(SkeletalMeshComponent);
    this->ShootingHurtBoxComponent->SetupAttachment(SpikeyRollerSpawnPointComponent);
    this->Ak_BogieBoi->SetupAttachment(SkeletalMeshComponent);
    this->HitPointsComponent->SetupAttachment(RootComponent);
    this->OverlapComponentOuter->SetupAttachment(RootComponent);
    this->OverlapComponentInner->SetupAttachment(RootComponent);
    this->OverlapComponentLeaving->SetupAttachment(RootComponent);
    this->ShootingHurtBoxInteract->SetupAttachment(SpikeyRollerSpawnPointComponent);
    this->LidInteract->SetupAttachment(SkeletalMeshComponent);
    this->BodyInteract->SetupAttachment(SkeletalMeshComponent);
    this->OuterInteract->SetupAttachment(SkeletalMeshComponent);
    this->InnerInteract->SetupAttachment(SkeletalMeshComponent);
    this->LeavingInteract->SetupAttachment(SkeletalMeshComponent);
    this->JarMeshComponent->SetupAttachment(RootComponent);
    this->BodyRootComponent->SetupAttachment(RootComponent);
    this->SkeletalMeshComponent->SetupAttachment(BodyRootComponent);
    this->LidCollisionComponent->SetupAttachment(SkeletalMeshComponent);
    this->LidOverlapComponent->SetupAttachment(LidCollisionComponent);
    this->LidGameplayTagComponent->SetupAttachment(LidCollisionComponent);
    this->BodyCollisionComponent->SetupAttachment(SkeletalMeshComponent);
    this->BodyGameplayTagComponent->SetupAttachment(BodyRootComponent);
}

void AESportsBogieBoi::StartLaunchTellMontageCSPAction() {
}

void AESportsBogieBoi::PlayBashedDownReactionMontage_Implementation(float StartPosition) {
}

void AESportsBogieBoi::OnScrewCooldownTimerComplete() {
}

void AESportsBogieBoi::OnRep_State(EESportsBogieBoiState OldState) {
}

void AESportsBogieBoi::OnPlayMontageAnimNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}

void AESportsBogieBoi::OnOuterBeginOverlapAnySackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AESportsBogieBoi::OnOuterBeginInteractAnySackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void AESportsBogieBoi::OnMontageEnded(UAnimMontage* pMontage, bool interrupted) {
}

void AESportsBogieBoi::OnLookAroundTimerComplete() {
}

void AESportsBogieBoi::OnLeavingEndOverlapAnySackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void AESportsBogieBoi::OnLeavingEndInteractAnySackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void AESportsBogieBoi::OnInnerEndOverlapAnySackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void AESportsBogieBoi::OnInnerEndInteractAnySackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void AESportsBogieBoi::OnInnerBeginOverlapAnySackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AESportsBogieBoi::OnInnerBeginInteractAnySackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void AESportsBogieBoi::OnDizzyCountDownTimerComplete() {
}

void AESportsBogieBoi::OnCSPActionEvent(uint32 Action) {
}

void AESportsBogieBoi::EnableCollisionOnLastSpawnedSpikeyRoller() {
}

void AESportsBogieBoi::EDITOR_CopyProperties(bool InStartsActive, bool InManualMode, bool InConstantFireMode, bool InShootWhileSackboyIsBelow, float InStartDelay, float InShootingCooldown, float InProjectileLaunchSpeed, float InFireArcLimit, float InRollerLifeSpan, float InLaunchStrength) {
}

void AESportsBogieBoi::DisableCollisionOnShootingHurtBox() {
}

void AESportsBogieBoi::AUTH_StartDoingStuff() {
}

void AESportsBogieBoi::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AESportsBogieBoi, State);
    DOREPLIFETIME(AESportsBogieBoi, IsActive);
    DOREPLIFETIME(AESportsBogieBoi, ScrewedDown);
}


