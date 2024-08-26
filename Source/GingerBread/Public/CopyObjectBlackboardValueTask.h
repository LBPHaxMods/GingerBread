#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTTaskNode.h"
#include "CopyObjectBlackboardValueTask.generated.h"

UCLASS(Blueprintable)
class UCopyObjectBlackboardValueTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Out;
    
    UCopyObjectBlackboardValueTask();

};

