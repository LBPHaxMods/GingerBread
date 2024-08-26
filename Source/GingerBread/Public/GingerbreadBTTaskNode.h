#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GingerbreadBTTaskNode.generated.h"

class AGingerbreadAICharacter;
class AGingerbreadAIController;

UCLASS(Abstract, Blueprintable)
class UGingerbreadBTTaskNode : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGingerbreadAIController* AIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGingerbreadAICharacter* AIChar;
    
public:
    UGingerbreadBTTaskNode();

};

