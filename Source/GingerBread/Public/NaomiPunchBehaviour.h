#pragma once
#include "CoreMinimal.h"
#include "NaomiBehaviour.h"
#include "NaomiPunchBehaviour.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API UNaomiPunchBehaviour : public UNaomiBehaviour {
    GENERATED_BODY()
public:
    UNaomiPunchBehaviour();

private:
    UFUNCTION(BlueprintCallable)
    void OnHandStartedCharging(float ChargeTime, bool IsLeftHand);
    
};

