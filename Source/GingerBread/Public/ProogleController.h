#pragma once
#include "CoreMinimal.h"
#include "GingerbreadAIController.h"
#include "ProogleController.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class GINGERBREAD_API AProogleController : public AGingerbreadAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* AttackBTAsset;
    
    AProogleController(const FObjectInitializer& ObjectInitializer);

};

