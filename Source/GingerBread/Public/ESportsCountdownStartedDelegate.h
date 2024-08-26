#pragma once
#include "CoreMinimal.h"
#include "ESportsCountdownStartedDelegate.generated.h"

class AESportsRaceStart;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FESportsCountdownStarted, AESportsRaceStart*, StartGate);

