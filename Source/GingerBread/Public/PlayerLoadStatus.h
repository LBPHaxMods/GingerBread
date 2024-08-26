#pragma once
#include "CoreMinimal.h"
#include "PlayerLoadStatus.generated.h"

UENUM(BlueprintType)
enum class PlayerLoadStatus : uint8 {
    SuccessExistingPlayer,
    SuccessNewPlayer,
    CannotAllocateSpace,
    CorruptAskForOverwrite,
    ForceOverwrite,
    CorruptWipeComplete,
};

