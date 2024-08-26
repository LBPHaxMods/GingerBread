#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "StompysteinSpinTask.generated.h"

UCLASS(Blueprintable)
class UStompysteinSpinTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector FightActionBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ShouldTauntBB;
    
    UStompysteinSpinTask();

protected:
    UFUNCTION(BlueprintCallable)
    void SpinCooldownStarted();
    
};

