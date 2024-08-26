#pragma once
#include "CoreMinimal.h"
#include "EVexFinalVoiceLineTriggerResult.generated.h"

UENUM(BlueprintType)
enum class EVexFinalVoiceLineTriggerResult : uint8 {
    Success,
    Failed_IsStunned,
    Failed_LineAlreadyPlaying,
    Failed_NoLinesAvailable,
    Failed_RandomChance,
    Failed_MissingData,
};

