#pragma once
#include "CoreMinimal.h"
#include "AboutToBreakDelegate.generated.h"

class ASnowball2;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAboutToBreak, ASnowball2*, Snowball);

