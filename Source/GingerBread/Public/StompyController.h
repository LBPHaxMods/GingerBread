#pragma once
#include "CoreMinimal.h"
#include "GingerbreadAIController.h"
#include "StompyController.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class GINGERBREAD_API AStompyController : public AGingerbreadAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* AttackBTAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* IdleBTAsset;
    
    AStompyController(const FObjectInitializer& ObjectInitializer);

};

