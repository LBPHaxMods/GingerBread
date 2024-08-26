#pragma once
#include "CoreMinimal.h"
#include "GingerbreadPlayerId.h"
#include "CostumeAssignedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCostumeAssigned, FGingerbreadPlayerId, PlayerId, const FName, CostumeNameID, bool, IsHanger);

