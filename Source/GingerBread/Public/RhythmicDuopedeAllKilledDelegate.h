#pragma once
#include "CoreMinimal.h"
#include "RhythmicDuopedeAllKilledDelegate.generated.h"

class ARhythmicDuopedeSpline;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRhythmicDuopedeAllKilled, ARhythmicDuopedeSpline*, SplineRef);

