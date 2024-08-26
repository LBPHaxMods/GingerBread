#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TriggerBox.h"
#include "ActorEnabledDelegateDelegate.h"
#include "EGameTriggerActivationMode.h"
#include "GameTrigger.h"
#include "RideOnGameTrigger.generated.h"

class AActor;
class UActorComponent;
class UInteractionComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API ARideOnGameTrigger : public ATriggerBox, public IGameTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorEnabledDelegate OnActorEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorEnabledDelegate OnActorDisabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> ComponentsToEnable;
    
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
    
public:
    ARideOnGameTrigger(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void ToggleActorAwake(UPARAM(Ref) AActor*& Actor, bool bWake);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTriggerActivationMode(EGameTriggerActivationMode NewActivationMode);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetActorsEnabled(bool bEnableActors, bool Force);
    
    UFUNCTION(BlueprintCallable)
    void Server_OnTriggerManagerAvailable(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable)
    void Server_OnNetworkManagerAvailable();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TriggerActors();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentMode();
    

    // Fix for true pure virtual functions not being implemented
};

