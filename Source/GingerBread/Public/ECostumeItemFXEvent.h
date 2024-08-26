#pragma once
#include "CoreMinimal.h"
#include "ECostumeItemFXEvent.generated.h"

UENUM(BlueprintType)
enum class ECostumeItemFXEvent : uint8 {
    OnSackboyIdle,
    OnSackboyDamage,
    OnSackboyFlutterJump,
    OnSackboyRollRun,
    OnSackboyDeath,
    Count,
};

