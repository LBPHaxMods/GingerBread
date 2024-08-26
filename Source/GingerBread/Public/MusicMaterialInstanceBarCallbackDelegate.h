#pragma once
#include "CoreMinimal.h"
#include "MusicMaterialInstanceBarCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FMusicMaterialInstanceBarCallback, int32, BarIndex);

