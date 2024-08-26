#pragma once
#include "CoreMinimal.h"
#include "GingerbreadPlayerId.h"
#include "CostumeSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCostumeSelected, FGingerbreadPlayerId, PlayerId);

