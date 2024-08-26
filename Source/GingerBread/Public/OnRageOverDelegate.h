#pragma once
#include "CoreMinimal.h"
#include "EVexEncounterPhase.h"
#include "OnRageOverDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRageOver, EVexEncounterPhase, Phase);

