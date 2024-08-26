#pragma once
#include "CoreMinimal.h"
#include "MusicMaterialInstanceUserCueCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FMusicMaterialInstanceUserCueCallback, const FName&, UserCue);

