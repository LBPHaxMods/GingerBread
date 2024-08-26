#pragma once
#include "CoreMinimal.h"
#include "GingerbreadBTTaskNode.h"
#include "AIStopMovementTask.generated.h"

UCLASS(Blueprintable)
class UAIStopMovementTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReturnValue;
    
    UAIStopMovementTask();

};

