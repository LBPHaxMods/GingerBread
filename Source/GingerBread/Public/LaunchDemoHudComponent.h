#pragma once
#include "CoreMinimal.h"
#include "EDemoScreenPlayerState.h"
#include "EPlayerReadyToJoinStatus.h"
#include "EPlayerSlot.h"
#include "GingerbreadHUDComponent.h"
#include "GingerbreadPlayerId.h"
#include "LaunchDemoHudComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULaunchDemoHudComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerSlot, EDemoScreenPlayerState> SlotStates;
    
    ULaunchDemoHudComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnbindPlayerChanges();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestSlotQuit(EPlayerSlot PlayerSlot);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshControllerConnections();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerSelectStateChanged(EPlayerSlot PlayerSlot, EDemoScreenPlayerState OldState, EDemoScreenPlayerState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerReadyToJoinEvent(EPlayerReadyToJoinStatus Status, const FGingerbreadPlayerId& player_id);
    
    UFUNCTION(BlueprintCallable)
    void OnJoinedPlayerCountChanged(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadCostume(EPlayerSlot PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDemoScreenPlayerState GetPlayerState(EPlayerSlot PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable)
    void ChangePlayerState(EPlayerSlot PlayerSlot, EDemoScreenPlayerState NewState);
    
    UFUNCTION(BlueprintCallable)
    void BindPlayerChanges();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllPlayersReady() const;
    
};

