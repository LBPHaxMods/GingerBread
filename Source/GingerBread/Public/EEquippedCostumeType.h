#pragma once
#include "CoreMinimal.h"
#include "EEquippedCostumeType.generated.h"

UENUM(BlueprintType)
enum class EEquippedCostumeType : uint8 {
    EquippedType_None,
    EquippedType_Costume,
    EquippedType_Hanger,
    Count,
};

