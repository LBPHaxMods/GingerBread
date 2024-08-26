#pragma once
#include "CoreMinimal.h"
#include "VariableChangedUserData.h"
#include "OnFloatDebugVariableChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFloatDebugVariableChanged, float, variableValue, const FVariableChangedUserData&, UserData);

