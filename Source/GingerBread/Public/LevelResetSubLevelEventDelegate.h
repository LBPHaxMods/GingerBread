#pragma once
#include "CoreMinimal.h"
#include "LevelResetSubLevelEventDelegate.generated.h"

class ULevel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLevelResetSubLevelEvent, ULevel*, SubLevel, FName, LevelPackageName);

