#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ToyFootEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FToyFootEvent, ASackboy*, Sackboy, bool, isRightFoot, bool, isLanding, FVector, footNormal, FVector, footPos);

