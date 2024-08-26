#pragma once
#include "CoreMinimal.h"
#include "GingerbreadBTTaskNode.h"
#include "AIActionTask.generated.h"

UCLASS(Blueprintable)
class UAIActionTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionToSend;
    
    UAIActionTask();

};

