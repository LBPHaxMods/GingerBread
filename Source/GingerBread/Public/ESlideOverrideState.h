#pragma once
#include "CoreMinimal.h"
#include "ESlideOverrideState.generated.h"

UENUM(BlueprintType)
enum class ESlideOverrideState : uint8 {
    DEFAULT,
    ALWAYS,
    ALWAYSNOESCAPE,
    NEVER,
};

