#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EAttackType.h"
#include "AIAttackTimeInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UAIAttackTimeInterface : public UInterface {
    GENERATED_BODY()
};

class IAIAttackTimeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetTimeToHitTarget(AActor* TargetActor, EAttackType AttackType);
    
};

