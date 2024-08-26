#pragma once
#include "CoreMinimal.h"
#include "MusicMaterialInstanceBeatCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FMusicMaterialInstanceBeatCallback, int32, BeatIndex);

