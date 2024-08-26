#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "NetworkSessionDelegateDelegate.h"
#include "MultiplayerBaseComponent.generated.h"

class UGingerbreadSessionManager;
class ULocalPlayer;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMultiplayerBaseComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerbreadSessionManager* mpSessionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocalPlayer* mpPrimaryPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkSessionDelegate mCallback;
    
public:
    UMultiplayerBaseComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ShowPSPlusUpgradeUI(ULocalPlayer* Player);
    
    UFUNCTION(BlueprintCallable)
    void KickLocalGuestPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnectionLimted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGingerbreadSessionManager* GetSessionManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULocalPlayer* GetLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckPlayOnlinePrivilege_UpdateRequired();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckPlayOnlinePrivilege_NotLoggedIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckPlayOnlinePrivilege_NotAllowed();
    
    UFUNCTION(BlueprintCallable)
    void CheckPlayOnlinePrivilege(const FNetworkSessionDelegate& Callback);
    
};

