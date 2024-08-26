#pragma once
#include "CoreMinimal.h"
#include "MusicMaterialInstanceBeatMultiCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMusicMaterialInstanceBeatMultiCallback, int32, BeatIndex);

