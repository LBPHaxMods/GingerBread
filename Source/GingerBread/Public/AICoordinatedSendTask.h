#pragma once
#include "CoreMinimal.h"
#include "GingerbreadBTTaskNode.h"
#include "AICoordinatedSendTask.generated.h"

UCLASS(Blueprintable)
class UAICoordinatedSendTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SentStatus;
    
    UAICoordinatedSendTask();

};

