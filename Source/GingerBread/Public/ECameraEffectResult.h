#pragma once
#include "CoreMinimal.h"
#include "ECameraEffectResult.generated.h"

UENUM(BlueprintType)
namespace ECameraEffectResult {
    enum Type {
        Success,
        SequenceAlreadyPlaying,
        InvalidParameters,
    };
}

