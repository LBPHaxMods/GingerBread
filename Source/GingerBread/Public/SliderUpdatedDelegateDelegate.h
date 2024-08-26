#pragma once
#include "CoreMinimal.h"
#include "SliderUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSliderUpdatedDelegate, float, Alpha);

