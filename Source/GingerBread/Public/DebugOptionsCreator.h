#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VariableChangedUserData.h"
#include "DebugOptionsCreator.generated.h"

class UDataTable;
class UGingerbreadDebugManager;
class UWorld;

UCLASS(Blueprintable)
class UDebugOptionsCreator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerbreadDebugManager* DebugManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LevelNamesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsModifyingOrbCount;
    
public:
    UDebugOptionsCreator();

private:
    UFUNCTION(BlueprintCallable)
    void UpEmoteEmotionalStateChanged(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void UpEmoteChanged(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void UpdateProductsFromStore();
    
    UFUNCTION(BlueprintCallable)
    void UnlockKnightTrials();
    
    UFUNCTION(BlueprintCallable)
    void TrophyAwardProgress(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void TrophyAwarded(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void TriggerTournamentNotification(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void ToggleAllGloop();
    
    UFUNCTION(BlueprintCallable)
    void TestUnlockManager();
    
    UFUNCTION(BlueprintCallable)
    void TeamDeathLivesDeductedPerAdditionalPlayer(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void TeamDeathBaseLivesChanged(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SimpleSetFakeTournamentStatus(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void ShowPinScreen(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void ShowKnightTrialUI();
    
    UFUNCTION(BlueprintCallable)
    void ShowHookPointsDebugEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SharedLifeModeChanged(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetZoomedInCameraYaw(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetZoomedInCameraSpeed(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetZoomedInCameraSetYaw(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetZoomedInCameraSetSpeed(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetZoomedInCameraSetPitch(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetZoomedInCameraSetOffsetUp(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetZoomedInCameraSetOffsetRight(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetZoomedInCameraSetFOV(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetZoomedInCameraSetAcceleration(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetZoomedInCameraSackboyFocus(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetZoomedInCameraPitch(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetZoomedInCameraOffsetUp(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetZoomedInCameraOffsetRight(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetZoomedInCameraManualDistance(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetZoomedInCameraLookAtSpecificSackboy(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetZoomedInCameraFOV(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetZoomedInCameraAcceleration(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetVisualiseCollision(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetUseSearchLedgeGrab(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetUseProsperoTech(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetUseNaturalSpawn(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetTournametFinished(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetTournamentActive(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetSurfaceMaterialZoom(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetSurfaceMaterialDebugInfo(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowUnitsGraph(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowTrophyWarnings(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowSupportObjects(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowStickInput(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowSpeeds(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowSearch(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowSackboyState(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowRays(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowPS5Cutscenes(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowPowerUpDebug(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowInputHistory(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowInheritedMomentum(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowHUD(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowHitPointsColliders(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowHistory(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowHealthColliders(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowFPSCounter(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowFootstepHaptics(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowFakeTournamentNotification(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowDynamicKillEdgeInfo(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowDanceDebugData(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowCutsceneNames(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowCraftCutterTargeting(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowCollision(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowCarryHaptics(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowCameraLineGraphs(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowCameraInfo(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowCameraAreaInfo(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowBasis(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowAudioListenerInfo(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowAttackHaptics(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowActivityHistory(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetShowActivities(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetSackboyFocus(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetRollHoldingToggled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetRightStickCameraOverride(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetRideonDebugLogging(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetRhythmDebugDislayEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderSwitch(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderQuality(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetRedLowHealthForSinglePlayer(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetParryEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetOnTiltPlatformHapticsListeners(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetNoAIDamageState(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetNetworkShowPlayerInfo(bool Show, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetNetworkShowDebugInfo(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetNetworkSessionShowDebugInfo(bool Show, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetNetworkSessionFriendsOnly(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetNetworkSessionCrossPlatform(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetNetworkSessionChannel(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetNetworkDisableClientMovers(bool disable, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetMuteWhenUnfocusedEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionGraph(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetMeasureStomps(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetMeasureSteps(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetMeasureJumps(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetLegsIKShowDebug(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetLegsIKPauseOnFootDown(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetLegsIKLogFootEvents(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetLegsIKEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetJetpackOnDeath(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetInfiniteLives(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetImmortalState(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetHitpointsDebugOverlayEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetHitpointsDebugOverlapsEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetHitpointsDebugLoggingEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadWobbleDebug(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadWobble(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadPOI(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetGrabCarryToggled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetFreeSeen();
    
    UFUNCTION(BlueprintCallable)
    void SetFollowPlayerOne(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusedWindowInputOnly(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetFlutterJumpToggled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetFakeTournamentStatus(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetFakeReachedTier(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetFakeLeaderboardOfflineMode(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetFakeLeaderboardLoadTime(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetEsportsDebugOptionsEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetEsportsAcceptTerms(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableVibration(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSackboyLowHealthEffect(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSackboyInvulnerabilityEffect(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSackboyHitFlashEffect(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableInteractionQueryRender(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableInteractionOtherComponentRender(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableHitPointRPCOptimisations(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableHitPointNetworkUsageGraph(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableCraftCutterRecall(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableClientSideProcessing(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableCameraShake(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableOffscreenTimer(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugLedgeGrab(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugHitReactions(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugDrawPOISelection(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugCloseup(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugAverageSpeed(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetCollectedOrbCount(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetCapsuleCorrectionDebugEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraMaxZoom(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraAlwaysTrackSackboy(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetBoardID(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioEventDebugTextSize(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioEventDebugSphereSize(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioEventDebugSphere(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioEventDebugSackboyEventsEnable(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioEventDebugOffset(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioEventDebugDuration(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioEventDebugDistanceCullingSphere(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioEventDebugDistanceCullingDistance(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioEventDebugDistanceCulling(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioEventDebug(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioBusVoicesEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioBusSFXEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioBusSackboyEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioBusMusicEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioBusLevelObjectsEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioBusGameplayEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioBusEnemiesEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioBusEffectsEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioBusAmbienceEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAudio3DOn(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAlternativeLeftAlone(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowToggleEmoteFromActing(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowJetPackMode(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAllEmotesAvailable(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAllCostumesAvailable(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAllColourTintsAvailable(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAllActivitiesAvailable(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAIVisionInfoEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAIShowGenericInfoEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAIPatrolInfoEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAIKillAIEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAIGroundedInfoEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAIDetectionEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAIAlertInfoEnabled(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetAdaptiveTriggerGraph(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetActivityTaskInProgress(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SetActivityTaskCompleted(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void SelectFakeTournamentID(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void RightEmoteEmotionalStateChanged(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void RightEmoteChanged(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void ResetTrophySaveData(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void ResetLevel();
    
    UFUNCTION(BlueprintCallable)
    void RenderStatsChanged(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void RedeemCode();
    
    UFUNCTION(BlueprintCallable)
    void QuickResetLevel();
    
    UFUNCTION(BlueprintCallable)
    void ProfileGroupChanged(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void ProfileComponentChanged(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void PinGradeReset(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void PinGradeAwarded(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void OpenDLCScreen();
    
    UFUNCTION(BlueprintCallable)
    void OnVibrationScaleChanged(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void OnSubstepDebugNoneSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnSubstepDebugContinuosSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnSubstepDebugAverageSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnPhysicsSpeedChanged(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSessionUpdateSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSessionRemoveLocalPlayerSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSessionQuickJoinSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSessionKickClientsSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSessionInviteSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSessionFindSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSessionCreateSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSessionCloseSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSessionCancelFindSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSessionAddLocalPlayerSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSession9Selected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSession8Selected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSession7Selected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSession6Selected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSession5Selected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSession4Selected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSession3Selected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSession2Selected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSession1Selected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkSession10Selected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkConnQualityTargetSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkConnQualityPerfectSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkConnQualityNormalSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnNetworkConnQualityExtremeSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnMenuSectionSelected(const FName sectionName);
    
    UFUNCTION(BlueprintCallable)
    void OnLifePickupProbabilityChanged(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionDebugDrawTimeChanged(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionDebugChanged(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void MakeCostumeMesh(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void ListUnlockedItems();
    
    UFUNCTION(BlueprintCallable)
    void ListFree();
    
    UFUNCTION(BlueprintCallable)
    void ListCart();
    
    UFUNCTION(BlueprintCallable)
    void LeftEmoteEmotionalStateChanged(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void LeftEmoteChanged(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void KillAllSackboys();
    
    UFUNCTION(BlueprintCallable)
    void ForceRetrieveTrophyData(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void ForcePlayerCount(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void ExitGame();
    
    UFUNCTION(BlueprintCallable)
    void EmotePlayerChanged(float Value, float Min, float Max, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void DownEmoteEmotionalStateChanged(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void DownEmoteChanged(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void DLCProductOverrideChanged(float Param, const FVariableChangedUserData& UserData);
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateTheDefaultMenu(UDataTable* InLevelNamesDataTable);
    
private:
    UFUNCTION(BlueprintCallable)
    void CollectAllPrizeBubbles();
    
    UFUNCTION(BlueprintCallable)
    void ClearTournamentNotificationSaveData();
    
    UFUNCTION(BlueprintCallable)
    void ClearTournamentBestTimeSaveData();
    
    UFUNCTION(BlueprintCallable)
    void ClearPrinciplePlayerProgress();
    
    UFUNCTION(BlueprintCallable)
    void ClearCart();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllPlayersProgress();
    
    UFUNCTION(BlueprintCallable)
    void BuyCart();
    
    UFUNCTION(BlueprintCallable)
    void AwardCollectabells();
    
    UFUNCTION(BlueprintCallable)
    void AllPinGradesReset(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void AllPinGradesAwardedExeceptThis(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void AllPinGradesAwarded(float Param, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void AddNextAvailableProductToCart();
    
    UFUNCTION(BlueprintCallable)
    void ActivitiesShowCompleted(bool Enabled, const FVariableChangedUserData& UserData);
    
    UFUNCTION(BlueprintCallable)
    void ActivitiesShowBoard(bool Enabled, const FVariableChangedUserData& UserData);
    
};

