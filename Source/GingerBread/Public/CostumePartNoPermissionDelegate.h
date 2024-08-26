#pragma once
#include "CoreMinimal.h"
#include "GingerbreadPlayerId.h"
#include "CostumePartNoPermissionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCostumePartNoPermission, const FGingerbreadPlayerId&, PlayerId, int32, HangerID, const FName&, costumeName);

