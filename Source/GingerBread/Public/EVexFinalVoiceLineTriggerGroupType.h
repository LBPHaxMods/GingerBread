#pragma once
#include "CoreMinimal.h"
#include "EVexFinalVoiceLineTriggerGroupType.generated.h"

UENUM(BlueprintType)
enum class EVexFinalVoiceLineTriggerGroupType : uint8 {
    Invalid,
    Generic,
    Fight1,
    Fight2,
    Max,
};

