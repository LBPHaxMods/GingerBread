#pragma once
#include "CoreMinimal.h"
#include "EESportsBoardSectionType.h"
#include "ESportsLeaderboardSectionItem.h"
#include "GingerbreadWidget.h"
#include "TournamentLeaderboard.h"
#include "PSCompeteLeaderboardBaseWidget.generated.h"

class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UPSCompeteLeaderboardBaseWidget : public UGingerbreadWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* EntriesContainerVB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EESportsBoardSectionType BoardSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpeningAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayIntroAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPlayIntroAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOffline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FESportsLeaderboardSectionItem> Sections;
    
    UPSCompeteLeaderboardBaseWidget();

    UFUNCTION(BlueprintCallable)
    void SetupLeaderboards(bool bForceReload);
    
    UFUNCTION(BlueprintCallable)
    void SetLeaderboardOffline(bool IsOffline);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLoading(bool IsLoading);
    
    UFUNCTION(BlueprintCallable)
    void SetBoardSection(EESportsBoardSectionType InSection);
    
    UFUNCTION(BlueprintCallable)
    void PreviousSection();
    
    UFUNCTION(BlueprintCallable)
    void PlayOpeningAnimation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetLeaderboardOffline_BP(bool IsOffline);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetIsLoading_BP(bool IsLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetBoardSection_BP(EESportsBoardSectionType InSection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreviousSection_BP(EESportsBoardSectionType NewSection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNextSection_BP(EESportsBoardSectionType NewSection);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLeaderboardLoaded(const FTournamentLeaderboard& ResultBoard, bool bSuccess);
    
public:
    UFUNCTION(BlueprintCallable)
    void NextSection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FESportsLeaderboardSectionItem GetSectionItem(EESportsBoardSectionType InSection) const;
    
};

