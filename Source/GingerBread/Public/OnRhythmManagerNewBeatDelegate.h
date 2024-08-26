#pragma once
#include "CoreMinimal.h"
#include "OnRhythmManagerNewBeatDelegate.generated.h"

class ARhythmManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnRhythmManagerNewBeat, ARhythmManager*, RhythmManager, FName, CueName, int32, CurrentBeat, int32, BeatsPerBar, int32, TotalBeatCount, float, BeatDuration);

