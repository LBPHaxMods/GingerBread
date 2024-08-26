#include "Platapush.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ForceFeedbackComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "LookAtComponent.h"
#include "NetworkEventComponent.h"
#include "OverlapManagerComponent.h"
#include "TriggerActorComponent.h"

APlatapush::APlatapush(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->MyRootComponent = (USceneComponent*)RootComponent;
    this->HitPoint = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
    this->RollDaze = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("RollDaze"));
    this->PlatapushCol = CreateDefaultSubobject<UBoxComponent>(TEXT("PlatapushCollision"));
    this->VibrationCol = CreateDefaultSubobject<UBoxComponent>(TEXT("VibrationCol"));
    this->StruggleVibration = CreateDefaultSubobject<UForceFeedbackComponent>(TEXT("StruggleVibration"));
    this->FaceSK = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Face_SK"));
    this->Collision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Collision"));
    this->GameplayTagMain = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagMain"));
    this->EyeTrackingSphere = CreateDefaultSubobject<USphereComponent>(TEXT("EyeTrackingSphere"));
    this->FaceCenter = CreateDefaultSubobject<USceneComponent>(TEXT("FaceCenter"));
    this->LaunchCol = CreateDefaultSubobject<UBoxComponent>(TEXT("LaunchCollision"));
    this->GameplayTagTrigger = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagTrigger"));
    this->AkPlatapush = CreateDefaultSubobject<UAkComponent>(TEXT("AkPlatapush"));
    this->AkHapticsPlatapush = CreateDefaultSubobject<UAkComponent>(TEXT("AkHapticsPlatapush"));
    this->WallDamageRoot = CreateDefaultSubobject<USceneComponent>(TEXT("WallDamageRoot"));
    this->WallDamageBox = CreateDefaultSubobject<UBoxComponent>(TEXT("WallDamageBox"));
    this->GameplayTagOverall = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagOverall"));
    this->InteractTrigger = CreateDefaultSubobject<UInteractionComponent>(TEXT("Interaction_Trigger"));
    this->InteractLaunch = CreateDefaultSubobject<UInteractionComponent>(TEXT("Interaction_Launch"));
    this->InteractVibration = CreateDefaultSubobject<UInteractionComponent>(TEXT("Interaction_Vibration"));
    this->InteractEyeTracking = CreateDefaultSubobject<UInteractionComponent>(TEXT("Interaction_EyeTrigger"));
    this->InteractWallDamage = CreateDefaultSubobject<UInteractionComponent>(TEXT("Interaction_WallDamage"));
    this->OMTrigger = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManager_Trigger"));
    this->OMLaunch = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManager_Launch"));
    this->OMMain = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OMOverlapManagerMainCollision"));
    this->OMEyeTracking = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OMOverlapManagerEyeTrigger"));
    this->LookAt = CreateDefaultSubobject<ULookAtComponent>(TEXT("LookAt"));
    this->HPModFlagline = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifierFlagline"));
    this->HPModWall = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifierWall"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->ExtendTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ExtendingTimeline"));
    this->RetractTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("RetractTimeline"));
    this->BlendEyeTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("EyeTrackTimeline"));
    this->NetworkEventComp = CreateDefaultSubobject<UNetworkEventComponent>(TEXT("NetworkEventComp"));
    this->TriggerBoxoffset = 15.00f;
    this->VibrationColSize = 1.10f;
    this->ExtentionAmount = 40.00f;
    this->ManualMode = false;
    this->OutDuration = 2.00f;
    this->ReactToPhysicalScoreBubles = false;
    this->CanInheritMomentum = true;
    this->flagline = false;
    this->AllowGloopWalk = false;
    this->Active = true;
    this->HorizontalTellExtendPlayrate = 2.00f;
    this->VerticalTellExtendPlayrate = 3.00f;
    this->ExtendPlayRateVertical = 1.30f;
    this->RetractPlayRateVertical = 0.75f;
    this->VerticalLaunchPower = 150.00f;
    this->HorizontalLaunchPower = 0.02f;
    this->DizzyCooldown = 2.20f;
    this->OutTellDelay = 1.20f;
    this->InTellDelay = 0.70f;
    this->StretchModifier = 10.00f;
    this->ExtensionSpeed = 30.00f;
    this->ScalingRumpleMultiplier = 0.50f;
    this->StartRetractMovementDelay = 0.80f;
    this->WallBounceForceMod = 4.00f;
    this->PrintString = false;
    this->CurveAsset_ExtendHorizontal = NULL;
    this->CurveAsset_ExtendHorizontalShort = NULL;
    this->CurveAsset_ExtendHorizontalLong = NULL;
    this->CurveAsset_ExtendVertical = NULL;
    this->CurveAsset_RetractHorizontal = NULL;
    this->CurveAsset_RetractHorizontalShort = NULL;
    this->CurveAsset_RetractHorizontalLong = NULL;
    this->CurveAsset_RetractVertical = NULL;
    this->CurveAsset_EyeTrackingCurve = NULL;
    this->EyeTrackRate = 4.00f;
    this->ExtendImpactMontage = NULL;
    this->Retractbounce = NULL;
    this->AKE_ExtendTell = NULL;
    this->AKE_Dizzy = NULL;
    this->AKE_Krikey = NULL;
    this->AKE_Impact = NULL;
    this->AKE_ImpactExtendVertical = NULL;
    this->AKE_ImpactExtendHorizontal = NULL;
    this->AKE_RattleLoopStart = NULL;
    this->AKE_RattleLoopStop = NULL;
    this->AKE_SlideStart = NULL;
    this->AKE_SlideStop = NULL;
    this->AKE_IdleOutStop = NULL;
    this->AKE_Vox_Hit = NULL;
    this->AKE_Vox_Spotted = NULL;
    this->AKE_Vox_Push = NULL;
    this->AKE_Vox_Preretract = NULL;
    this->AKE_Vox_Impact = NULL;
    this->HKE_ExtendTell = NULL;
    this->HKE_Dizzy = NULL;
    this->HKE_Krikey = NULL;
    this->HKE_Impact = NULL;
    this->HKE_ImpactExtendVertical = NULL;
    this->HKE_ImpactExtendHorizontal = NULL;
    this->HKE_RattleLoopStart = NULL;
    this->HKE_RattleLoopStop = NULL;
    this->HKE_SlideStart = NULL;
    this->HKE_SlideStop = NULL;
    this->HKE_IdleOutStop = NULL;
    this->HKE_VerticalBounceVibration = NULL;
    this->HKE_LaunchSackboy = NULL;
    this->HKE_WallBounce = NULL;
    this->FF_VerticalBounceVibration = NULL;
    this->FF_LaunchSackboy = NULL;
    this->FF_WallBounce = NULL;
    this->VerticalMovement = false;
    this->ExtendCurve = NULL;
    this->RetractCurve = NULL;
    this->EyeTrackCurve = NULL;
    this->CurrentState = EPlatapushState_C::IN_IDLE;
    this->HitPoint->SetupAttachment(RootComponent);
    this->TriggerBox->SetupAttachment(RootComponent);
    this->RollDaze->SetupAttachment(TriggerBox);
    this->PlatapushCol->SetupAttachment(RootComponent);
    this->VibrationCol->SetupAttachment(PlatapushCol);
    this->StruggleVibration->SetupAttachment(PlatapushCol);
    this->FaceSK->SetupAttachment(PlatapushCol);
    this->Collision->SetupAttachment(FaceSK);
    this->GameplayTagMain->SetupAttachment(Collision);
    this->EyeTrackingSphere->SetupAttachment(Collision);
    this->FaceCenter->SetupAttachment(FaceSK);
    this->LaunchCol->SetupAttachment(FaceSK);
    this->GameplayTagTrigger->SetupAttachment(TriggerBox);
    this->AkPlatapush->SetupAttachment(RootComponent);
    this->AkHapticsPlatapush->SetupAttachment(FaceSK);
    this->WallDamageRoot->SetupAttachment(RootComponent);
    this->WallDamageBox->SetupAttachment(WallDamageRoot);
    this->GameplayTagOverall->SetupAttachment(RootComponent);
    this->InteractTrigger->SetupAttachment(RootComponent);
    this->InteractLaunch->SetupAttachment(FaceSK);
    this->InteractVibration->SetupAttachment(PlatapushCol);
    this->InteractEyeTracking->SetupAttachment(Collision);
    this->InteractWallDamage->SetupAttachment(WallDamageRoot);
}

void APlatapush::RectractVerticalVibration() {
}

void APlatapush::RectractVerticalBounce() {
}

void APlatapush::RectractTimelineUpdate(const float RetractAlpha) {
}

void APlatapush::RectractTimelineFinish() {
}

void APlatapush::RectractHorizontalBounceEventsNonStandard() {
}

void APlatapush::RectractHorizontalBounceEvents() {
}

void APlatapush::OnWallHitPointsModifierPreModificationAttempt(const FHitPointModifyAttempt& Attempt) {
}

void APlatapush::OnNetworkEvent(FName EventName) {
}

void APlatapush::OnFaceHitPointsModifierPreModificationAttempt(const FHitPointModifyAttempt& Attempt) {
}

void APlatapush::OnEndOverlapSackboyMain(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void APlatapush::OnEndOverlapSackboyLaunch(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void APlatapush::OnEndOverlapSackboyEyeTracking(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void APlatapush::OnEndInteractSackboyMain(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void APlatapush::OnEndInteractSackboyEyeTracking(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void APlatapush::OnEndInteractAnyLaunch(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void APlatapush::OnCollisionHit(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, FVector NormalImpulse, const FHitResult& Hit) {
}

void APlatapush::OnBeginOverlapTrigger(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APlatapush::OnBeginOverlapSackboyMain(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APlatapush::OnBeginOverlapSackboyLaunch(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APlatapush::OnBeginOverlapSackboyEyeTracking(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APlatapush::OnBeginOverlapLaunch(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APlatapush::OnBeginInteractSackboyMain(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void APlatapush::OnBeginInteractSackboyEyeTracking(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void APlatapush::OnBeginInteractAnyTrigger(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void APlatapush::OnBeginInteractAnyLaunch(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void APlatapush::EyeTrackTimelineUpdate(const float EyeTrackAlpha) {
}

void APlatapush::ExtendTimelineUpdate(const float ExtendAlpha) {
}

void APlatapush::ExtendTimelineOnImpact() {
}

void APlatapush::ExtendTimelineFinish() {
}

void APlatapush::EDITOR_SetupFromBlutility(FPlatapushSetupData SetupData) {
}


