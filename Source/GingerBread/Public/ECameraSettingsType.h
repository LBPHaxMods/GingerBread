#pragma once
#include "CoreMinimal.h"
#include "ECameraSettingsType.generated.h"

UENUM(BlueprintType)
enum class ECameraSettingsType : uint8 {
    Gameplay,
    Acting,
    Final,
};

