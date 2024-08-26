#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "StompysteinSpinCooldownTask.generated.h"

UCLASS(Blueprintable)
class UStompysteinSpinCooldownTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ShouldTauntBB;
    
    UStompysteinSpinCooldownTask();

};

