#pragma once
#include "CoreMinimal.h"
#include "MusicMaterialInstanceBarMultiCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMusicMaterialInstanceBarMultiCallback, int32, BarIndex);

