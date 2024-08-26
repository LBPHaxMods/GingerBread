#pragma once
#include "CoreMinimal.h"
#include "EWorldDebugMenuRowType.generated.h"

UENUM(BlueprintType)
enum class EWorldDebugMenuRowType : uint8 {
    Header,
    EmptyPadding,
    UnlockHimalaya,
    UnlockAmazon,
    UnlockUndersea,
    UnlockSpace,
    UnlockCraftworld,
    UnlockVoid,
    Count,
};

