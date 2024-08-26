#pragma once
#include "CoreMinimal.h"
#include "SackboyEnteredEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSackboyEnteredEvent, ASackboy*, Sackboy);

