#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_JumpyTurretEvade.generated.h"

class AAIController;
class APawn;

UCLASS(Blueprintable)
class UBTTask_JumpyTurretEvade : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_JumpyTurretEvade();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartedFalling(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReachJumpHeight(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpStart(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpFinish(AAIController* OwnerController, APawn* ControlledPawn, bool DidLand);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpDelayStart(AAIController* OwnerController, APawn* ControlledPawn);
    
};

