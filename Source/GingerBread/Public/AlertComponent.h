#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAlertState.h"
#include "OnAlertStateChangedDelegate.h"
#include "AlertComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UAlertComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAlertState, float> CooldownTimers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownTimerDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PropagateDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAlertStateChanged OnAlertStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AlertState, meta=(AllowPrivateAccess=true))
    EAlertState AlertState;
    
public:
    UAlertComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnlockAlertState();
    
    UFUNCTION(BlueprintCallable)
    void SetAlertState(EAlertState newAlertState, AActor* NewInstigator);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_AlertState();
    
public:
    UFUNCTION(BlueprintCallable)
    void LockAlertState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAlertState GetAlertState() const;
    
};

