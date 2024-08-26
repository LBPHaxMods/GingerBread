#pragma once
#include "CoreMinimal.h"
#include "ECraftCutterSwitchState.generated.h"

UENUM(BlueprintType)
enum class ECraftCutterSwitchState : uint8 {
    Idle,
    On,
    Deactivating,
};

