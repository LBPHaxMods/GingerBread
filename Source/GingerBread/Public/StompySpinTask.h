#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "StompySpinTask.generated.h"

UCLASS(Blueprintable)
class UStompySpinTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ShouldSpinBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector NeedsToCelebrateBB;
    
    UStompySpinTask();

protected:
    UFUNCTION(BlueprintCallable)
    void SpinCooldownStarted();
    
};

