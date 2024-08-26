#pragma once
#include "CoreMinimal.h"
#include "GingerbreadBTTaskNode.h"
#include "GruntyStackCrashingTask.generated.h"

UCLASS(Blueprintable)
class UGruntyStackCrashingTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxImpulse;
    
    UGruntyStackCrashingTask();

};

