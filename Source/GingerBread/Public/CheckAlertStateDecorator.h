#pragma once
#include "CoreMinimal.h"
#include "EAlertState.h"
#include "GingerbreadBTDecoratorNode.h"
#include "CheckAlertStateDecorator.generated.h"

UCLASS(Blueprintable)
class UCheckAlertStateDecorator : public UGingerbreadBTDecoratorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlertState IsAlert;
    
    UCheckAlertStateDecorator();

};

