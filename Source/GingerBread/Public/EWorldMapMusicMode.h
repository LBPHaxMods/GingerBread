#pragma once
#include "CoreMinimal.h"
#include "EWorldMapMusicMode.generated.h"

UENUM(BlueprintType)
enum class EWorldMapMusicMode : uint8 {
    Normal,
    TurnOffOnUnlock,
    TurnOnOnComplete,
};

