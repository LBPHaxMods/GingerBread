#pragma once
#include "CoreMinimal.h"
#include "SliderMovementDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSliderMovementDelegate, float, DeltaMove, bool, HasSackboy);

