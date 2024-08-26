#pragma once
#include "CoreMinimal.h"
#include "VariableChangedUserData.h"
#include "OnBoolDebugVariableChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnBoolDebugVariableChanged, bool, variableValue, const FVariableChangedUserData&, UserData);

