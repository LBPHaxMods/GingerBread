#pragma once
#include "CoreMinimal.h"
#include "BeginFadeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBeginFade, bool, bFadeIn);

