#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VectorAxisActionDelegateDelegate.generated.h"

class AGingerbreadPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FVectorAxisActionDelegate, AGingerbreadPlayerController*, PlayerController, FVector, AxisValue);

