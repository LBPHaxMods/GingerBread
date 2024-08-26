#pragma once
#include "CoreMinimal.h"
#include "EMaterialDataTypes.generated.h"

UENUM(BlueprintType)
enum class EMaterialDataTypes : uint8 {
    Scalar,
    Vector,
    Bool,
    Texture,
};

