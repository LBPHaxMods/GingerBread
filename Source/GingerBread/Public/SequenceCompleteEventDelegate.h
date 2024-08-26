#pragma once
#include "CoreMinimal.h"
#include "SequenceCompleteEventDelegate.generated.h"

class UWorldMapMiniSequence;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSequenceCompleteEvent, UWorldMapMiniSequence*, MiniSequence);

