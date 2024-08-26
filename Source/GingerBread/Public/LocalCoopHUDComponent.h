#pragma once
#include "CoreMinimal.h"
#include "EPlayerJoinDirection.h"
#include "EPlayerReadyToJoinStatus.h"
#include "EPlayerSlot.h"
#include "GingerbreadHUDComponent.h"
#include "GingerbreadPlayerId.h"
#include "LocalCoopVisiblityChangedDelegate.h"
#include "LocalCoopHUDComponent.generated.h"

class AGingerbreadPlayerController;
class ASackboy;
class UGingerbreadPlayerPanelWidget;
class UGingerbreadScreen;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULocalCoopHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGameLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAnimating;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalCoopVisiblityChanged OnVisiblityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerConnectedDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelWorldDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ControllerConnected;
    
public:
    ULocalCoopHUDComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Show();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerData(AGingerbreadPlayerController* PlayerController, EPlayerSlot PlayerSlot, const FString& PlayerName, UTexture2D* CostumeIcon, bool isHost, bool WaitingSpawn, bool WaitingLoad);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetControllerState(EPlayerSlot PlayerSlot, bool Connected);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestShow();
    
    UFUNCTION(BlueprintCallable)
    void RefreshPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerJoined(EPlayerSlot PlayerSlot, bool Joined);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShowAnimationFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnScreenChanged(UGingerbreadScreen* screenPushed);
    
    UFUNCTION(BlueprintCallable)
    void OnSackboySpawned(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerReadyToJoinEvent(EPlayerReadyToJoinStatus Status, const FGingerbreadPlayerId& player_id);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerLeftLevel(AGingerbreadPlayerController* Controller);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnJoinedPlayersChangedInLevel(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& ID, bool forced);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHideAnimationFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAnyQuitOpen();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hide();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UGingerbreadPlayerPanelWidget*> GetAllPlayerPanels();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceHide();
    
};

