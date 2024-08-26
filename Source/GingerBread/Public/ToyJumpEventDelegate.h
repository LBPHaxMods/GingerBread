#pragma once
#include "CoreMinimal.h"
#include "ToyJumpEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FToyJumpEvent, ASackboy*, Sackboy, bool, isFlutterJump, bool, isfromRoll, bool, isFromEvade, bool, isFromSlap);

