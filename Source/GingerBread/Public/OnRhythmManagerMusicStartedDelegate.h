#pragma once
#include "CoreMinimal.h"
#include "OnRhythmManagerMusicStartedDelegate.generated.h"

class ARhythmManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRhythmManagerMusicStarted, ARhythmManager*, RhythmManager, float, BeatDuration);

