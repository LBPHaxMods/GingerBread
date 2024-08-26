#pragma once
#include "CoreMinimal.h"
#include "NFLastManStandingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FNFLastManStandingChanged, int32, NumPlayers, int32, LivePlayers, int32, MaxLives, int32, CurrentLives);

