#pragma once
#include "CoreMinimal.h"
#include "SackboyEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSackboyEvent, ASackboy*, theSackboy);

