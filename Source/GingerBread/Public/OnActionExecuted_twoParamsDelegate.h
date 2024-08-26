#pragma once
#include "CoreMinimal.h"
#include "VariableChangedUserData.h"
#include "OnActionExecuted_twoParamsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnActionExecuted_twoParams, float, variableValue, const FVariableChangedUserData&, UserData);

