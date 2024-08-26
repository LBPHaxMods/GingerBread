#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ToyThrowEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FToyThrowEvent, ASackboy*, Sackboy, const FVector, throwVelocity, int32, throwPower);

