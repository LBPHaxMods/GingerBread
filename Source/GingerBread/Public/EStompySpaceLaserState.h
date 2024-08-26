#pragma once
#include "CoreMinimal.h"
#include "EStompySpaceLaserState.generated.h"

UENUM(BlueprintType)
enum class EStompySpaceLaserState : uint8 {
    UnInitialised,
    RampUp,
    Dangerous,
    RampDown,
};

