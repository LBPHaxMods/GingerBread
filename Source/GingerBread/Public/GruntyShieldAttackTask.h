#pragma once
#include "CoreMinimal.h"
#include "GingerbreadBTTaskNode.h"
#include "GruntyShieldAttackTask.generated.h"

UCLASS(Blueprintable)
class UGruntyShieldAttackTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UGruntyShieldAttackTask();

private:
    UFUNCTION(BlueprintCallable)
    void DamageDurationPassed();
    
    UFUNCTION(BlueprintCallable)
    void AttackFinished();
    
    UFUNCTION(BlueprintCallable)
    void AnticipationFinished();
    
};

