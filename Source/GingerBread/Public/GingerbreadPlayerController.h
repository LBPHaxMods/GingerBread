#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETriggerEffectSide -FallbackName=ETriggerEffectSide
#include "GameFramework/PlayerController.h"
#include "GameFramework/OnlineReplStructs.h"
#include "InputCoreTypes.h"
#include "AxisActionDelegateDelegate.h"
#include "ECameraSettingsType.h"
#include "EKickReason.h"
#include "ELoadingType.h"
#include "EPlayerJoinDirection.h"
#include "EPlayerSlot.h"
#include "GingerbreadPlayerId.h"
#include "HapticsSettingsChangedDelegateDelegate.h"
#include "KeyActionDelegateDelegate.h"
#include "KeyPressedEventDelegate.h"
#include "KeyReleasedEventDelegate.h"
#include "TEAControllerType.h"
#include "TEAInputType.h"
#include "TriggerEffectSetup.h"
#include "UpdateGlyphDelegateDelegate.h"
#include "VectorAxisActionDelegateDelegate.h"
#include "GingerbreadPlayerController.generated.h"

class AGingerbreadLevelSequenceActor;
class AGingerbreadPlayerState;
class ASackboy;
class UAkAudioEvent;
class UControlComponent;
class UKeyIconCollection;
class UMusicManagerNetworkProxy;
class UObject;
class UTexture2D;
class UWorld;

UENUM(BlueprintType)
enum class ETriggerEffectSide : uint8
{
	DefaultZero                    = 0,
	Left                           = 1,
	Right                          = 2,
	Both                           = 3,
	ETriggerEffectSide_MAX         = 4,
};

UCLASS(Blueprintable)
class GINGERBREAD_API AGingerbreadPlayerController : public APlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UControlComponent* ControlComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHapticsSettingsChangedDelegate HapticsSettingsChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyName_Pause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyName_MenuSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyName_ShowCoOpUIKeyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyName_ShowCoOpUIGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyName_Debug_Shotcurt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyName_PIEPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKeyIconCollection* KeyIconCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMusicManagerNetworkProxy* MusicManagerNetworkProxy;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantOverrideAudioListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceHapticsEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeyPressedEvent OnKeyPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeyReleasedEvent OnKeyReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMouseEvents;
    
    AGingerbreadPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateAllWidgetGlyphs();
    
    UFUNCTION(BlueprintCallable)
    void UnbindVectorAxisAction(const FName Action, const FVectorAxisActionDelegate& CustomEvent);
    
    UFUNCTION(BlueprintCallable)
    void UnbindReleasedActions(const FName Action, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void UnbindReleasedAction(const FName Action, const FKeyActionDelegate& CustomEvent);
    
    UFUNCTION(BlueprintCallable)
    void UnbindPressedActions(const FName Action, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void UnbindPressedAction(const FName Action, const FKeyActionDelegate& CustomEvent);
    
    UFUNCTION(BlueprintCallable)
    void UnbindDownActions(const FName Action, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void UnbindDownAction(const FName Action, const FKeyActionDelegate& CustomEvent);
    
    UFUNCTION(BlueprintCallable)
    void UnbindAxisActions(const FName Action, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void UnbindAxisAction(const FName Action, const FAxisActionDelegate& CustomEvent);
    
    UFUNCTION(BlueprintCallable)
    void UnbindAllActions(const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void TogglePauseState(bool openToDebug);
    
    UFUNCTION(BlueprintCallable)
    void SetStickSwap(bool Swap);
    
    UFUNCTION(BlueprintCallable)
    void SetOuterDeadzone(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertYAxis(bool Invert);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertXAxis(bool Invert);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerDeadzone(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void SetForceFeedbackScale(float InScale);
    
    UFUNCTION(BlueprintCallable)
    static void SetCanMouseBeShown(bool canShow);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraShakeEnabled(bool InEnabled);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUnmuteNonBlockedPlayer(FUniqueNetIdRepl PlayerId);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetHapticsSupport(bool bSetHapticSupport);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestKick(EKickReason KickReason);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerMuteBlockedPlayer(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_NetworkSkipPressed(AGingerbreadLevelSequenceActor* Object);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_LoadingFinished();
    
    UFUNCTION(BlueprintCallable)
    void ResumePauseGame(bool PAUSE);
    
    UFUNCTION(BlueprintCallable)
    void ResetControllerOrientation();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseKeyForAction(const FName Action);
    
    UFUNCTION(BlueprintCallable)
    void RegisterUpdateGlyphCallback(const FUpdateGlyphDelegate& CustomEvent);
    
    UFUNCTION(BlueprintCallable)
    void PressKeyForAction(const FName Action);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveLoaded(const FGingerbreadPlayerId& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Net_Server_NotifySavedPrizeTier(const int32 PrizeTier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowingMouse() const;
    
    UFUNCTION(BlueprintCallable)
    static bool IsOnScreen(UObject* world_context_object, const FVector& world_position, ECameraSettingsType CameraSettingsType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNetworkGameHost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMouseInputActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyboardMouseAssigned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamepadControllerPlaystation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamepadAssignedOfType(TEAControllerType Type) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDownIgnoreControlSchemeSwitch(const FName Action);
    
    UFUNCTION(BlueprintCallable)
    bool IsDown(const FName Action);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanPause() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsButtonInputBlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveControllerPlaystation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGamepadAssigned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTeaControllerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEAControllerType GetSteamInputAdjustedControllerType(TEAControllerType Type) const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetScreenPosition(UObject* world_context_object, const FVector& world_position, FVector2D& screen_position, ECameraSettingsType CameraSettingsType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASackboy* GetSackboy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGingerbreadPlayerState* GetPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerSlot GetPlayerSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetNetPlayerIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetMappedKeyForAction(const FName& Action, TEAInputType inputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalControllerId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIconForKey(const FKey& InputKey, TEAInputType inputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIconForControllerType(TEAControllerType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIconForActiveGamepad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIconForAction(FName ActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHapticsSupport() const;
    
    UFUNCTION(BlueprintCallable)
    UWorld* GetCurrentWorld();
    
    UFUNCTION(BlueprintCallable)
    static bool GetCanMouseBeShown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEAControllerType GetActiveTeaControllerTypeEnum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEAControllerType GetActiveGamepadControllerTypeEnum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActionInActiveScheme(const TArray<FName> Actions) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GamepadHasSpeaker() const;
    
    UFUNCTION(BlueprintCallable)
    void DeregisterUpdateGlyphCallback(const FUpdateGlyphDelegate& CustomEvent);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartSummaryScreen();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartLoadingTransition(const FString& level_name, ELoadingType loadType);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPostEventToGamepad(UAkAudioEvent* AkEvent);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowCollectedBellsFromLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRename() const;
    
    UFUNCTION(BlueprintCallable)
    void CanOpenPauseMenu(bool CanOpen);
    
    UFUNCTION(BlueprintCallable)
    void BlockButtonInput(bool blockInput);
    
    UFUNCTION(BlueprintCallable)
    void BindVectorAxisAction(const FName Action, const FVectorAxisActionDelegate& CustomEvent);
    
    UFUNCTION(BlueprintCallable)
    void BindReleasedAction(const FName Action, const FKeyActionDelegate& CustomEvent);
    
    UFUNCTION(BlueprintCallable)
    void BindPressedAction(const FName Action, const FKeyActionDelegate& CustomEvent);
    
    UFUNCTION(BlueprintCallable)
    bool BindKeyKeyboard(const FName& Action, const FKey& Key);
    
    UFUNCTION(BlueprintCallable)
    bool BindKeyGamepad(const FName& Action, const FKey& Key);
    
    UFUNCTION(BlueprintCallable)
    void BindDownAction(const FName Action, const FKeyActionDelegate& CustomEvent);
    
    UFUNCTION(BlueprintCallable)
    void BindAxisAction(const FName Action, const FAxisActionDelegate& CustomEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ApplyTriggerEffectSetup(const FTriggerEffectSetup& TriggerEffectSetup, ETriggerEffectSide Side);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ApplyTriggerEffectOverride(const FTriggerEffectSetup& TriggerEffectSetup, ETriggerEffectSide Side, float Duration);
    
};

