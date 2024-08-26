#pragma once
#include "CoreMinimal.h"
#include "UIVoiceActivityChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIVoiceActivityChange, bool, IsTalking);

