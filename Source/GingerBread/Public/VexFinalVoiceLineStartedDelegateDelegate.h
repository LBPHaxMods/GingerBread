#pragma once
#include "CoreMinimal.h"
#include "EVexFinalVoiceLineType.h"
#include "VexFinalVoiceLineStartedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVexFinalVoiceLineStartedDelegate, EVexFinalVoiceLineType, VoiceLineType, bool, FullBodyAnim);

