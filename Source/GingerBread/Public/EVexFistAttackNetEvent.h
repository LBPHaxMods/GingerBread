#pragma once
#include "CoreMinimal.h"
#include "EVexFistAttackNetEvent.generated.h"

UENUM(BlueprintType)
enum class EVexFistAttackNetEvent : uint8 {
    ThrowStandardParameters,
    ThrowExtraParameters,
    DespawnDisappearPoof,
    DespawnBeginOverlap,
    DespawnVexDefeated,
};

