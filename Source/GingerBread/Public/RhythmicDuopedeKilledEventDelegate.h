#pragma once
#include "CoreMinimal.h"
#include "RhythmicDuopedeKilledEventDelegate.generated.h"

class ARhythmicDuopedeSegment;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRhythmicDuopedeKilledEvent, ARhythmicDuopedeSegment*, DuopedeRef);

