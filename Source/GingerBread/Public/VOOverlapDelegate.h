#pragma once
#include "CoreMinimal.h"
#include "VOOverlapDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVOOverlap, const FString&, Key);

