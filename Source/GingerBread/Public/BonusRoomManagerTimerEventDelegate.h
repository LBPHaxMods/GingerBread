#pragma once
#include "CoreMinimal.h"
#include "BonusRoomManagerTimerEventDelegate.generated.h"

class ABonusRoomManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBonusRoomManagerTimerEvent, ABonusRoomManager*, BonusRoomManager, float, TimeRemaining);

