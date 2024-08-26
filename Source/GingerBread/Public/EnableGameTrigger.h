#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TriggerBox.h"
#include "ActorEnabledDelegateDelegate.h"
#include "EEnableGameTriggerActivationMode.h"
#include "EGameTriggerActivationMode.h"
#include "GameTrigger.h"
#include "EnableGameTrigger.generated.h"

class AActor;
class ASackboy;
class UActorComponent;
class UInteractionComponent;

UCLASS(Blueprintable, MinimalAPI)
class AEnableGameTrigger : public ATriggerBox, public IGameTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorEnabledDelegate OnActorEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorEnabledDelegate OnActorDisabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> ComponentsToEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASackboy*> Sackboys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetupComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentMode, meta=(AllowPrivateAccess=true))
    EGameTriggerActivationMode CurrentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* TriggerVolume;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> RegisteredGuids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> InitialRegisteredGuids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FGuid> GuidQueue;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_TriggerActors, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> TriggerActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugLogActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDebugLogInstance;
    
public:
    AEnableGameTrigger(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void ToggleActorAwake(UPARAM(Ref) AActor*& Actor, bool bWake);
    
    UFUNCTION(BlueprintCallable)
    void StaggeredActorEnable(bool bEnableActors, bool Force);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTriggerActivationMode(EGameTriggerActivationMode NewActivationMode);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetActorsEnabled(bool bEnableActors, bool Force);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetActivationMode(EEnableGameTriggerActivationMode NewActivationMode);
    
private:
    UFUNCTION(BlueprintCallable)
    void Server_OnTriggerManagerAvailable(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable)
    void Server_OnSubLevelResetStart(int32 ResetCount, bool AllPlayersDead);
    
    UFUNCTION(BlueprintCallable)
    void Server_OnSubLevelResetFinish(int32 ResetCount, bool AllPlayersDead);
    
    UFUNCTION(BlueprintCallable)
    void Server_OnStartIgnoringOverlaps();
    
    UFUNCTION(BlueprintCallable)
    void Server_OnNetworkManagerAvailable();
    
    UFUNCTION(BlueprintCallable)
    void Server_OnLevelResetManagerAvailable(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable)
    void Server_OnFinishIgnoringOverlaps();
    
    UFUNCTION(BlueprintCallable)
    void Server_OnCutsceneManagerAvailable(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TriggerActors();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentMode();
    
    UFUNCTION(BlueprintCallable)
    void EndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void BeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    

    // Fix for true pure virtual functions not being implemented
};

