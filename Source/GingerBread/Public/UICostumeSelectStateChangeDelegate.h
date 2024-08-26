#pragma once
#include "CoreMinimal.h"
#include "EUICostumeSelectState.h"
#include "GingerbreadPlayerId.h"
#include "UICostumeSelectStateChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUICostumeSelectStateChange, FGingerbreadPlayerId, PlayerId, EUICostumeSelectState, NewState);

