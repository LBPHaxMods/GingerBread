#pragma once
#include "CoreMinimal.h"
#include "ESportsPlayerData.h"
#include "GingerbreadWidget.h"
#include "PSCompeteLeaderboardEntryBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPSCompeteLeaderboardEntryBase : public UGingerbreadWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FESportsPlayerData PlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDisplayTierOutline;
    
    UPSCompeteLeaderboardEntryBase();

    UFUNCTION(BlueprintCallable)
    void SetPlayerData(const FESportsPlayerData& InPlayerData);
    
    UFUNCTION(BlueprintCallable)
    void PlayIntroAnim(float DelayTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPlayerData_BP(const FESportsPlayerData& InPlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayIntroAnim_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideWidget_BP();
    
};

