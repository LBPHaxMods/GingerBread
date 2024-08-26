#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EMeanieMovementType.h"
#include "GingerbreadBTTaskNode.h"
#include "MeanieMinibossAlignToActorTask.generated.h"

UCLASS(Blueprintable)
class UMeanieMinibossAlignToActorTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector AlignmentActorBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeanieMovementType MovementType;
    
    UMeanieMinibossAlignToActorTask();

};

