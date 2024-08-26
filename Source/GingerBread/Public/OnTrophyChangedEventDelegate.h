#pragma once
#include "CoreMinimal.h"
#include "TrophyMeterInfo.h"
#include "OnTrophyChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTrophyChangedEvent, FTrophyMeterInfo, TrophyInfo);

