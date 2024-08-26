#pragma once
#include "CoreMinimal.h"
#include "NaomiSplineCorruptionDestroyedDelegate.generated.h"

class ANaomiSplineCorruption;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNaomiSplineCorruptionDestroyed, ANaomiSplineCorruption*, DestroyedCorruption);

