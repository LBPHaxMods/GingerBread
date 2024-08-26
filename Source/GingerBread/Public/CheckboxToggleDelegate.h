#pragma once
#include "CoreMinimal.h"
#include "CheckboxToggleDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCheckboxToggle, bool, bChecked);

