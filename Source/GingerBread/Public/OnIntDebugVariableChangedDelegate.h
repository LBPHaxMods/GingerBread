#pragma once
#include "CoreMinimal.h"
#include "VariableChangedUserData.h"
#include "OnIntDebugVariableChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnIntDebugVariableChanged, int32, variableValue, const FVariableChangedUserData&, UserData);

