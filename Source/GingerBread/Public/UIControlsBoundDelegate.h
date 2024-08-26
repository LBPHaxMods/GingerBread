#pragma once
#include "CoreMinimal.h"
#include "UIControlsBoundDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIControlsBound, bool, IsBound);

