#pragma once
#include "CoreMinimal.h"
#include "EStompysteinPhase.h"
#include "StompysteinPhaseChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStompysteinPhaseChange, EStompysteinPhase, NewPhase);

