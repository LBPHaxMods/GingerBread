#pragma once
#include "CoreMinimal.h"
#include "ETiltPlatformFeedbackType.generated.h"

UENUM(BlueprintType)
enum class ETiltPlatformFeedbackType : uint8 {
    Start,
    Update,
    Stop,
    Bump,
};

