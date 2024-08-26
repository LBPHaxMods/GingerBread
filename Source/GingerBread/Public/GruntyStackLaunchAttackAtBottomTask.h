#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "GruntyStackLaunchAttackAtBottomTask.generated.h"

UCLASS(Blueprintable)
class UGruntyStackLaunchAttackAtBottomTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector SafeLaunchLocationBB;
    
    UGruntyStackLaunchAttackAtBottomTask();

private:
    UFUNCTION(BlueprintCallable)
    void OnLaunchStarted();
    
};

