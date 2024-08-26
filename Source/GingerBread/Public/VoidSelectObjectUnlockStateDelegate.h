#pragma once
#include "CoreMinimal.h"
#include "EVoidSelectObjectUnlockState.h"
#include "VoidSelectObjectUnlockStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FVoidSelectObjectUnlockState, EVoidSelectObjectUnlockState&, OutState);

