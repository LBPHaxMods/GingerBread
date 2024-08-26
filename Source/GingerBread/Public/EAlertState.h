#pragma once
#include "CoreMinimal.h"
#include "EAlertState.generated.h"

UENUM(BlueprintType)
enum class EAlertState : uint8 {
    Idle,
    Fight,
    Num,
};

