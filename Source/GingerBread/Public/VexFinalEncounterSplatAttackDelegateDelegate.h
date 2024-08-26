#pragma once
#include "CoreMinimal.h"
#include "VexFinalEncounterSplatAttackDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVexFinalEncounterSplatAttackDelegate, bool, OutOfStun);

