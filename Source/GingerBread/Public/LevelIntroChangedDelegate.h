#pragma once
#include "CoreMinimal.h"
#include "LevelIntroChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelIntroChanged, bool, IsShown);

