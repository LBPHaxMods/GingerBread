#pragma once
#include "CoreMinimal.h"
#include "EGruntyStackBehaviourState.h"
#include "GingerbreadBTDecoratorNode.h"
#include "GruntyStackStateDecorator.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API UGruntyStackStateDecorator : public UGingerbreadBTDecoratorNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGruntyStackBehaviourState> AcceptableStates;
    
    UGruntyStackStateDecorator();

};

