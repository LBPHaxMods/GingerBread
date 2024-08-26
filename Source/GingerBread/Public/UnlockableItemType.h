#pragma once
#include "CoreMinimal.h"
#include "UnlockableItemType.generated.h"

UENUM(BlueprintType)
enum class UnlockableItemType : uint8 {
    None,
    CostumeItem,
    Costume,
    Emote,
    ColourTint,
    Collectabell,
};

