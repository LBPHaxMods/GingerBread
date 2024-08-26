#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EScoreSource.h"
#include "AwardScoreEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAwardScoreEvent, ASackboy*, Sackboy, EScoreSource, Source, FVector_NetQuantize100, event_position, int32, Points);

