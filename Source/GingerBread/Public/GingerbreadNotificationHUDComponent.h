#pragma once
#include "CoreMinimal.h"
#include "DialogNotification.h"
#include "EESportsTier.h"
#include "ELevelType.h"
#include "EPlayerJoinDirection.h"
#include "EPlayerReadyToJoinStatus.h"
#include "EventNotification.h"
#include "GingerbreadHUDComponent.h"
#include "GingerbreadPlayerId.h"
#include "MultiSelectNotification.h"
#include "NotificationResultDelegate.h"
#include "PromptNotification.h"
#include "UINotificationChangedBoolDelegate.h"
#include "GingerbreadNotificationHUDComponent.generated.h"

class AGingerbreadPlayerController;
class AProgressionNotificationActor;
class UAvatarManager;
class UCostumePartPermission;
class UDataTable;
class UGingerbreadScreen;
class UGingerbreadSessionManager;
class ULocalPlayer;
class UStaticMesh;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGingerbreadNotificationHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GenericNotificationTable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUINotificationChangedBool SavingStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUINotificationChangedBool NetworkConnectedStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PopupComponentWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MultiplayerEventsWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NetworkComponentWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TutorialComponentWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PromptsComponentWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProgressionChildActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventNotification HostingMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventNotification SearchingMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventNotification JoiningMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventNotification GameFoundMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventNotification NoGameFoundMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventNotification GameSearchErrorMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventNotification InviteReceivedMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchResultShowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPromptNotification CostumeShopPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPromptNotification DLCPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPromptNotification RemixLevelPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPromptNotification VoidLevelPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPromptNotification TournamentStartingPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPromptNotification TournamentActivePrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPromptNotification TournamentEndingPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPromptNotification TournamentLevelUnlockedPS4Prompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPromptNotification TournamentLevelUnlockedPS5Prompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPromptNotification BronzePrizeAwardedPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPromptNotification SilverPrizeAwardedPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPromptNotification GoldPrizeAwardedPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPromptNotification PlatinumPrizeAwardedPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPromptNotification DiamondPrizeAwardedPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EESportsTier PrizeTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrizeAssigningTournamentID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelType TargetWorldSelectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> PromotionalDLCImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TournamentLevelUnlockBadge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCostumePartPermission* CostumePartPermission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenTransitionOnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenTransitionOffTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AProgressionNotificationActor* ProgressionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerbreadSessionManager* SessionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAvatarManager* AvatarManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocalPlayer* LocalPlayer;
    
public:
    UGingerbreadNotificationHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 TutorialNotification(const FEventNotification& Data);
    
    UFUNCTION(BlueprintCallable)
    void StartQuickJoin(UGingerbreadSessionManager* NewSessionManager, ULocalPlayer* NewLocalPlayer, bool CrossGen);
    
    UFUNCTION(BlueprintCallable)
    void StartHostingSession(UGingerbreadSessionManager* NewSessionManager, ULocalPlayer* NewLocalPlayer, bool FriendsOnly, bool CrossGen, bool InviteAfter);
    
    UFUNCTION(BlueprintCallable)
    void ShowWorldProgression(UTexture2D* Icon, FText Text);
    
    UFUNCTION(BlueprintCallable)
    void ShowShopProgression(FText Number);
    
    UFUNCTION(BlueprintCallable)
    void ShowMemoryProgression(int32 Number);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Show3DPin(UStaticMesh* PinMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerControllerOnNotification(int32 NotificationId, AGingerbreadPlayerController* PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetCostumeNoPermissionCallback(const FNotificationResult& Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestScreenBlur(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void RefreshQueuePausedStatus();
    
    UFUNCTION(BlueprintCallable)
    int32 PromptNotification(const FPromptNotification& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnTournamentPromptTransitionFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnTournamentPromptActivated(int32 OptionType);
    
    UFUNCTION(BlueprintCallable)
    void OnTournamentLevelUnlockedTransitionFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnTournamentLevelUnlockedPromptActivated(int32 OptionType);
    
    UFUNCTION(BlueprintCallable)
    void OnScreenPushed(UGingerbreadScreen* screenPushed);
    
    UFUNCTION(BlueprintCallable)
    void OnScreenPopped(UGingerbreadScreen* screenPopped);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerReadyToJoinEvent(EPlayerReadyToJoinStatus Status, const FGingerbreadPlayerId& player_id);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLeftGame(const FGingerbreadPlayerId& Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerKicked(const FGingerbreadPlayerId& Player);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerJoinedGame(const FGingerbreadPlayerId& Player);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnNoGameFoundCallback(int32 Result);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalCoopVisiblityChanged(bool visible);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadingTransitionComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinNotificationResult(int32 Result);
    
    UFUNCTION(BlueprintCallable)
    void OnJoinInviteNotificationResult(int32 Result);
    
    UFUNCTION(BlueprintCallable)
    void OnJoinInviteCallback(int32 Result);
    
    UFUNCTION(BlueprintCallable)
    void OnGameSearchErrorCallback(int32 Result);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePausedChanged(bool bPaused);
    
    UFUNCTION(BlueprintCallable)
    void OnGameFoundCallback(int32 Result);
    
    UFUNCTION(BlueprintCallable)
    void OnDLCStorePromptActivated(int32 OptionType);
    
    UFUNCTION(BlueprintCallable)
    void OnCutsceneStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnCostumeShopTransitionFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnCostumeShopPromptActivated(int32 OptionType);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelCallback(int32 Result);
    
    UFUNCTION(BlueprintCallable)
    int32 MultiSelectNotfication(const FMultiSelectNotification& Data);
    
    UFUNCTION(BlueprintCallable)
    int32 MultiplayerRewardNotification(const FEventNotification& Data);
    
    UFUNCTION(BlueprintCallable)
    int32 MultiplayerEventNotification(const FEventNotification& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPromptNotificationOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNetworkDialogOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGenericNotificationOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyDialogNotificationActive() const;
    
    UFUNCTION(BlueprintCallable)
    void HideTutorialNotification(bool clearQueue);
    
    UFUNCTION(BlueprintCallable)
    void HideNetworkNotification(bool clearQueue);
    
    UFUNCTION(BlueprintCallable)
    FDialogNotification GetGenericNotificationDataWithDelegate(FName NotificationName, const FNotificationResult& ResultDelegate);
    
    UFUNCTION(BlueprintCallable)
    FDialogNotification GetGenericNotificationData(FName NotificationName);
    
    UFUNCTION(BlueprintCallable)
    int32 GenericNotification(const FDialogNotification& Data);
    
    UFUNCTION(BlueprintCallable)
    void ClearCostumeNoPermissionCallback();
    
    UFUNCTION(BlueprintCallable)
    void CancelNotification(int32 NotificationId);
    
    UFUNCTION(BlueprintCallable)
    void CancelGenericNotification();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindDropInOut();
    
};

