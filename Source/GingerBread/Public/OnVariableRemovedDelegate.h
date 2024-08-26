#pragma once
#include "CoreMinimal.h"
#include "OnVariableRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnVariableRemoved, const FName, variablePath);

