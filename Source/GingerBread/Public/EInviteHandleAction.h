#pragma once
#include "CoreMinimal.h"
#include "EInviteHandleAction.generated.h"

UENUM(BlueprintType)
enum class EInviteHandleAction : uint8 {
    DoNothing,
    Decline,
    Accept,
};

