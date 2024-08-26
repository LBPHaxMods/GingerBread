#pragma once
#include "CoreMinimal.h"
#include "EPlayerSlot.generated.h"

UENUM(BlueprintType)
enum class EPlayerSlot : uint8 {
    PLAYER_SLOT_1,
    PLAYER_SLOT_2,
    PLAYER_SLOT_3,
    PLAYER_SLOT_4,
    PLAYER_SLOT_INVALID,
};

