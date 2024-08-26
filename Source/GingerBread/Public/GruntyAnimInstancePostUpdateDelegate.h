#pragma once
#include "CoreMinimal.h"
#include "GruntyAnimInstancePostUpdateDelegate.generated.h"

class AGrunty;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGruntyAnimInstancePostUpdate, AGrunty*, Grunty);

