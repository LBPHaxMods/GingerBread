#pragma once
#include "CoreMinimal.h"
#include "EAIChargeState.h"
#include "AIChargeStruct.generated.h"

class UBTTaskNode;

USTRUCT(BlueprintType)
struct FAIChargeStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIChargeState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBTTaskNode* ChargeMoveTask;
    
    GINGERBREAD_API FAIChargeStruct();
};

