#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GingerbreadBTServiceNode.h"
#include "PopshotShouldCowerService.generated.h"

UCLASS(Blueprintable)
class UPopshotShouldCowerService : public UGingerbreadBTServiceNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ShouldCowerBB;
    
    UPopshotShouldCowerService();

};

