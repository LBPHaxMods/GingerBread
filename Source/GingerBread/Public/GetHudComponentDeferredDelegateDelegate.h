#pragma once
#include "CoreMinimal.h"
#include "GetHudComponentDeferredDelegateDelegate.generated.h"

class UGingerbreadHUDComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FGetHudComponentDeferredDelegate, UGingerbreadHUDComponent*, HUDComponent);

