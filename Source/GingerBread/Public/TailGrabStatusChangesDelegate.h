#pragma once
#include "CoreMinimal.h"
#include "TailGrabStatusChangesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTailGrabStatusChanges, bool, IsGrabbed);

