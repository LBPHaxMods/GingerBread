#pragma once
#include "CoreMinimal.h"
#include "EGingerbreadMatchStatus.h"
#include "OnMatchStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMatchStatusChanged, EGingerbreadMatchStatus, eMatchStatus);

