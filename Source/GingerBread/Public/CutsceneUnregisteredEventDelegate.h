#pragma once
#include "CoreMinimal.h"
#include "CutsceneUnregisteredEventDelegate.generated.h"

class AGingerbreadLevelSequenceActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCutsceneUnregisteredEvent, AGingerbreadLevelSequenceActor*, Sequence, int32, SequenceCount);

