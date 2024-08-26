#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_JumpToJumpPoint.generated.h"

class AAIController;
class APawn;

UCLASS(Blueprintable)
class UBTTask_JumpToJumpPoint : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UBTTask_JumpToJumpPoint();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTurnStart(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpStart(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpFinish(AAIController* OwnerController, APawn* ControlledPawn, bool DidLand);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpDelayStart(AAIController* OwnerController, APawn* ControlledPawn);
    
};

