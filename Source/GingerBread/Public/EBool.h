#pragma once
#include "CoreMinimal.h"
#include "EBool.generated.h"

UENUM(BlueprintType)
enum class EBool : uint8 {
    B_FALSE,
    B_TRUE,
    B_UNSET = 255,
};

