#pragma once
#include "CoreMinimal.h"
#include "RhythmicDuopedeSectionKilledDelegate.generated.h"

class ARhythmicDuopedeSegment;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRhythmicDuopedeSectionKilled, ARhythmicDuopedeSegment*, DuopedeRef);

