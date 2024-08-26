#pragma once
#include "CoreMinimal.h"
#include "SettingType.generated.h"

UENUM(BlueprintType)
enum class SettingType : uint8 {
    Unset,
    String,
    Int,
    Float,
    Bool,
};

