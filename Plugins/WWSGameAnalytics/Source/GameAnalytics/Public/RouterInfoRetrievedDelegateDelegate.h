#pragma once
#include "CoreMinimal.h"
#include "RouterInfoRetrievedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRouterInfoRetrievedDelegate, bool, Success, const FString&, Manufacturer, const FString&, Model);

