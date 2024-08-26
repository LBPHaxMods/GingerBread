#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETutorialLogicType.h"
#include "TutorialTriggerMode.h"
#include "TutorialTriggerConfigLine.generated.h"

USTRUCT(BlueprintType)
struct FTutorialTriggerConfigLine : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETutorialLogicType GlobalCompletionLogicType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalCompletionLogicThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalTimeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETutorialLogicType LocalCompletionLogicType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocalCompletionLogicThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocalTimeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TutorialTriggerMode TriggerMode;
    
    GINGERBREAD_API FTutorialTriggerConfigLine();
};

