#pragma once
#include "CoreMinimal.h"
#include "GingerbreadPlayerId.h"
#include "RightPressedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRightPressed, FGingerbreadPlayerId, PlayerId, const FName, CostumeNameID, bool, IsHanger);

