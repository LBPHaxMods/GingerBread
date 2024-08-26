#pragma once
#include "CoreMinimal.h"
#include "ERideOnEventZoneType.generated.h"

UENUM(BlueprintType)
enum class ERideOnEventZoneType : uint8 {
    NoCondition_Sequential_OneShot,
    Conditional_All_Looped,
};

