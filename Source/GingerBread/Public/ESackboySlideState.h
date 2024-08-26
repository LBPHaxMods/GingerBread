#pragma once
#include "CoreMinimal.h"
#include "ESackboySlideState.generated.h"

UENUM(BlueprintType)
enum class ESackboySlideState : uint8 {
    Sliding,
    StandingBackUp,
};

