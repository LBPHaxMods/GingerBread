#pragma once
#include "CoreMinimal.h"
#include "ESequenceState.generated.h"

UENUM(BlueprintType)
enum class ESequenceState : uint8 {
    Idle,
    Running,
    Complete,
};

