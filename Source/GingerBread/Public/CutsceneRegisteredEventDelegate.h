#pragma once
#include "CoreMinimal.h"
#include "CutsceneRegisteredEventDelegate.generated.h"

class AGingerbreadLevelSequenceActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCutsceneRegisteredEvent, AGingerbreadLevelSequenceActor*, Sequence, int32, SequenceCount);

