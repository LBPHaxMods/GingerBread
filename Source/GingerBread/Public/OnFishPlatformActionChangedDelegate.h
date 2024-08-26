#pragma once
#include "CoreMinimal.h"
#include "EFishPlatformAction.h"
#include "OnFishPlatformActionChangedDelegate.generated.h"

class AFishPlatform;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFishPlatformActionChanged, AFishPlatform*, FishPlatform, EFishPlatformAction, NewAction, EFishPlatformAction, PreviousAction);

