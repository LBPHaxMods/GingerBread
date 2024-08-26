#pragma once
#include "CoreMinimal.h"
#include "MusicEventType.h"
#include "AkMusicEventCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_NineParams(FAkMusicEventCallback, TEnumAsByte<MusicEventType>, MusicEvent, float, BarDuration, float, BeatDuration, FName, CueName, int32, CurrentBar, int32, CurrentBeat, int32, BeatsPerBar, int32, SectionBeatCount, int32, TotalBeatCount);

