#pragma once
#include "CoreMinimal.h"
#include "RhythmicDuopedePickedUpEventDelegate.generated.h"

class ARhythmicDuopedeSegment;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRhythmicDuopedePickedUpEvent, ARhythmicDuopedeSegment*, DuopedeRef);

