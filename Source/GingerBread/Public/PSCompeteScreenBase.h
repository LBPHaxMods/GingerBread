#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECompeteScreenLoadStatus.h"
#include "ECompeteScreenSetupPhase.h"
#include "EESportsTier.h"
#include "ESportsTrialRow.h"
#include "GingerbreadWidget.h"
#include "TournamentLeaderboard.h"
#include "PSCompeteScreenBase.generated.h"

class UCanvasPanel;
class UESportsDataAsset;
class UPSCompeteLeaderboardBaseWidget;
class UPSCompeteTierBaseWidget;

UCLASS(Blueprintable, EditInlineNew)
class UPSCompeteScreenBase : public UGingerbreadWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ActiveTournamentCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* InActiveTournamentCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPSCompeteLeaderboardBaseWidget* PlaystationCompeteLeaderboardWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EESportsTier, UPSCompeteTierBaseWidget*> TierWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UESportsDataAsset* TournamentTrialDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlockedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPlayTierTilesAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompeteScreenLoadStatus LoadStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EESportsTier CurrentTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompeteScreenSetupPhase CurrentSetupPhase;
    
    UPSCompeteScreenBase();

    UFUNCTION(BlueprintCallable)
    void SetUnlockedState(bool bUnlocked);
    
    UFUNCTION(BlueprintCallable)
    void SetRemainingTime();
    
    UFUNCTION(BlueprintCallable)
    void SetLoadStatus(ECompeteScreenLoadStatus Status);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTopRankedLoaded(const FTournamentLeaderboard& ResultBoard, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnSilverRankLoaded(const FTournamentLeaderboard& ResultBoard, bool bSuccess);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupPhase_BP(ECompeteScreenSetupPhase Phase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetUnlockedState_BP(bool bUnlocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTrialDetails_BP(const FESportsTrialRow& InDetails);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRemainingTime_BP(FTimespan Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPlayerBestTime_BP(FTimespan Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetNextTier_BP(EESportsTier tier);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetNextRequiredTime_BP(FTimespan Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetLoadStatus_BP(ECompeteScreenLoadStatus Status);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetCurrentTier_BP(EESportsTier tier);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPrimaryPlayerRankLoaded(const FTournamentLeaderboard& ResultBoard, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnPlatinumRankLoaded(const FTournamentLeaderboard& ResultBoard, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnGoldRankLoaded(const FTournamentLeaderboard& ResultBoard, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnDiamondRankLoaded(const FTournamentLeaderboard& ResultBoard, bool bSuccess);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPSCompeteTierBaseWidget* GetTierWidget(EESportsTier tier) const;
    
};

