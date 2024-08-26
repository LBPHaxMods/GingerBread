#pragma once
#include "CoreMinimal.h"
#include "ENodeType.generated.h"

UENUM(BlueprintType)
enum class ENodeType : uint8 {
    NONE,
    TAB,
    MENU,
    EXECUTABLE,
};

