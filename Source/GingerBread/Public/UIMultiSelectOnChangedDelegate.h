#pragma once
#include "CoreMinimal.h"
#include "UIMultiSelectData.h"
#include "UIMultiSelectOnChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIMultiSelectOnChanged, FUIMultiSelectData, SelectionData);

