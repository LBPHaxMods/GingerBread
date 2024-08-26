#pragma once
#include "CoreMinimal.h"
#include "MusicMaterialInstanceMarkerMultiCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMusicMaterialInstanceMarkerMultiCallback, const FName&, MarkerLabel);

