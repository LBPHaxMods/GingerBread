#pragma once
#include "CoreMinimal.h"
#include "GingerbreadPlayerId.h"
#include "LeftPressedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLeftPressed, FGingerbreadPlayerId, PlayerId, const FName, CostumeNameID, bool, IsHanger);

