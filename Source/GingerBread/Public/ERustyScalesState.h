#pragma once
#include "CoreMinimal.h"
#include "ERustyScalesState.generated.h"

UENUM()
enum class ERustyScalesState : int32 {
    Inactive,
    Activating,
    Active,
    Deactivating,
};

