#pragma once
#include "CoreMinimal.h"
#include "EProogleLaunchType.generated.h"

UENUM(BlueprintType)
enum class EProogleLaunchType : uint8 {
    BigHop,
    LittleHop,
    NumStates,
};

