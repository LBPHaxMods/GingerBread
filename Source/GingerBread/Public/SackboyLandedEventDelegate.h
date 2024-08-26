#pragma once
#include "CoreMinimal.h"
#include "SackboyLandedEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSackboyLandedEvent, ASackboy*, Sackboy);

