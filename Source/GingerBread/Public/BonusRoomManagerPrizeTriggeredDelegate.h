#pragma once
#include "CoreMinimal.h"
#include "BonusRoomManagerPrizeTriggeredDelegate.generated.h"

class AActor;
class ABonusRoomManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBonusRoomManagerPrizeTriggered, ABonusRoomManager*, BonusRoomManager, AActor*, TriggeredFrom);

