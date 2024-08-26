#pragma once
#include "CoreMinimal.h"
#include "EDebugVariableType.generated.h"

UENUM(BlueprintType)
enum class EDebugVariableType : uint8 {
    NONE,
    INT,
    FLOAT,
    CHECKBOX,
    SLIDER_FLOAT,
    ACTION_CONSOLE_COMMAND,
    ACTION_DEFINED_CALLBACK,
};

