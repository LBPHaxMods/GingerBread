#pragma once
#include "CoreMinimal.h"
#include "GameStateDestroyedDelegate.generated.h"

class AGingerbreadGameState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameStateDestroyed, AGingerbreadGameState*, State);

