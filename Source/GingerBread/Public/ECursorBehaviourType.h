#pragma once
#include "CoreMinimal.h"
#include "ECursorBehaviourType.generated.h"

UENUM(BlueprintType)
enum class ECursorBehaviourType : uint8 {
    Manual,
    Auto,
    AutoSelect,
};

