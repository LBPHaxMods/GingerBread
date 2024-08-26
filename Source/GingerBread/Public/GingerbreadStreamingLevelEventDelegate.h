#pragma once
#include "CoreMinimal.h"
#include "GingerbreadStreamingLevelEventDelegate.generated.h"

class UGingerbreadStreamingLevel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGingerbreadStreamingLevelEvent, UGingerbreadStreamingLevel*, StreamingLevel);

