#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAttackType.h"
#include "SignalComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API USignalComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttackType, int32> MaxAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttackType, float> CooldownTimers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float signalStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighPrioritySignalStrength;
    
public:
    USignalComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterAttacker(EAttackType AttackType, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetIsHighPriority(bool isHighPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultSignalStrength(float NewSignalStrength);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAttacker(EAttackType AttackType, UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJustSpawned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTypeMaxAttackers(EAttackType AttackType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSignalStrength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsHighPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultSignalStrength() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetAttackingTable();
    
    UFUNCTION(BlueprintCallable)
    void DisableJustSpawned();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateSignal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CurrentlyBeingAttacked(EAttackType AttackType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeAttacked(EAttackType AttackType) const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateSignalWithDelay(float Delay);
    
    UFUNCTION(BlueprintCallable)
    void ActivateSignal();
    
};

