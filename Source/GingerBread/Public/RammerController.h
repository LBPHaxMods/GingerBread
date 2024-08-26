#pragma once
#include "CoreMinimal.h"
#include "GingerbreadAIController.h"
#include "RammerController.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class GINGERBREAD_API ARammerController : public AGingerbreadAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* AttackBTAsset;
    
    ARammerController(const FObjectInitializer& ObjectInitializer);

};

