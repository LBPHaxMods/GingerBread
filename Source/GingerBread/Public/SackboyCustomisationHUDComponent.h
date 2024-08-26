#pragma once
#include "CoreMinimal.h"
#include "ELevelType.h"
#include "EPlayerJoinDirection.h"
#include "ESackboyActions.h"
#include "ESackboyEmotionalState.h"
#include "EUINavigationDirection.h"
#include "EVOEventType.h"
#include "EZomZomShopVOType.h"
#include "GingerbreadHUDComponent.h"
#include "GingerbreadPlayerId.h"
#include "SackboyEmote.h"
#include "SackboyCustomisationHUDComponent.generated.h"

class AGingerbreadGameMode;
class AGingerbreadGameState;
class ASackboy;
class UAnimSequenceBase;
class UDataTable;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USackboyCustomisationHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ShopKeeperVOTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadGameState* GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadGameMode* GameMode;
    
public:
    USackboyCustomisationHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateShopPlayerColors();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerColors();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UnlockEmote(FName EmoteName, const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SortEmotesForSackboy(const FGingerbreadPlayerId& PlayerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVOEvent(const FGingerbreadPlayerId& PlayerId, EVOEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void SetHasEnteredCostumeShop(const FGingerbreadPlayerId& PlayerId);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool SetEmotionalStateForSackboy(ASackboy* playerSackboy, ESackboyEmotionalState NewState, EUINavigationDirection DpadDir);
    
    UFUNCTION(BlueprintCallable)
    bool SetEmoteForSackboy(ASackboy* playerSackboy, const FName& EmoteNameID, EUINavigationDirection DpadDir);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentCollectabells(const FGingerbreadPlayerId& PlayerId, int32 collectabellCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshPlayersReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshPlayerLayout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTransitionOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenCustomiseMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool forced);
    
    UFUNCTION(BlueprintCallable)
    void MarkEmoteNotNew(FName EmoteName, const FGingerbreadPlayerId& PlayerId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsWorldUnlockedForHost(ELevelType World) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsWorldUnlocked(ELevelType World, FGingerbreadPlayerId PlayerId);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsEmoteNew(FName EmoteName, const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    bool IsAllCostumeItemsDebugOn();
    
    UFUNCTION(BlueprintCallable)
    bool GetVOEvent(const FGingerbreadPlayerId& PlayerId, EVOEventType EventType);
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<ESackboyEmotionalState> GetUnlockedEmotionalStatesForSackboy(ASackboy* playerSackboy);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSackboyEmote> GetUnlockedEmotesForSackboy(const FGingerbreadPlayerId& PlayerId);
    
public:
    UFUNCTION(BlueprintCallable)
    UAnimSequenceBase* GetShuffledShopKeeperVoAnim(EZomZomShopVOType VOType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAnimSequenceBase*> GetShopKeeperVOTypeAnims(EZomZomShopVOType VOType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequenceBase* GetRandomShopKeeperVoAnim(EZomZomShopVOType VOType) const;
    
    UFUNCTION(BlueprintCallable)
    FName GetNameForSackboyAction(ESackboyActions specialActionName);
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FSackboyEmote> GetLockedEmotesForSackboy(const FGingerbreadPlayerId& PlayerId);
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetHasEnteredCostumeShop(const FGingerbreadPlayerId& PlayerId);
    
protected:
    UFUNCTION(BlueprintCallable)
    ESackboyEmotionalState GetEmotionalStateForSackboy(ASackboy* playerSackboy, EUINavigationDirection DpadDir);
    
    UFUNCTION(BlueprintCallable)
    int32 GetEmoteIndex(FName EmoteNameID);
    
public:
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetEmoteBoundKeyTexture(ASackboy* Sackboy, ESackboyActions specialActionName);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 GetEmoteBindingIndexFromDirection(EUINavigationDirection DpadDir);
    
    UFUNCTION(BlueprintCallable)
    FSackboyEmote GetEmote(FName EmoteNameID);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentCollectabells(const FGingerbreadPlayerId& PlayerId);
    
protected:
    UFUNCTION(BlueprintCallable)
    ESackboyEmotionalState GetBoundEmotionalStateForSackboy(ASackboy* playerSackboy, EUINavigationDirection DpadDir);
    
    UFUNCTION(BlueprintCallable)
    FSackboyEmote GetBoundEmoteForSackboy(ASackboy* playerSackboy, EUINavigationDirection DpadDir);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DropOut(const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DropIn(const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseCustomiseMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallShowCostumeShop();
    
};

