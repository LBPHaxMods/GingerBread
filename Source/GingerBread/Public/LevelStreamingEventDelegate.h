#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLevelStreamingEvent, const FName&, SublevelName);

