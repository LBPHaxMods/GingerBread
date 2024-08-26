#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "KingFroogleTurnTask.h"
#include "KingFroogleAlignToActorTask.generated.h"

UCLASS(Blueprintable)
class UKingFroogleAlignToActorTask : public UKingFroogleTurnTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector AlignmentActorBB;
    
    UKingFroogleAlignToActorTask();

};

