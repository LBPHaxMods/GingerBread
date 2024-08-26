#pragma once
#include "CoreMinimal.h"
#include "LevelResetEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLevelResetEvent, int32, ResetNumber, bool, AllPlayersDead);

