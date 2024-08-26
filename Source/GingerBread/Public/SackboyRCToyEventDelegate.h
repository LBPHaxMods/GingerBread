#pragma once
#include "CoreMinimal.h"
#include "SackboyRCToyEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSackboyRCToyEvent, ASackboy*, Sackboy);

