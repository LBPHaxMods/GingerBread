#pragma once
#include "CoreMinimal.h"
#include "GingerbreadBTTaskNode.h"
#include "AICoordinatedTrafficLightTask.generated.h"

UCLASS(Blueprintable)
class UAICoordinatedTrafficLightTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SentStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatusToProceed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SendMessage;
    
    UAICoordinatedTrafficLightTask();

};

