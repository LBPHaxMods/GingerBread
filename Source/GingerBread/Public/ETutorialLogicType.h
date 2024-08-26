#pragma once
#include "CoreMinimal.h"
#include "ETutorialLogicType.generated.h"

UENUM(BlueprintType)
enum class ETutorialLogicType : uint8 {
    None,
    NumberOfJumps,
    NumberOfSlaps,
    RollingTime,
    ObjectHoldTime,
    GrabTime,
    PowerUpUsageCount,
    CraftCutterThrowCount,
    HeadStompCount,
    GrappleAttemptCount,
    GrappleSuccessCount,
    TiltPlatformMovementTime,
    HoverTime,
    BlasterFireCount,
    PlayerPickUpCount,
    ToyDisengageCount,
    DropThroughCount,
    WobbleBombPickupCount,
    NumberOfBouncePadJumps,
    SnowballDisengageCount,
};

