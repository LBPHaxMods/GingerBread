#pragma once
#include "CoreMinimal.h"
#include "PostCookEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPostCookEvent, bool, Success);

