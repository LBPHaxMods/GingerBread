#pragma once
#include "CoreMinimal.h"
#include "GingerbreadBTTaskNode.h"
#include "StompySpinCooldownWaitTask.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API UStompySpinCooldownWaitTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UStompySpinCooldownWaitTask();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSpinFinished();
    
};

