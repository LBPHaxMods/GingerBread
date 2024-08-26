#pragma once
#include "CoreMinimal.h"
#include "ERhythmicBeatRangeOverlapPreference.generated.h"

UENUM(BlueprintType)
namespace ERhythmicBeatRangeOverlapPreference {
    enum Type {
        PreferOlder,
        PreferNewer,
    };
}

