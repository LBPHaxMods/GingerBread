#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "YetiKingAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UYetiKingAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Falling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollSpeed;
    
public:
    UYetiKingAnimInstance();

};

