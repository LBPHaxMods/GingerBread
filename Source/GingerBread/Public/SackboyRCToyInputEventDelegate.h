#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SackboyRCToyInputEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSackboyRCToyInputEvent, ASackboy*, Sackboy, FVector, stick_input, bool, actionA, bool, actionB);

