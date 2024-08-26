#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "EPlayerJoinDirection.h"
#include "EPlayerSlot.h"
#include "EVoiceIndicatorPositionType.h"
#include "GingerbreadPlayer.h"
#include "GingerbreadPlayerId.h"
#include "GingerbreadWidget.h"
#include "VoiceIndicatorScreenWidget.generated.h"

class AGingerbreadPlayerController;

UCLASS(Blueprintable, EditInlineNew)
class UVoiceIndicatorScreenWidget : public UGingerbreadWidget {
    GENERATED_BODY()
public:
    UVoiceIndicatorScreenWidget();

    UFUNCTION(BlueprintCallable)
    void ShowActivePlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVoicePosition(EVoiceIndicatorPositionType PositionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSlotStatus(EPlayerSlot PlayerSlot, const FString& PlayerName, bool IsTalking, bool IsRequested);
    
    UFUNCTION(BlueprintCallable)
    void SetRequestAllowed(bool IsAllowed);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRequestKey(AGingerbreadPlayerController* PlayerController);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPreMapLoad(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    void OnPreClientTravel(const FString& PendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamlessTravel);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoin(const FGingerbreadPlayer& rNewPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnNewWorldLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinedPlayersChangedInLevel(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& ID, bool forced);
    
};

