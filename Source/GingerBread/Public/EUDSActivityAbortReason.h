#pragma once
#include "CoreMinimal.h"
#include "EUDSActivityAbortReason.generated.h"

UENUM(BlueprintType)
enum class EUDSActivityAbortReason : uint8 {
    None,
    Abandon,
    Fail,
    Complete,
};

