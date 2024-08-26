#include "DebugOptionsCreator.h"

UDebugOptionsCreator::UDebugOptionsCreator() {
    this->DebugManager = NULL;
    this->LevelNamesDataTable = NULL;
    this->World = NULL;
    this->bIsModifyingOrbCount = false;
}

void UDebugOptionsCreator::UpEmoteEmotionalStateChanged(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::UpEmoteChanged(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::UpdateProductsFromStore() {
}

void UDebugOptionsCreator::UnlockKnightTrials() {
}

void UDebugOptionsCreator::TrophyAwardProgress(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::TrophyAwarded(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::TriggerTournamentNotification(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::ToggleAllGloop() {
}

void UDebugOptionsCreator::TestUnlockManager() {
}

void UDebugOptionsCreator::TeamDeathLivesDeductedPerAdditionalPlayer(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::TeamDeathBaseLivesChanged(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SimpleSetFakeTournamentStatus(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::ShowPinScreen(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::ShowKnightTrialUI() {
}

void UDebugOptionsCreator::ShowHookPointsDebugEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SharedLifeModeChanged(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetZoomedInCameraYaw(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetZoomedInCameraSpeed(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetZoomedInCameraSetYaw(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetZoomedInCameraSetSpeed(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetZoomedInCameraSetPitch(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetZoomedInCameraSetOffsetUp(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetZoomedInCameraSetOffsetRight(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetZoomedInCameraSetFOV(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetZoomedInCameraSetAcceleration(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetZoomedInCameraSackboyFocus(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetZoomedInCameraPitch(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetZoomedInCameraOffsetUp(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetZoomedInCameraOffsetRight(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetZoomedInCameraManualDistance(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetZoomedInCameraLookAtSpecificSackboy(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetZoomedInCameraFOV(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetZoomedInCameraAcceleration(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetVisualiseCollision(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetUseSearchLedgeGrab(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetUseProsperoTech(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetUseNaturalSpawn(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetTournametFinished(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetTournamentActive(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetSurfaceMaterialZoom(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetSurfaceMaterialDebugInfo(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowUnitsGraph(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowTrophyWarnings(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowSupportObjects(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowStickInput(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowSpeeds(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowSearch(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowSackboyState(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowRays(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowPS5Cutscenes(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowPowerUpDebug(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowInputHistory(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowInheritedMomentum(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowHUD(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowHitPointsColliders(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowHistory(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowHealthColliders(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowFPSCounter(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowFootstepHaptics(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowFakeTournamentNotification(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowDynamicKillEdgeInfo(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowDanceDebugData(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowCutsceneNames(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowCraftCutterTargeting(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowCollision(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowCarryHaptics(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowCameraLineGraphs(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowCameraInfo(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowCameraAreaInfo(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowBasis(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowAudioListenerInfo(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowAttackHaptics(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowActivityHistory(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetShowActivities(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetSackboyFocus(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetRollHoldingToggled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetRightStickCameraOverride(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetRideonDebugLogging(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetRhythmDebugDislayEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetRenderSwitch(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetRenderQuality(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetRedLowHealthForSinglePlayer(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetParryEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetOnTiltPlatformHapticsListeners(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetNoAIDamageState(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetNetworkShowPlayerInfo(bool Show, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetNetworkShowDebugInfo(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetNetworkSessionShowDebugInfo(bool Show, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetNetworkSessionFriendsOnly(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetNetworkSessionCrossPlatform(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetNetworkSessionChannel(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetNetworkDisableClientMovers(bool disable, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetMuteWhenUnfocusedEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetMotionGraph(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetMeasureStomps(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetMeasureSteps(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetMeasureJumps(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetLegsIKShowDebug(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetLegsIKPauseOnFootDown(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetLegsIKLogFootEvents(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetLegsIKEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetJetpackOnDeath(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetInfiniteLives(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetImmortalState(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetHitpointsDebugOverlayEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetHitpointsDebugOverlapsEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetHitpointsDebugLoggingEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetHeadWobbleDebug(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetHeadWobble(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetHeadPOI(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetGrabCarryToggled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetFreeSeen() {
}

void UDebugOptionsCreator::SetFollowPlayerOne(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetFocusedWindowInputOnly(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetFlutterJumpToggled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetFakeTournamentStatus(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetFakeReachedTier(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetFakeLeaderboardOfflineMode(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetFakeLeaderboardLoadTime(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetEsportsDebugOptionsEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetEsportsAcceptTerms(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetEnableVibration(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetEnableSackboyLowHealthEffect(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetEnableSackboyInvulnerabilityEffect(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetEnableSackboyHitFlashEffect(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetEnableInteractionQueryRender(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetEnableInteractionOtherComponentRender(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetEnableHitPointRPCOptimisations(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetEnableHitPointNetworkUsageGraph(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetEnableCraftCutterRecall(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetEnableClientSideProcessing(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetEnableCameraShake(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetDisableOffscreenTimer(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetDebugLedgeGrab(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetDebugHitReactions(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetDebugDrawPOISelection(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetDebugCloseup(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetDebugAverageSpeed(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetCollectedOrbCount(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetCapsuleCorrectionDebugEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetCameraMaxZoom(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetCameraAlwaysTrackSackboy(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetBoardID(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioEventDebugTextSize(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioEventDebugSphereSize(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioEventDebugSphere(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioEventDebugSackboyEventsEnable(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioEventDebugOffset(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioEventDebugDuration(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioEventDebugDistanceCullingSphere(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioEventDebugDistanceCullingDistance(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioEventDebugDistanceCulling(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioEventDebug(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioBusVoicesEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioBusSFXEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioBusSackboyEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioBusMusicEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioBusLevelObjectsEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioBusGameplayEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioBusEnemiesEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioBusEffectsEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudioBusAmbienceEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAudio3DOn(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAlternativeLeftAlone(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAllowToggleEmoteFromActing(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAllowJetPackMode(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAllEmotesAvailable(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAllCostumesAvailable(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAllColourTintsAvailable(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAllActivitiesAvailable(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAIVisionInfoEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAIShowGenericInfoEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAIPatrolInfoEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAIKillAIEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAIGroundedInfoEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAIDetectionEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAIAlertInfoEnabled(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetAdaptiveTriggerGraph(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetActivityTaskInProgress(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SetActivityTaskCompleted(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::SelectFakeTournamentID(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::RightEmoteEmotionalStateChanged(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::RightEmoteChanged(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::ResetTrophySaveData(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::ResetLevel() {
}

void UDebugOptionsCreator::RenderStatsChanged(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::RedeemCode() {
}

void UDebugOptionsCreator::QuickResetLevel() {
}

void UDebugOptionsCreator::ProfileGroupChanged(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::ProfileComponentChanged(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::PinGradeReset(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::PinGradeAwarded(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::OpenDLCScreen() {
}

void UDebugOptionsCreator::OnVibrationScaleChanged(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::OnSubstepDebugNoneSelected() {
}

void UDebugOptionsCreator::OnSubstepDebugContinuosSelected() {
}

void UDebugOptionsCreator::OnSubstepDebugAverageSelected() {
}

void UDebugOptionsCreator::OnPhysicsSpeedChanged(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::OnNetworkSessionUpdateSelected() {
}

void UDebugOptionsCreator::OnNetworkSessionRemoveLocalPlayerSelected() {
}

void UDebugOptionsCreator::OnNetworkSessionQuickJoinSelected() {
}

void UDebugOptionsCreator::OnNetworkSessionKickClientsSelected() {
}

void UDebugOptionsCreator::OnNetworkSessionInviteSelected() {
}

void UDebugOptionsCreator::OnNetworkSessionFindSelected() {
}

void UDebugOptionsCreator::OnNetworkSessionCreateSelected() {
}

void UDebugOptionsCreator::OnNetworkSessionCloseSelected() {
}

void UDebugOptionsCreator::OnNetworkSessionCancelFindSelected() {
}

void UDebugOptionsCreator::OnNetworkSessionAddLocalPlayerSelected() {
}

void UDebugOptionsCreator::OnNetworkSession9Selected() {
}

void UDebugOptionsCreator::OnNetworkSession8Selected() {
}

void UDebugOptionsCreator::OnNetworkSession7Selected() {
}

void UDebugOptionsCreator::OnNetworkSession6Selected() {
}

void UDebugOptionsCreator::OnNetworkSession5Selected() {
}

void UDebugOptionsCreator::OnNetworkSession4Selected() {
}

void UDebugOptionsCreator::OnNetworkSession3Selected() {
}

void UDebugOptionsCreator::OnNetworkSession2Selected() {
}

void UDebugOptionsCreator::OnNetworkSession1Selected() {
}

void UDebugOptionsCreator::OnNetworkSession10Selected() {
}

void UDebugOptionsCreator::OnNetworkConnQualityTargetSelected() {
}

void UDebugOptionsCreator::OnNetworkConnQualityPerfectSelected() {
}

void UDebugOptionsCreator::OnNetworkConnQualityNormalSelected() {
}

void UDebugOptionsCreator::OnNetworkConnQualityExtremeSelected() {
}

void UDebugOptionsCreator::OnMenuSectionSelected(const FName sectionName) {
}

void UDebugOptionsCreator::OnLifePickupProbabilityChanged(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::OnInteractionDebugDrawTimeChanged(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::OnInteractionDebugChanged(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::MakeCostumeMesh(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::ListUnlockedItems() {
}

void UDebugOptionsCreator::ListFree() {
}

void UDebugOptionsCreator::ListCart() {
}

void UDebugOptionsCreator::LeftEmoteEmotionalStateChanged(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::LeftEmoteChanged(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::KillAllSackboys() {
}

void UDebugOptionsCreator::ForceRetrieveTrophyData(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::ForcePlayerCount(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::ExitGame() {
}

void UDebugOptionsCreator::EmotePlayerChanged(float Value, float Min, float Max, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::DownEmoteEmotionalStateChanged(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::DownEmoteChanged(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::DLCProductOverrideChanged(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::CreateTheDefaultMenu(UDataTable* InLevelNamesDataTable) {
}

void UDebugOptionsCreator::CollectAllPrizeBubbles() {
}

void UDebugOptionsCreator::ClearTournamentNotificationSaveData() {
}

void UDebugOptionsCreator::ClearTournamentBestTimeSaveData() {
}

void UDebugOptionsCreator::ClearPrinciplePlayerProgress() {
}

void UDebugOptionsCreator::ClearCart() {
}

void UDebugOptionsCreator::ClearAllPlayersProgress() {
}

void UDebugOptionsCreator::BuyCart() {
}

void UDebugOptionsCreator::AwardCollectabells() {
}

void UDebugOptionsCreator::AllPinGradesReset(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::AllPinGradesAwardedExeceptThis(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::AllPinGradesAwarded(float Param, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::AddNextAvailableProductToCart() {
}

void UDebugOptionsCreator::ActivitiesShowCompleted(bool Enabled, const FVariableChangedUserData& UserData) {
}

void UDebugOptionsCreator::ActivitiesShowBoard(bool Enabled, const FVariableChangedUserData& UserData) {
}


