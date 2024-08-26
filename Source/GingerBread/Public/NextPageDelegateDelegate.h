#pragma once
#include "CoreMinimal.h"
#include "NextPageDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNextPageDelegate, int32, NewPage);

