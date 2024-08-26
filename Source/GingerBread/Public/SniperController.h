#pragma once
#include "CoreMinimal.h"
#include "GingerbreadAIController.h"
#include "SniperController.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class GINGERBREAD_API ASniperController : public AGingerbreadAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* AttackBTAsset;
    
    ASniperController(const FObjectInitializer& ObjectInitializer);

};

