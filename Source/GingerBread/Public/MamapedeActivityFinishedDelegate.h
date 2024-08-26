#pragma once
#include "CoreMinimal.h"
#include "EMamapedeActivity.h"
#include "MamapedeActivityFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMamapedeActivityFinished, EMamapedeActivity, ActivityFinished);

