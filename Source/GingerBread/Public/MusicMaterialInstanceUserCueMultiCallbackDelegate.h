#pragma once
#include "CoreMinimal.h"
#include "MusicMaterialInstanceUserCueMultiCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMusicMaterialInstanceUserCueMultiCallback, const FName&, UserCue);

