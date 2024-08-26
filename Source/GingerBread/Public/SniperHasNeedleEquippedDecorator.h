#pragma once
#include "CoreMinimal.h"
#include "GingerbreadBTDecoratorNode.h"
#include "SniperHasNeedleEquippedDecorator.generated.h"

UCLASS(Blueprintable)
class USniperHasNeedleEquippedDecorator : public UGingerbreadBTDecoratorNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CaresAboutSecondaryHands;
    
public:
    USniperHasNeedleEquippedDecorator();

};

