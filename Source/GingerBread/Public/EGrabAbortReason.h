#pragma once
#include "CoreMinimal.h"
#include "EGrabAbortReason.generated.h"

UENUM(BlueprintType)
enum class EGrabAbortReason : uint8 {
    None,
    UserRequestedRelease,
    UserRequestedJump,
    ObjectDestroyed,
    ObjectMoveToUnderworld,
    OffGround,
    Forced,
    Obstructed,
};

