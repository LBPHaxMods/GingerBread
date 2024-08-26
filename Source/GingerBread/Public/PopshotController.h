#pragma once
#include "CoreMinimal.h"
#include "GingerbreadAIController.h"
#include "PopshotController.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class GINGERBREAD_API APopshotController : public AGingerbreadAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* AttackBTAsset;
    
    APopshotController(const FObjectInitializer& ObjectInitializer);

};

