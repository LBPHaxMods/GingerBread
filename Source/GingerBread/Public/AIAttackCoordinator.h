#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "AIAttackCoordinator.generated.h"

class AActor;
class UAIBehaviorCoordinator;
class UWorld;

UCLASS(Blueprintable)
class UAIAttackCoordinator : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIBehaviorCoordinator> BehaviorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AvailableActors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAIBehaviorCoordinator*> RunningBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AvailTargets;
    
public:
    UAIAttackCoordinator();

    UFUNCTION(BlueprintCallable)
    void StartBehavior(TArray<AActor*> _targets, TArray<AActor*> _coordinatedActors);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrepareAttack(float DeltaSeconds, const TArray<AActor*>& _targets);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBehaviorFinished();
    
    UFUNCTION(BlueprintCallable)
    bool IsActorValid(AActor* _actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumAttacksRunning() const;
    
};

