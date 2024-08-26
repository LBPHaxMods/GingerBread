#pragma once
#include "CoreMinimal.h"
#include "BlueScreenDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueScreenDelegate, float, Duration);

