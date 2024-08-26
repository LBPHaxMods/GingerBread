#pragma once
#include "CoreMinimal.h"
#include "ESackboyAnimOnGroundState.generated.h"

UENUM(BlueprintType)
enum class ESackboyAnimOnGroundState : uint8 {
    Idle,
    Walking,
    UTurn,
    Rolling,
    Sliding,
    NumStates,
};

