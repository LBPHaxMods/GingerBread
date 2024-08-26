#pragma once
#include "CoreMinimal.h"
#include "OnVortexFinishedDelegate.generated.h"

class AVexVortex;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVortexFinished, AVexVortex*, FinishedVortex);

