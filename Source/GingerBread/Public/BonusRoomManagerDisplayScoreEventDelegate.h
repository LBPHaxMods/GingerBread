#pragma once
#include "CoreMinimal.h"
#include "BonusLevelScoreData.h"
#include "BonusRoomManagerDisplayScoreEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBonusRoomManagerDisplayScoreEvent, const TArray<FBonusLevelScoreData>&, Scorelist);

