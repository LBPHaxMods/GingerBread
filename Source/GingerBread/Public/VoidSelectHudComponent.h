#pragma once
#include "CoreMinimal.h"
#include "ELevelType.h"
#include "ETournamentStatus.h"
#include "ETrophy.h"
#include "EVoidSelectESportState.h"
#include "EVoidSelectScreenType.h"
#include "EVoidSelectTrialsType.h"
#include "EVoidSelectVOType.h"
#include "GingerbreadHUDComponent.h"
#include "VoidSelectUnlockDataCostume.h"
#include "VoidSelectUnlockDataLevel.h"
#include "VoidSelectHudComponent.generated.h"

class UAnimSequenceBase;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVoidSelectHudComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnlocking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ScarletVOTable;
    
public:
    UVoidSelectHudComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnbindInputsWhileEsportsNotificationOpen();
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedTrialsType(EVoidSelectTrialsType TrialsType);
    
    UFUNCTION(BlueprintCallable)
    void SetSeenIntro();
    
    UFUNCTION(BlueprintCallable)
    void SetSeenCompletedGolds();
    
    UFUNCTION(BlueprintCallable)
    void SetActiveScreenType(EVoidSelectScreenType InActiveScreen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetBindingOnPromptClose();
    
    UFUNCTION(BlueprintCallable)
    void RegisterLevelUnlock(const FVoidSelectUnlockDataLevel& UnlockData);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCostumeUnlock(const FVoidSelectUnlockDataCostume& UnlockData);
    
    UFUNCTION(BlueprintCallable)
    bool ProcessUnlocks();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVOReplicated(EVoidSelectVOType VOType, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnlocksFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnUnlockNotificationClosed(int32 OptionType);
    
    UFUNCTION(BlueprintCallable)
    void OnTournamentStatusChanged(FName TournamentID, ETournamentStatus NewStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetSelectedTrialsType_BP(EVoidSelectTrialsType TrialsType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLevelUnlockOccurred(const FVoidSelectUnlockDataLevel& UnlockData);
    
    UFUNCTION(BlueprintCallable)
    void OnEsportsBlockNotificationClosed(int32 OptionType);
    
    UFUNCTION(BlueprintCallable)
    void OnEsportsBlockAcceptTermsNotificationClosed(int32 OptionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnESportsAcceptedTerms_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCostumeUnlockOccurred(const FVoidSelectUnlockDataCostume& UnlockData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveScreenTypeChange_BP(EVoidSelectScreenType ActiveScreen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockNotificationOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScreenTypeActive(EVoidSelectScreenType ScreenType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVoidSelectTrialsType GetSelectedTrialsType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSeenIntro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSeenCompletedGolds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScarletVOTypeLineCount(EVoidSelectVOType VOType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAnimSequenceBase*> GetScarletVOTypeAnims(EVoidSelectVOType VOType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScarletRandomVOTypeLine(EVoidSelectVOType VOType) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPreviousLevelPlayedResults(ELevelType& WorldID, int32& LevelID, int32& TimesPlayed, TEnumAsByte<ETrophy::Type>& TierGained);
    
    UFUNCTION(BlueprintPure)
    int64 GetLastOpenedTimeDifference() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVoidSelectESportState GetESportState() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelUnlockNotification();
    
    UFUNCTION(BlueprintCallable)
    bool BlockEsportsNotification();
    
    UFUNCTION(BlueprintCallable)
    bool BlockEsportsEntryNoOnline();
    
    UFUNCTION(BlueprintCallable)
    bool BlockEsportsAcceptTermsNotification();
    
    UFUNCTION(BlueprintCallable)
    bool AreAnyUnlocksPending();
    
};

