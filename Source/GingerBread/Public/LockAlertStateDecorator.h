#pragma once
#include "CoreMinimal.h"
#include "GingerbreadBTDecoratorNode.h"
#include "LockAlertStateDecorator.generated.h"

UCLASS(Blueprintable)
class ULockAlertStateDecorator : public UGingerbreadBTDecoratorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UnlockOnExit;
    
    ULockAlertStateDecorator();

};

