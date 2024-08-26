#pragma once
#include "CoreMinimal.h"
#include "GameStateCreatedDelegate.generated.h"

class AGingerbreadGameState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameStateCreated, AGingerbreadGameState*, State);

