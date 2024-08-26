#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GruntyDecideFightActionBaseService.h"
#include "GruntyStackDecideFightActionService.generated.h"

UCLASS(Blueprintable)
class UGruntyStackDecideFightActionService : public UGruntyDecideFightActionBaseService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector OutSafeLaunchLocationBB;
    
    UGruntyStackDecideFightActionService();

};

