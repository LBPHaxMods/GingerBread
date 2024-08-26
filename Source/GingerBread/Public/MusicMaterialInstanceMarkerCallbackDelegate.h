#pragma once
#include "CoreMinimal.h"
#include "MusicMaterialInstanceMarkerCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FMusicMaterialInstanceMarkerCallback, const FName&, MarkerLabel);

