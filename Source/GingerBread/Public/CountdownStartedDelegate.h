#pragma once
#include "CoreMinimal.h"
#include "CountdownStartedDelegate.generated.h"

class ARemixRaceStart;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCountdownStarted, ARemixRaceStart*, StartGate);

