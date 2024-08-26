#include "Sackboy.h"
#include "Components/CapsuleComponent.h"
#include "Engine/EngineTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "SMFuzzComponent.h"
#include "CostumeComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "SackboyJumpStompTargetComponent.h"
#include "SignalComponent.h"
#include "SurfaceDeformationComponent.h"
#include "TelemetrySackboyBlueprintComponent.h"

ASackboy::ASackboy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
    this->ShowCurrentActivity = false;
    this->LogActivityTransitions = false;
    this->MeasureJumps = false;
    this->MeasureSteps = false;
    this->MeasureStomps = false;
    this->DrawBasis = false;
    this->DrawHistory = false;
    this->DrawCraftCutterTargeting = false;
    this->DrawInputHistory = false;
    this->DrawActivityHistory = false;
    this->DrawPowerUpDebug = false;
    this->ShowInheritedMomentum = false;
    this->ShowPOIDebug = false;
    this->DebugAverageSpeed = false;
    this->DebugCloseup = false;
    this->DebugTriggerEffectGraphs = false;
    this->DebugShowStickInput = false;
    this->DebugEnterJetpackMode = false;
    this->RightStickCameraOverrideEnabled = false;
    this->DebugShowFootstepHapticsDetails = false;
    this->DebugShowAttackHapticsDetails = false;
    this->DebugShowCarryHapticsDetails = false;
    this->ValidateLocalPos = true;
    this->LazyValidateLocalPos = false;
    this->ValidationMaxDelta = 0.00f;
    this->ShowServerCap = false;
    this->NetDelta = 0.00f;
    this->DebugFont = NULL;
    this->flaglineStepUpOffset = 3.00f;
    this->VehicleExitCooldown = 2.00f;
    this->VelocityRTPCName = TEXT("sackboy_velocity");
    this->bExecuteBPTick = false;
    this->AudioGroundSpeed = 40.00f;
    this->AudioWaterEntrySpeed = 120.00f;
    this->AudioAirSpeed = 120.00f;
    this->VFX_LargeLandingThreshold = 128.00f;
    this->VFX_ShowLandingThreshold = 30.00f;
    this->DebugEmotions = false;
    this->Net_Replicated_SpawnSlot = -1;
    this->Net_Replicated_TriggeredSuperSlap = false;
    this->Net_Replicated_GettingReadyToSlap = 0;
    this->Net_Replicated_EmoteFromActingEnabled = false;
    this->Net_Replicated_IsUnderPerforming = false;
    this->LocalControllerIndex = 0;
    this->Rep_CurrentControlMode = EControlMode::None;
    this->Rep_GloopState = false;
    this->Rep_IsGloopedOntoSurface = false;
    this->Rep_TrophyTier = 0;
    this->Rep_ConnectionQuality = 0;
    this->VisibilityFlags = 0;
    this->MaxDesyncDelta = 1.00f;
    this->SyncAirMovement = false;
    this->DisplayDesync = false;
    this->SnowMaterial = NULL;
    this->HealthCapsuleComponent = NULL;
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->SkeletalMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Sackboy_SkeletonMesh"));
    this->PowerUpHandsSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PowerUpHandsSkeletalMesh"));
    this->PowerUpFeetSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PowerUpFeetSkeletalMesh"));
    this->JumpStompTargetComponent = CreateDefaultSubobject<USackboyJumpStompTargetComponent>(TEXT("JumpStompTargetComponent"));
    this->TelemetryComponent = CreateDefaultSubobject<UTelemetrySackboyBlueprintComponent>(TEXT("TelemetryComponent"));
    this->HitPointsComponentObject = NULL;
    this->GamepadAkComponent = NULL;
    this->CostumeComponent = CreateDefaultSubobject<UCostumeComponent>(TEXT("CostumeComponent"));
    this->FuzzComponent = CreateDefaultSubobject<USMFuzzComponent>(TEXT("FuzzComponent"));
    this->SignalComponent = CreateDefaultSubobject<USignalComponent>(TEXT("SignalComponent"));
    this->SurfaceDeformationComponent = CreateDefaultSubobject<USurfaceDeformationComponent>(TEXT("SurfaceDeformationComponent"));
    this->InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("Sackboy_InteractionComponent"));
    this->HealthInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("Sackboy_HealthInteractionComponent"));
    this->Collision = NULL;
    this->Input = NULL;
    this->Locomotion = NULL;
    this->Physics = NULL;
    this->Visuals = NULL;
    this->Emotions = NULL;
    this->Client = NULL;
    this->Debug = NULL;
    this->InvulnerabilityTime = 0.00f;
    this->InvulnerableFromDamage = false;
    this->LedgePrimitive = NULL;
    this->HitStopsEnabled = false;
    this->bIsInWorldMap = false;
    this->bIsInTitleScreen = false;
    this->ExplorationTaxCollectabell = NULL;
    this->FlareToyTemplate = NULL;
    this->bIsInsideLevelBadge = false;
    this->DeathGhostInstance = NULL;
    this->Search = NULL;
    this->SpinAKHapticComponent = NULL;
    this->RollAKHapticComponent = NULL;
    this->SleepComponent = NULL;
    this->bWasAliveInPreviousLevel = false;
    this->SkeletalMeshComp->SetupAttachment(RootComponent);
    this->PowerUpHandsSkeletalMesh->SetupAttachment(SkeletalMeshComp);
    this->PowerUpFeetSkeletalMesh->SetupAttachment(SkeletalMeshComp);
    this->JumpStompTargetComponent->SetupAttachment(RootComponent);
    this->FuzzComponent->SetupAttachment(SkeletalMeshComp);
    this->InteractionComponent->SetupAttachment(RootComponent);
    this->HealthInteractionComponent->SetupAttachment(RootComponent);
}

bool ASackboy::WantsToBeRollStomping() const {
    return false;
}

bool ASackboy::WantsToAutoCollectHeart() const {
    return false;
}

bool ASackboy::UpdateFloatingStateData(const FFloatStateProperties& FloatStateProperties) {
    return false;
}

void ASackboy::UpdateEmotionalEvent(int32 EmotionID, float Priority, ESackboyEmotionalState State, int32 Level, float Time, bool WaitDuringIdle) {
}

void ASackboy::TryToFallThroughSupport() {
}

void ASackboy::TryToEquipPowerUp(EControlMode ControlMode, bool bSilent, bool bInstigator) {
}

bool ASackboy::TryToEnterVehicle(ASackboyVehicleBase* Vehicle) {
    return false;
}

bool ASackboy::TryToCollectItemComponent(USceneComponent* OtherComp, AActor* ProxyCollector) {
    return false;
}

bool ASackboy::TryToCollectItem(AActor* OtherActor, AActor* ProxyCollector) {
    return false;
}

void ASackboy::TriggerRespawnVehicle() {
}

int32 ASackboy::TriggerEmotionalEvent(ESackboyEmotionSystem System, float Priority, ESackboyEmotionalState State, int32 Level, float Time, bool WaitDuringIdle) {
    return 0;
}

void ASackboy::TransitionToLevelBadge(bool bTransitioning) {
}

void ASackboy::TeleportPlayer(FVector Position, FRotator Rotation, bool bSnapCamera) {
}

void ASackboy::StopVibration(UForceFeedbackEffect* vibration, const FName& Name) {
}

void ASackboy::StopUsingToy(bool dropIt) {
}

void ASackboy::StopDualPlatformHaptics(UAkAudioEvent* BondHapticsStopEvent, UForceFeedbackEffect* ForceFeedbackEffect, FName ForceFeedbackTag) {
}

void ASackboy::StopBeingGloopedOntoSurface() {
}

void ASackboy::StartForcedInput(FVector InputVector) {
}

void ASackboy::SetWorldPosition(const FVector& WorldLocation, bool teleportSackboy) {
}

void ASackboy::SetVisibility(bool enable_render) {
}

void ASackboy::SetupStartingEmotes() {
}

void ASackboy::SetTitleScreenFlag(bool InTitleScreen) {
}

void ASackboy::SetStickiness(float stickiness) {
}

void ASackboy::SetSlideLockTarget(FVector Target) {
}

void ASackboy::SetSlideFrictionScalar(float friction_scalar) {
}

void ASackboy::SetSackboyToSuperSlap() {
}

void ASackboy::SetSackboyToJetpack(bool useLockedDebugCamera) {
}

void ASackboy::SetSackboyToIdle() {
}

void ASackboy::SetSackboyToFalling(bool noBreakouts) {
}

void ASackboy::SetSackboyToCutscene(bool EnableCollision, bool enableRendering, bool hideToysAndProps) {
}

void ASackboy::SetSackboySpeedLimiter(float Limit) {
}

void ASackboy::SetSackboyJumpRestricted(bool restricted) {
}

void ASackboy::SetSackboyActionRestricted(bool restricted) {
}

void ASackboy::SetPoICompForHeadLookAt(UPoIComponent* newpoi) {
}

void ASackboy::SetPhysicsAndCollisionState(bool State) {
}

void ASackboy::SetHidden(bool bIsHidden) {
}

void ASackboy::SetGloopState(bool Enter) {
}

void ASackboy::SetFocusToWorldLocation() {
}

bool ASackboy::SetFloatingTargetRotation(const FRotator& Rotator) {
    return false;
}

bool ASackboy::SetFloatingTargetLocation(const FVector& Target) {
    return false;
}

void ASackboy::SetFloatingAnimationTumble(float playRateMin, float playRateMax, float startPositionMin, float startPositionMax) {
}

void ASackboy::SetFloatingAnimationRollOnSpot() {
}

void ASackboy::SetFloatingAnimationRoll() {
}

void ASackboy::SetEmote(int32 boundIndex, int32 EmoteIndex) {
}

void ASackboy::SetBouncingOffSackboy(bool Flag) {
}

void ASackboy::Server_ConfirmCannonArrived_Implementation() {
}

bool ASackboy::RequestYankOffSackboyToPosition(UObject* yankInstigator, const FVector& Destination, ESackboyActivity finalActivity, float destinationTolerance, bool isPartOfGlobalYank, bool shouldStopWhenTargetReached, bool UseYankedAnimation, bool delayYank) {
    return false;
}

bool ASackboy::RequestYankOffSackboyToActor(UObject* yankInstigator, AActor* destinationActor, const FVector& destinationOffset, ESackboyActivity finalActivity, float destinationTolerance, bool isPartOfGlobalYank, bool shouldStopWhenTargetReached, bool UseYankedAnimation, bool delayYank) {
    return false;
}

void ASackboy::ReportPickup_Implementation(const FString& Name, const FString& Map, const FVector& pos) {
}

void ASackboy::RemoveSackboySpeedLimiter() {
}

void ASackboy::ReleaseFromStruggle_Implementation(ESackboyStruggleReleaseType ReleaseType) {
}
bool ASackboy::ReleaseFromStruggle_Validate(ESackboyStruggleReleaseType ReleaseType) {
    return true;
}

void ASackboy::PutTrophyInSackboysHand() {
}

void ASackboy::PutObjectInSackboysHand(AActor* putInHand, bool isWeapon) {
}

void ASackboy::PreventGrapple() {
}

void ASackboy::PrepareToSpawnAtSpawnPoint(USpawnPointComponent* spawn_point) {
}

void ASackboy::PostEventToLocalGamepadWithSwitch(UAkAudioEvent* AkEvent, const FString& SwitchGroup, const FString& SwitchState) {
}

void ASackboy::PostEventToGamepad(UAkAudioEvent* AkEvent) {
}

void ASackboy::PlayVibration(UForceFeedbackEffect* vibration, const FName& Name, const float StartTime) {
}

void ASackboy::PlayThrowHaptics(UAkAudioEvent* hapticEvent) {
}

void ASackboy::PlaySpinHaptics(UAkAudioEvent* hapticEvent) {
}

void ASackboy::PlayRollHaptics(UAkAudioEvent* hapticEvent) {
}

void ASackboy::PlayDualPlatformHaptics(UAkAudioEvent* BondHapticsPlayEvent, UForceFeedbackEffect* ForceFeedbackEffect, FName ForceFeedbackTag, bool LoopingForceFeedback) {
}

void ASackboy::OnThrownObjectHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASackboy::OnThrown(ASackboy* ThrownBy) {
}


void ASackboy::OnRep_SpawnSlot() {
}

void ASackboy::OnRep_SetVisibilityFlags() {
}

void ASackboy::OnRep_NetReplicatedEnterBubbleInfo() {
}

void ASackboy::OnRep_IsUnderPerforming() {
}


void ASackboy::OnPlace(ASackboy* PickedUpBy) {
}

void ASackboy::OnPickup(ASackboy* PickedUpBy) {
}

void ASackboy::OnHit(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASackboy::OnExittedEndSequence() {
}

void ASackboy::OnEnteredEndSequence(bool OnlySackInArea) {
}

void ASackboy::OnEndOverlap(AActor* thisActor, AActor* OtherActor) {
}

void ASackboy::OnEndInteractionOverlap(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ASackboy::OnEndCapOverlap(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, int32 sourceBodyIndex) {
}

void ASackboy::OnDrop(ASackboy* PickedUpBy, ECarryDropReason DropReason) {
}


void ASackboy::OnCollectedPaint() {
}

void ASackboy::OnCollectedLegendaryCostume() {
}

void ASackboy::OnCollectedFullCostume() {
}

void ASackboy::OnCollectedEmote() {
}

void ASackboy::OnCollectedCostumePiece() {
}

void ASackboy::OnCarriedInterceptModificationAttempt(FHitPointModifyResult& Result) {
}

void ASackboy::OnCarriedHit(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASackboy::OnCarriedBeginOverlap(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, int32 sourceBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASackboy::OnCarriedBeginInteractionOverlap(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ASackboy::OnCameraManagerAvailableSnapToFocus(AActor* ManagerActor) {
}

void ASackboy::OnCameraManagerAvailable(AActor* ManagerActor) {
}

void ASackboy::OnBeginOverlap(AActor* thisActor, AActor* OtherActor) {
}

void ASackboy::OnBeginInteractionOverlap(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ASackboy::OnBeginCapOverlap(UPrimitiveComponent* targetPrim, AActor* SourceActor, UPrimitiveComponent* sourcePrim, int32 sourceBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void ASackboy::Net_UpdateActorHiddenInGame_Implementation(bool bNewHidden) {
}

void ASackboy::Net_Server_TriggerBurstWobbleBlob_Implementation(AWobbleBlob* WobbleBlob, const bool fromRoll) {
}

void ASackboy::Net_Server_TriggerBurstTetheredWobbleBlob_Implementation(ATetheredWobbleBlob* TetheredWobbleBlob) {
}

void ASackboy::Net_Server_TriggerBurstRhythmicWobbleBlob_Implementation(ARhythmicWobbleBlob* RhythmicWobbleBlob) {
}

void ASackboy::Net_Server_StartUsingToy_Implementation(USackboyToyComponent* Toy, ASackboy* sackboyToyStolenFrom, bool isBeingPickedUp) {
}

void ASackboy::Net_Server_SpawnBlasterProjectile_Implementation(const FVector_NetQuantize100& Position, const FVector_NetQuantize100& Direction, const UBlastersTargetComponent* Target) {
}

void ASackboy::Net_Server_SetIsUnderPerforming_Implementation(bool underPerforming) {
}

void ASackboy::Net_Server_SendInputFrameToServer_NoRightStick_Implementation(const FNetwork_UserInputFrame_NoRightStick& NewInput) {
}

void ASackboy::Net_Server_SendInputFrameToServer_Implementation(const FNetwork_UserInputFrame& NewInput) {
}

void ASackboy::Net_Server_SackboyPickupRequest_Implementation(UPrimitiveComponent* prim) {
}

void ASackboy::Net_Server_RollImpactDaze_Implementation(const FVector_NetQuantize100& sackboyWorldPosition, AActor* OtherActor, const FVector_NetQuantize100& dazeDirection) {
}

void ASackboy::Net_Server_ReleaseObject_Implementation(const FGrabReleaseInfo& releaseInfo) {
}

void ASackboy::Net_Server_ModifyExpression_Implementation(int32 boundIndex, ESackboyEmotionalState EmotionalState, int32 emotionLevel) {
}

void ASackboy::Net_Server_ModifyEmote_Implementation(int32 boundIndex, int32 EmoteIndex) {
}

void ASackboy::Net_Server_LevelResetManagerSubLevelUnloaded_Implementation() {
}

void ASackboy::Net_Server_LevelResetManagerSubLevelReloaded_Implementation() {
}

void ASackboy::Net_Server_HitPointsModificationAppliedOnClient_Implementation(const FHitPointModifyResult_Network& Packed, UHitPointsComponent* TargetHitPoints) {
}

void ASackboy::Net_Server_GrappleStopSwing_Implementation(const FVector_NetQuantize100& sackboyWorldPosition) {
}

void ASackboy::Net_Server_GrappleStartSwing_Implementation(const FVector_NetQuantize100& sackboyWorldPosition, UGrappleTargetComponent* GrappleTarget, const FVector_NetQuantize100& GrappleTargetPosition) {
}

void ASackboy::Net_Server_GrabObject_Implementation(const FGrabInfo& GrabInfo, bool skipInterpolate) {
}

void ASackboy::Net_Server_ExitRollRide_Implementation(const FVector_NetQuantize100& sackboyWorldPosition, const FRotator& sackboyWorldRotation, float horizontalHopMultiplier, float verticalHopBoost) {
}

void ASackboy::Net_Server_ExitBubble_Implementation(ASackboy* Sackboy, const FSackboyExitBubbleInfo& Info) {
}

void ASackboy::Net_Server_EnterRollRide_Implementation(ASackboy* roller) {
}

void ASackboy::Net_Server_EnterRollHole_Implementation(ASackboy* Sackboy, const FRollHoleInfo& Info) {
}

void ASackboy::Net_Server_EnterCrackContainer_Implementation(AGroundCrackContainer* crackContainer) {
}

void ASackboy::Net_Server_EnterBubble_Implementation(ASackboy* Sackboy, const FSackboyEnterBubbleInfo& Info) {
}

void ASackboy::Net_Server_CollectCollectable_Implementation(AActor* Collectable) {
}

void ASackboy::Net_Server_CarryPickupObject_Implementation(UPrimitiveComponent* prim) {
}

void ASackboy::Net_Server_CarryPerformThrow_Implementation(const FVector_NetQuantize100& sackboyWorldPosition, const FRotator& sackboyWorldRotation, UPrimitiveComponent* throwPrim) {
}

void ASackboy::Net_Server_BounceOnSomething_Implementation(const FVector_NetQuantize100& sackboyWorldPosition, AActor* OtherActor, UPrimitiveComponent* SupportPrim, const FVector& bounceSurfaceVel) {
}

void ASackboy::Net_Server_BounceOnBouncepad_Implementation(const FVector_NetQuantize100& sackboyWorldPosition, UObject* BouncePad, const FVector_NetQuantize100& targetVelocity) {
}

void ASackboy::Net_RemoveControlScheme_Implementation(const UControlScheme* ControlSchemeTemplate) {
}

void ASackboy::Net_PushControlScheme_Implementation(const UControlScheme* ControlSchemeTemplate) {
}

void ASackboy::Net_OnReplicate_GettingReadyToSlap() {
}

void ASackboy::Net_Client_SpawnBlasterProjectile_Implementation(const FVector_NetQuantize100& Position, const FVector_NetQuantize100& Direction, const UBlastersTargetComponent* Target) {
}

void ASackboy::Net_Client_ResetHealth_Implementation() {
}

void ASackboy::Net_Client_ModifyCollectabellQuantity_Implementation(int32 Count) {
}

void ASackboy::Net_Client_ExitRollRide_Implementation(const FVector_NetQuantize100& sackboyWorldPosition, const FRotator& sackboyWorldRotation, float horizontalHopMultiplier, float verticalHopBoost) {
}

void ASackboy::Net_Client_EnterRollRide_Implementation(ASackboy* roller) {
}

void ASackboy::Net_Client_CarryPerformThrow_Implementation(const FVector_NetQuantize100& sackboyWorldPosition, const FRotator& sackboyWorldRotation, UPrimitiveComponent* throwPrim) {
}

void ASackboy::Net_Client_CarryForceRelease_Implementation(bool apply_impulse) {
}

void ASackboy::Net_Client_BounceOnBouncepad_Implementation(const FVector_NetQuantize100& sackboyWorldPosition, UObject* BouncePad, const FVector_NetQuantize100& targetVelocity) {
}

void ASackboy::Net_Client_AddAdventureItemCount_Implementation(const FString& ItemName, int32 Count) {
}

void ASackboy::Multicast_AnnounceSackboyInfo_NoRightStick_Implementation(const FNetwork_SackboyAuthNetStatusFrame_NoRightStick& SackboyFrame) {
}
bool ASackboy::Multicast_AnnounceSackboyInfo_NoRightStick_Validate(const FNetwork_SackboyAuthNetStatusFrame_NoRightStick& SackboyFrame) {
    return true;
}

void ASackboy::Multicast_AnnounceSackboyInfo_Implementation(const FNetwork_SackboyAuthNetStatusFrame& SackboyFrame) {
}
bool ASackboy::Multicast_AnnounceSackboyInfo_Validate(const FNetwork_SackboyAuthNetStatusFrame& SackboyFrame) {
    return true;
}

void ASackboy::LaunchSackboy(const FVector& Impulse, bool applyAccel, bool asForce, ESackboyLaunchType LaunchType, bool ForceFalling) {
}

void ASackboy::KillSackboy(bool bInstantDeath, bool bSetActivity, TEnumAsByte<ESackboyDeathReason::Type> DeathReason) {
}

void ASackboy::JumpIntoObject(AActor* TargetActor) {
}

void ASackboy::JumpIntoLevelBadge() {
}

bool ASackboy::IsUsingToy() const {
    return false;
}

bool ASackboy::IsUnderperforming() {
    return false;
}

bool ASackboy::IsTransitioningToLevelBadge() const {
    return false;
}

bool ASackboy::IsThrowingItem() const {
    return false;
}

bool ASackboy::IsSpawning() const {
    return false;
}

bool ASackboy::IsSlapping() const {
    return false;
}

bool ASackboy::IsSackboyJumpRestricted() const {
    return false;
}

bool ASackboy::IsSackboyActionRestricted() const {
    return false;
}

bool ASackboy::IsSackboy(AActor* Actor) {
    return false;
}

bool ASackboy::IsRollRiding() const {
    return false;
}

bool ASackboy::IsRollLocked() const {
    return false;
}

bool ASackboy::IsRollLanding() const {
    return false;
}

bool ASackboy::IsRollingOnGround() const {
    return false;
}

bool ASackboy::IsRolling() const {
    return false;
}

bool ASackboy::IsRollDiving() const {
    return false;
}

bool ASackboy::IsPartOfSackboy(const USceneComponent* component) {
    return false;
}

bool ASackboy::IsOnWorldMap() const {
    return false;
}

bool ASackboy::IsOnTitleScreen() const {
    return false;
}

bool ASackboy::IsOnFlagline(AActor* checkThisFlagline) const {
    return false;
}

bool ASackboy::IsNetworkGameHost() const {
    return false;
}

bool ASackboy::IsLocalGameHost() const {
    return false;
}

bool ASackboy::IsInWind() const {
    return false;
}

bool ASackboy::IsInvulnerable(bool includeHitReactionState, bool onlyFromDamage) const {
    return false;
}

bool ASackboy::IsInVehicle() const {
    return false;
}

bool ASackboy::IsInTetherExclusionZone() {
    return false;
}

bool ASackboy::IsInSuperSlap() const {
    return false;
}

bool ASackboy::IsInSnowBall(float& SizePC) const {
    return false;
}

bool ASackboy::IsInSlapMove() const {
    return false;
}

bool ASackboy::IsInsideDoorway() const {
    return false;
}

bool ASackboy::IsInJetpackCameraMode() const {
    return false;
}

bool ASackboy::IsInJetpack() const {
    return false;
}

bool ASackboy::IsInHitReaction() const {
    return false;
}

bool ASackboy::IsInGlobalYank() const {
    return false;
}

bool ASackboy::IsInESportLevel() const {
    return false;
}

bool ASackboy::IsInEndSequence() const {
    return false;
}

bool ASackboy::IsInCutscene() const {
    return false;
}

bool ASackboy::IsInCloudPlatform() const {
    return false;
}

bool ASackboy::IsInBlackHole() const {
    return false;
}

bool ASackboy::IsImprovedReadability() const {
    return false;
}

bool ASackboy::IsHoldingWeapon() const {
    return false;
}

bool ASackboy::IsHoldingTrophy() const {
    return false;
}

bool ASackboy::IsHoldingBoomerang() const {
    return false;
}

bool ASackboy::IsHeadStomping() const {
    return false;
}

bool ASackboy::IsGrounded(bool includeInVehicle) const {
    return false;
}

bool ASackboy::IsGrappling() const {
    return false;
}

bool ASackboy::IsGrappleSwinging() const {
    return false;
}

bool ASackboy::IsGrabbing() const {
    return false;
}

bool ASackboy::IsGloopOnFeet() const {
    return false;
}

bool ASackboy::IsGloopedOntoSurface() const {
    return false;
}

bool ASackboy::IsFloating() const {
    return false;
}

bool ASackboy::IsFallingThroughSupport() const {
    return false;
}

bool ASackboy::IsDespawning() const {
    return false;
}

bool ASackboy::IsDeadOrDying() const {
    return false;
}

bool ASackboy::IsCurrentHitPointsAboveZero() const {
    return false;
}

bool ASackboy::IsConstrainedToFloor() const {
    return false;
}

bool ASackboy::IsConsideredAlive() const {
    return false;
}

bool ASackboy::IsCarryingHeavyObject() const {
    return false;
}

bool ASackboy::IsCarrying() const {
    return false;
}

bool ASackboy::IsBouncingOffSackboyEnabled() const {
    return false;
}

bool ASackboy::IsBeingYanked() const {
    return false;
}

bool ASackboy::IsBeingCarried() const {
    return false;
}

bool ASackboy::IsAlignedWithSurface() const {
    return false;
}

bool ASackboy::IsAiTargettable() const {
    return false;
}

bool ASackboy::HasCraftCutterCarryableTag(const USceneComponent* OtherComp) const {
    return false;
}

UObject* ASackboy::GetYankInstigator() const {
    return NULL;
}

void ASackboy::GetWorldPositionProjectedToGround(FVector& WorldPosition, bool& FoundGround, float& GroundDistance) const {
}

FVector ASackboy::GetWorldPosition() const {
    return FVector{};
}

FRotator ASackboy::GetWorldOrientation() const {
    return FRotator{};
}

ASackboyVehicleBase* ASackboy::GetVehicle() const {
    return NULL;
}

USumoPhysicalMaterial* ASackboy::GetSurfaceMaterial() const {
    return NULL;
}

float ASackboy::GetStickiness() const {
    return 0.0f;
}

float ASackboy::GetSpeedAlongSurface() const {
    return 0.0f;
}

float ASackboy::GetRollOMeter() const {
    return 0.0f;
}

bool ASackboy::GetPlayerSpawnState() const {
    return false;
}

int32 ASackboy::GetPlayerIndex(bool bWarnIfInvalid) const {
    return 0;
}

AGingerbreadPlayerController* ASackboy::GetPlayerController() const {
    return NULL;
}

FLinearColor ASackboy::GetPlayerColour() const {
    return FLinearColor{};
}

UCapsuleComponent* ASackboy::GetPhysicsCapsule() const {
    return NULL;
}

EControlMode ASackboy::GetPendingControlMode() const {
    return EControlMode::None;
}

UOverheadSackboyWidgetComponent* ASackboy::GetOverheadWidgetComponent() const {
    return NULL;
}

int32 ASackboy::GetLocalControllerIndex() const {
    return 0;
}

FVector ASackboy::GetLinearVelocity() const {
    return FVector{};
}

TEnumAsByte<ESackboyDeathReason::Type> ASackboy::GetLastDeathReason() const {
    return ESackboyDeathReason::KillFloor;
}

float ASackboy::GetLandingSpeed() const {
    return 0.0f;
}

UPlayerInventory* ASackboy::GetInventory() const {
    return NULL;
}


UGrappleHookMode* ASackboy::GetGrappleHookMode() const {
    return NULL;
}

ASackboy* ASackboy::GetGrabbedOrCarriedSackboy() const {
    return NULL;
}

UPrimitiveComponent* ASackboy::GetGrabbedOrCarriedPrimitive() const {
    return NULL;
}

AActor* ASackboy::GetCurrentToyActor() const {
    return NULL;
}

USpawnPointComponent* ASackboy::GetCurrentSpawnPointComponent() const {
    return NULL;
}

ESackboyActivity ASackboy::GetCurrentSecondaryActivity() const {
    return ESackboyActivity::Default;
}

ESackboyActivity ASackboy::GetCurrentPrimaryActivity() const {
    return ESackboyActivity::Default;
}

UPrimitiveComponent* ASackboy::GetCurrentItem() {
    return NULL;
}

int32 ASackboy::GetCurrentHitPoints() const {
    return 0;
}

ESackboyActivity ASackboy::GetCurrentActivity() const {
    return ESackboyActivity::Default;
}

ABoomerangProjectile* ASackboy::GetCraftCutter() const {
    return NULL;
}

AControlModeManager* ASackboy::GetControlModeManager() const {
    return NULL;
}

UControlComponent* ASackboy::GetControlComponent() const {
    return NULL;
}

UPrimitiveComponent* ASackboy::GetCarryPrimitive() {
    return NULL;
}

float ASackboy::GetCameraRelevance() const {
    return 0.0f;
}

UBoomerangMode* ASackboy::GetBoomerangMode() const {
    return NULL;
}

UBlastersMode* ASackboy::GetBlastersMode() const {
    return NULL;
}

ESackboyCoopMove ASackboy::GetActiveCoopMove() const {
    return ESackboyCoopMove::NotActive;
}

EControlMode ASackboy::GetActiveControlMode() const {
    return EControlMode::None;
}

void ASackboy::ForceRespawn(bool bSnapCamera) {
}

bool ASackboy::ForceReleaseGrab() {
    return false;
}

void ASackboy::ForcePickupObject(UPrimitiveComponent* Primitive, bool requiresGrabButton) {
}

void ASackboy::ExitVehicle() {
}

void ASackboy::ExitTetherExclusionZone(UObject* tether_exclusion_zone) {
}

bool ASackboy::ExitSnowballState(ESackboyActivity nextActivity, float InvulnerableDuration) {
    return false;
}

bool ASackboy::ExitFloatingState(ESackboyActivity nextActivity, float InvulnerableDuration, bool KeepVelocityBeforeFloating) {
    return false;
}

void ASackboy::ExitCloudPlatform(AActor* CloudPlatformActor) {
}

void ASackboy::EnterTetherExclusionZone(UObject* tether_exclusion_zone) {
}

bool ASackboy::EnterSnowballState() {
    return false;
}

bool ASackboy::EnterFloatingState(const FFloatStateProperties& FloatStateProperties) {
    return false;
}

void ASackboy::EnterCloudPlatform(AActor* CloudPlatformActor) {
}

void ASackboy::EndForcedInput() {
}

void ASackboy::DropToy() {
}

void ASackboy::DropThisItem(AActor* ItemActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void ASackboy::DropThisDestroyedItem(AActor* ItemActor) {
}

void ASackboy::DropObjectInSackboysHand(bool destroyObject, bool informWeapon) {
}

void ASackboy::DoLeafPrototype(float param0, float Param1) {
}

void ASackboy::Client_SlappedEachOther_Implementation() {
}

void ASackboy::Client_HighFiveSuccess_Implementation() {
}

void ASackboy::Client_CapitalistUpate_Implementation() {
}

void ASackboy::Client_AwardTrophyProgress_Implementation(const FName& InTrophyID) {
}

void ASackboy::ClearSlideTarget() {
}

bool ASackboy::ChangeSackboyVelocity(const FVector& changeVelocityVector, ESackboyLaunchVectorType vectorType, ESackboyLaunchType theLaunchType, ESackboyLaunchKillVelocity killSackboyVelocity, bool disableAirSteer, bool disableAirDrag, bool disableInAirActions) {
    return false;
}

bool ASackboy::CanRequestYank(bool shouldBePartOfGlobalYank) const {
    return false;
}

bool ASackboy::CanPlayPowerUpEquipSequence(const FSackboyAnimSequenceRequest& Request) const {
    return false;
}

bool ASackboy::CanLaunchSackboy(ESackboyLaunchType launch_type, const FVector& Origin, const FVector& Direction, bool NewDebug) {
    return false;
}

void ASackboy::CancelSackboyVelocityChange() {
}

void ASackboy::CancelLanding() {
}

void ASackboy::CancelGrapple() {
}

void ASackboy::CancelEmotionalEvent(int32 EmotionID) {
}

FVector ASackboy::CalcFloorPosition() const {
    return FVector{};
}

void ASackboy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASackboy, Net_Replicated_SpawnSlot);
    DOREPLIFETIME(ASackboy, Net_Replicated_TetherSpawnResults);
    DOREPLIFETIME(ASackboy, Net_Replicated_YankTargetInfo);
    DOREPLIFETIME(ASackboy, Net_Replicated_DeathSettings);
    DOREPLIFETIME(ASackboy, Net_Replicated_TriggeredSuperSlap);
    DOREPLIFETIME(ASackboy, Net_Replicated_GettingReadyToSlap);
    DOREPLIFETIME(ASackboy, Net_Replicated_RollHoleInfo);
    DOREPLIFETIME(ASackboy, Net_Replicated_CarriedPrimitive);
    DOREPLIFETIME(ASackboy, Net_Replicated_CrackContainer);
    DOREPLIFETIME(ASackboy, Net_Replicated_TransitionCannon);
    DOREPLIFETIME(ASackboy, Net_Replicated_RhythmicTransitionCannon);
    DOREPLIFETIME(ASackboy, Net_Replicated_JumpToEnterObject);
    DOREPLIFETIME(ASackboy, Net_Replicated_GrabInfo);
    DOREPLIFETIME(ASackboy, Net_Replicated_GrabReleaseInfo);
    DOREPLIFETIME(ASackboy, Net_Replicated_GrappleTargetInfo);
    DOREPLIFETIME(ASackboy, Net_Replicated_CarriedToy);
    DOREPLIFETIME(ASackboy, Net_Replicated_StowedToy);
    DOREPLIFETIME(ASackboy, Net_Replicated_EnterBubbleInfo);
    DOREPLIFETIME(ASackboy, Net_Replicated_ExitBubbleInfo);
    DOREPLIFETIME(ASackboy, Net_Replicated_SavedBoundEmotes);
    DOREPLIFETIME(ASackboy, Net_Replicated_EmoteFromActingEnabled);
    DOREPLIFETIME(ASackboy, Net_AnimSequenceRequest);
    DOREPLIFETIME(ASackboy, Net_Replicated_IsUnderPerforming);
    DOREPLIFETIME(ASackboy, Rep_CurrentControlMode);
    DOREPLIFETIME(ASackboy, Rep_GloopState);
    DOREPLIFETIME(ASackboy, Rep_IsGloopedOntoSurface);
    DOREPLIFETIME(ASackboy, Rep_ControlScheme);
    DOREPLIFETIME(ASackboy, Rep_CurrentVehicle);
    DOREPLIFETIME(ASackboy, Rep_TrophyTier);
    DOREPLIFETIME(ASackboy, Rep_ConnectionQuality);
    DOREPLIFETIME(ASackboy, VisibilityFlags);
    DOREPLIFETIME(ASackboy, InvulnerabilityTime);
    DOREPLIFETIME(ASackboy, InvulnerableFromDamage);
    DOREPLIFETIME(ASackboy, bIsInWorldMap);
    DOREPLIFETIME(ASackboy, bIsInTitleScreen);
}


