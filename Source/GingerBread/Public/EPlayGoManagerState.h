#pragma once
#include "CoreMinimal.h"
#include "EPlayGoManagerState.generated.h"

UENUM(BlueprintType)
enum class EPlayGoManagerState : uint8 {
    Invalid,
    Initialised,
    ValidDataTable,
};

