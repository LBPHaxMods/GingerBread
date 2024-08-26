#pragma once
#include "CoreMinimal.h"
#include "EMeanieFightPhase.h"
#include "MeaniePhaseEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMeaniePhaseEvent, EMeanieFightPhase, NewPhase);

