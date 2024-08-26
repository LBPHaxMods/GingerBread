#pragma once
#include "CoreMinimal.h"
#include "RollingYeti_LineStateDelegate.generated.h"

class ARollingYeti_Line;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRollingYeti_LineState, ARollingYeti_Line*, Yeti);

