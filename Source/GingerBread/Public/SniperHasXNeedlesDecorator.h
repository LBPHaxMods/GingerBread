#pragma once
#include "CoreMinimal.h"
#include "GingerbreadBTDecoratorNode.h"
#include "SniperHasXNeedlesDecorator.generated.h"

UCLASS(Blueprintable)
class USniperHasXNeedlesDecorator : public UGingerbreadBTDecoratorNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GreaterThanX;
    
public:
    USniperHasXNeedlesDecorator();

};

