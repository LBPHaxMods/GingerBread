#pragma once
#include "CoreMinimal.h"
#include "ELaserModuleNaomiAudioType.generated.h"

UENUM(BlueprintType)
enum class ELaserModuleNaomiAudioType : uint8 {
    Static,
    BackAndForth,
    CircularRotation,
};

