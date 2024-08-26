#pragma once
#include "CoreMinimal.h"
#include "GingerbreadPlayerId.h"
#include "OnSavePerPlayerCreatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSavePerPlayerCreated, const FGingerbreadPlayerId&, PlayerId);

