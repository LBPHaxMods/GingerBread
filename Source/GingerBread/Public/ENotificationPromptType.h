#pragma once
#include "CoreMinimal.h"
#include "ENotificationPromptType.generated.h"

UENUM(BlueprintType)
enum class ENotificationPromptType : uint8 {
    None,
    DLCStore,
    CostumeShop,
    WorldLevelUnlocked,
    VoidLevelUnlocked,
    Tournament,
    TournamentLevelUnlocked,
    Prize,
};

