#pragma once
#include "CoreMinimal.h"
#include "GingerbreadBTTaskNode.h"
#include "GruntyDeathHitReactionTask.generated.h"

class AGingerbreadAICharacter;
class UHitReactionComponent;

UCLASS(Blueprintable)
class UGruntyDeathHitReactionTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UGruntyDeathHitReactionTask();

private:
    UFUNCTION(BlueprintCallable)
    void ReceiveExecuteAI_Delayed0(AGingerbreadAICharacter* ControlledPawn, UHitReactionComponent* HitReactionComponent);
    
};

