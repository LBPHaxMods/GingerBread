#pragma once
#include "CoreMinimal.h"
#include "EPopshotTailState.h"
#include "PopshotTailStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPopshotTailStateChanged, EPopshotTailState, new_state);

