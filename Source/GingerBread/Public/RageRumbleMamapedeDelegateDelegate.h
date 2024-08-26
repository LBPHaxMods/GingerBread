#pragma once
#include "CoreMinimal.h"
#include "EMamapedeFightPhase.h"
#include "RageRumbleMamapedeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRageRumbleMamapedeDelegate, EMamapedeFightPhase, NextPhase);

