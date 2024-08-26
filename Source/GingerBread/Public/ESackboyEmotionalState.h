#pragma once
#include "CoreMinimal.h"
#include "ESackboyEmotionalState.generated.h"

UENUM(BlueprintType)
enum class ESackboyEmotionalState : uint8 {
    Neutral,
    Happy,
    Sad,
    Scared,
    Angry,
};

