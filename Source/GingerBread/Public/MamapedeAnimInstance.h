#pragma once
#include "CoreMinimal.h"
#include "AIAnimInstance.h"
#include "EMamapedeGenericState.h"
#include "MamapedeAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UMamapedeAnimInstance : public UAIAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMamapedeGenericState GenericState;
    
public:
    UMamapedeAnimInstance();

};

