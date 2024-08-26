#pragma once
#include "CoreMinimal.h"
#include "EESportsBoardSectionType.generated.h"

UENUM(BlueprintType)
enum class EESportsBoardSectionType : uint8 {
    MyPosition,
    Global,
    Friends,
    Count,
};

