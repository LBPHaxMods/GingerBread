#pragma once
#include "CoreMinimal.h"
#include "EVexEncounterPhase.h"
#include "OnRageStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRageStarted, EVexEncounterPhase, Phase);

