#pragma once
#include "CoreMinimal.h"
#include "VariableChangedUserData.h"
#include "OnFloatSliderDebugVariableChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FOnFloatSliderDebugVariableChanged, float, variableValue, float, Min, float, Max, const FVariableChangedUserData&, UserData);

