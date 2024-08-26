#pragma once
#include "CoreMinimal.h"
#include "KeyActionDelegateDelegate.generated.h"

class AGingerbreadPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FKeyActionDelegate, AGingerbreadPlayerController*, PlayerController);

