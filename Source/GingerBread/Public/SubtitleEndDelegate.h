#pragma once
#include "CoreMinimal.h"
#include "SubtitleEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSubtitleEnd, const FString&, Key);

