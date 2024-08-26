#pragma once
#include "CoreMinimal.h"
#include "EVexFinalVoiceLineTriggerType.h"
#include "VexFinalVoiceLineEndedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FVexFinalVoiceLineEndedDelegate, EVexFinalVoiceLineTriggerType, TriggerType, bool, WasInterrupted, bool, FullBodyAnim);

