#pragma once
#include "CoreMinimal.h"
#include "ERammerTurnToTargetType.h"
#include "GingerbreadBTTaskNode.h"
#include "RammerTurnBaseTask.generated.h"

UCLASS(Abstract, Blueprintable)
class GINGERBREAD_API URammerTurnBaseTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERammerTurnToTargetType TurnType;
    
    URammerTurnBaseTask();

};

