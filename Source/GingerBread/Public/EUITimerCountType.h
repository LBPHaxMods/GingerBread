#pragma once
#include "CoreMinimal.h"
#include "EUITimerCountType.generated.h"

UENUM(BlueprintType)
enum class EUITimerCountType : uint8 {
    None,
    Incrementing,
    Decrementing,
    ExternallyUpdated,
};

