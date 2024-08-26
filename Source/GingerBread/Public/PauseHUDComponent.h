#pragma once
#include "CoreMinimal.h"
#include "EPlayerReadyToJoinStatus.h"
#include "FriendData.h"
#include "GingerbreadHUDComponent.h"
#include "GingerbreadPlayerId.h"
#include "ImageLoadIface.h"
#include "PauseHUDComponent.generated.h"

class UGingerbreadNotificationHUDComponent;
class UGingerbreadSessionManager;
class ULocalPlayer;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPauseHUDComponent : public UGingerbreadHUDComponent, public IImageLoadIface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIPauseMenuToggled, bool, IsOpen);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FNetworkSessionDelegate, bool, Result);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIPauseMenuToggled OnPauseMenuToggled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseSettingsOnlyMode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumGamma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumGamma;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsKnightTrial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerbreadSessionManager* mpSessionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWaitingForFriendsList;
    
public:
    UPauseHUDComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSession(bool FriendsOnly, bool CrossPlatform);
    
    UFUNCTION(BlueprintCallable)
    void ShowPSPlusUpgradeUI(ULocalPlayer* Player);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ShowPendingInviteIfAvailable();
    
    UFUNCTION(BlueprintCallable)
    void ShowPauseHUD(bool Show);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetVOFXPercentage(float VOFXPercentage);
    
    UFUNCTION(BlueprintCallable)
    void SetSFXPercentage(float SFXPercentage);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicPercentage(float MusicPercentage);
    
    UFUNCTION(BlueprintCallable)
    void SetGammaPercentage(float GammaPercentage);
    
    UFUNCTION(BlueprintCallable)
    void SetDialoguePercentage(float DialoguePercentage);
    
    UFUNCTION(BlueprintCallable)
    void QuitSession(const UPauseHUDComponent::FNetworkSessionDelegate& Callback);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool PreMenuClose();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool OpenSystemInviteMenu();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenGameFriendInviteMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreenShown(bool IsVisible);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshSessionWidget();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerReadyToJoinEvent(EPlayerReadyToJoinStatus Status, const FGingerbreadPlayerId& player_id);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerCountChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOnlineFriendsRetrieved(int32 LocalUserNum, bool bWasSuccessful, const FString& ListName, const FString& ErrorStr);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnJoinedPlayerCountChanged(int32 Count);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInviteMenuSessionCreation(bool Success);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFriendListUpdated(bool Success, const TArray<FFriendData>& friendList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSessionBusy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInNetworkSession() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool IsCurrentLevelBonus(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool InviteFriendThroughOSS(int32 FriendListIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingInvite();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetVoiceChatEnabled();
    
    UFUNCTION(BlueprintCallable)
    float GetVOFXPercentage();
    
    UFUNCTION(BlueprintCallable)
    float GetSFXPercentage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSessionPrivacySetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGingerbreadNotificationHUDComponent* GetNotificationHud() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMusicPercentage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetLocalControllerIds() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGammaPercentage();
    
    UFUNCTION(BlueprintCallable)
    float GetDialoguePercentage();
    
    UFUNCTION(BlueprintCallable)
    FText GetBuildVersionText();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool GetAnyLevelsCompleted(UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnablePauseWidget(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void EnablePauseHUD(bool Enable);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CreateSession(const UPauseHUDComponent::FNetworkSessionDelegate& Callback);
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseIfMenuOpen();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckPlayOnlinePrivilege_UpdateRequired();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckPlayOnlinePrivilege_NotAllowed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInvitePlayers() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void CalculateIsKnightTrial(UObject* WorldContextObject);
    

    // Fix for true pure virtual functions not being implemented
};

