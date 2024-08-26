#pragma once
#include "CoreMinimal.h"
#include "ECrushingPistonState.h"
#include "OnCrushingPistonStateChangedDelegate.generated.h"

class ACrushingPiston;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCrushingPistonStateChanged, ACrushingPiston*, CrushingPiston, ECrushingPistonState, NewState);

