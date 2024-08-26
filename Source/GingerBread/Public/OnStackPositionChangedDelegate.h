#pragma once
#include "CoreMinimal.h"
#include "EGruntyStackPosition.h"
#include "OnStackPositionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStackPositionChanged, EGruntyStackPosition, NewPosition);

