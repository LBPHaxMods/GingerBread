#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "GingerbreadCheatManager.generated.h"

class AMotifLevelSelector;
class UPlayerInput;

UCLASS(Blueprintable)
class UGingerbreadCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayerInput*> InputComps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMotifLevelSelector*> LevelSelectors;
    
public:
    UGingerbreadCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SyncMusicForClients();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SpawnAI(const FString& argString);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_ShowActiveLOs(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetZoomedInCameraD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetZoomedInCameraC();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetZoomedInCameraB();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetZoomedInCameraA();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetWorldMapLevelMastered(int32 WorldIDAsInt, int32 LevelID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetRideOnMode_MoveWorld();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetRideOnMode_MoveVehicle();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetPowerUpNone();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetPowerUpGrappleHook();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetPowerUpCraftCutter();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetPowerUpBlasters();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetPlayerController(int32 Player, int32 Controller);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetMusicState(FName StateName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetJetpackOnDeath(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetInteractionDebugRenderingLevel(const FString& SceneTag, uint8 RenderLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetGrappleSwingMode_Default();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetGrappleSwingMode_AccelerateOnDownSwing();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetGrappleSwingJumpMode_SwingJumpOnExitSwing();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetGrappleSwingJumpMode_Default();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SetAllPlayersToC(bool State);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SelectLevel(FName LevelName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_SelectCulture(const FString& newCulture);
    
    UFUNCTION(Exec)
    void Sumo_SeekMusic(uint32 seekTimeMs);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_ResetAchievements(int32 ID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_ResetAchievement(int32 ID, const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_ReintroduceSackboy(int32 ID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_ProgressAchievement(int32 ID, const FString& Name, int32 increment);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_PlayCutscene(const FString& actName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_NetworkShowSessionDebugInfo(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_NetworkShowPlayerInfo(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_NetworkShowHitPointsNetworkUsageGraph(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_NetworkShowDebugInfoSimple(bool Enabled);
    
    UFUNCTION(Exec)
    void Sumo_NetworkSetDebugInfoDetailed(uint32 Value);
    
    UFUNCTION(Exec)
    void Sumo_NetworkSetDebugConnectionQuality(uint32 Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_LogShadowCasters();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_LogActiveMovers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_KillSackBoy(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    bool Sumo_GetViewportStatEnabled(const FString& StatName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_DefaultCamera();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_AwardAchievements(int32 ID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_AwardAchievement(int32 ID, const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_AIShowHookPointDebug(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_AIShowGenericInfo(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_AISetVisionInfoEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_AISetPatrolInfoEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_AISetParryEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_AISetGroundedInfoEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_AISetDetectionEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_AISetAlertInfoEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_AIEnemyDestroy(bool Enabled, int32 frameInterval, int32 frameDeviation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_ActivityResumeProgressOnly(const FString& ActivityID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_ActivityResume(const FString& ActivityID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_ActivityResumCompletedOnly(const FString& ActivityID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sumo_ActivityDirectLoad(const FString& ActivityID);
    
};

