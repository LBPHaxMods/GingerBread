#pragma once
#include "CoreMinimal.h"
#include "MusicStateTableRow.h"
#include "OnRhythmManagerMusicStateChangedDelegate.generated.h"

class ARhythmManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRhythmManagerMusicStateChanged, ARhythmManager*, RhythmManager, FMusicStateTableRow, NewMusicState, FMusicStateTableRow, PreviousMusicState);

