#pragma once
#include "CoreMinimal.h"
#include "OnVexedDuopedeSegmentKilledDelegate.generated.h"

class AVexableDuopedeSegment;
class AVexableDuopedeSpline;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVexedDuopedeSegmentKilled, AVexableDuopedeSpline*, Spline, AVexableDuopedeSegment*, Segment);

