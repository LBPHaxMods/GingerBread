#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "InputCoreTypes.h"
#include "Templates/SubclassOf.h"
#include "UIButtonIconMapping.h"
#include "UIControlsBoundDelegate.h"
#include "UIHudInitialisedDelegate.h"
#include "UIRefreshControlPromptsDelegate.h"
#include "UIRefreshTutorialPromptsDelegate.h"
#include "UIScreenStackChangeDelegate.h"
#include "GingerbreadHUD.generated.h"

class ACamera3DHudManager;
class AGingerbreadPlayerController;
class AGingerbreadReplicatedHud;
class APlayerController;
class UControlScheme;
class UGingerbreadScreen;
class UMediaPlayer;
class UMediaSoundComponent;
class UPlayerJoinFailUI;
class USceneCaptureComponent2D;
class UTexture2D;
class UTextureRenderTarget2D;
class UUserWidget;

UCLASS(Blueprintable, NonTransient)
class AGingerbreadHUD : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACamera3DHudManager> SpawnedCamera3DHudClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGingerbreadReplicatedHud> SpawnedReplicatedHudClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPlayerJoinFailUI> PlayerJoinFailUIClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIHudInitialised OnHudInitialised;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIScreenStackChange OnScreenPushed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIScreenStackChange OnScreenPopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIControlsBound OnUIControlsBound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIRefreshControlPrompts OnRefreshPromptsUI;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIRefreshTutorialPrompts OnRefreshTutorialPrompt;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerJoinFailUI* PlayerJoinFailUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGingerbreadScreen*> ScreenStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGingerbreadScreen*> PersistentScreens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACamera3DHudManager* Camera3DHudManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadReplicatedHud* ReplicatedHud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* MediaSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AreUIControlsBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHudInitialised;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FUIButtonIconMapping> KeyToIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> DefaultSoftImageWidget;
    
public:
    AGingerbreadHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UpdateUIControlScheme(APlayerController* Controller, const UControlScheme* ControlScheme, bool Bind);
    
    UFUNCTION(BlueprintCallable)
    void TakeScreenshotWithoutHud(UTextureRenderTarget2D* RenderTarget, bool bDeferred);
    
    UFUNCTION(BlueprintCallable)
    void SetUIControlsBound(bool UIControlsBound);
    
    UFUNCTION(BlueprintCallable)
    void ResetHudMediaPlayer();
    
    UFUNCTION(BlueprintCallable)
    void RemovePersistentScreen(UGingerbreadScreen* Screen);
    
    UFUNCTION(BlueprintCallable)
    void RefreshPromptsForController(AGingerbreadPlayerController* RefreshingController);
    
    UFUNCTION(BlueprintCallable)
    bool PushScreen(UGingerbreadScreen* Screen, bool LayerOnTop);
    
    UFUNCTION(BlueprintCallable)
    void PostScreenPush(UGingerbreadScreen* pPushedScreen);
    
    UFUNCTION(BlueprintCallable)
    void PostScreenPop(UGingerbreadScreen* pPoppedScreen);
    
    UFUNCTION(BlueprintCallable)
    bool PopToScreen(FName ScreenName, bool bPopTargetScreen);
    
    UFUNCTION(BlueprintCallable)
    bool PopTo(UGingerbreadScreen* Screen, bool bPopTargetScreen);
    
    UFUNCTION(BlueprintCallable)
    void PopScreens(int32 ScreenCount);
    
    UFUNCTION(BlueprintCallable)
    bool PopScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeHUD_BlueprintCall();
    
    UFUNCTION(BlueprintCallable)
    void OnControllerConnectionChangeEvent(bool bIsConnected, int32 SomeValue, int32 ControllerIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAnyKeyPressed(AGingerbreadPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyAxisMoved(AGingerbreadPlayerController* PlayerController, float Delta);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScreenPersistent(const UGingerbreadScreen* Screen) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHudInitialised() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGingerbreadScreen* GetTopScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGingerbreadScreen*> GetTopLayeredScreens() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScreenIndex(const UGingerbreadScreen* Screen) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGingerbreadScreen* GetScreenFromTop(int32 TopScreenOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScreenCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGingerbreadScreen* GetScreenComponent(FName ScreenName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGingerbreadScreen* GetScreen(FName ScreenName) const;
    
    UFUNCTION(BlueprintCallable)
    AGingerbreadReplicatedHud* GetReplicatedHud();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGingerbreadScreen*> GetPushedScreens() const;
    
    UFUNCTION(BlueprintCallable)
    AGingerbreadPlayerController* GetPlayerController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGingerbreadScreen*> GetPersistentScreens() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPersistentScreenCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGingerbreadScreen* GetPersistentScreen(FName ScreenName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHideHud() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetGamepadIconFromKey(const FKey& Key) const;
    
    UFUNCTION(BlueprintCallable)
    ACamera3DHudManager* GetCamera3DHudManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGingerbreadScreen* GetBootScreen() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearScreens();
    
    UFUNCTION(BlueprintCallable)
    void ClearPersistentScreens();
    
    UFUNCTION(BlueprintCallable)
    void AssignHudMediaPlayer(UMediaPlayer* MediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    void AddPersistentScreen(UGingerbreadScreen* Screen);
    
};

