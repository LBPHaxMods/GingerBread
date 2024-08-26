#pragma once
#include "CoreMinimal.h"
#include "EVexFinalVoiceLineTriggerType.h"
#include "VexFinalVoiceTrigger.h"
#include "VexFinalVoiceTriggerCollection.generated.h"

USTRUCT(BlueprintType)
struct FVexFinalVoiceTriggerCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVexFinalVoiceLineTriggerType, FVexFinalVoiceTrigger> Triggers;
    
    GINGERBREAD_API FVexFinalVoiceTriggerCollection();
};

