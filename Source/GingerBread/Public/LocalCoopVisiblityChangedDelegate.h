#pragma once
#include "CoreMinimal.h"
#include "LocalCoopVisiblityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLocalCoopVisiblityChanged, bool, visible);

