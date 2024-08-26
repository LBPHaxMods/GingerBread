#pragma once
#include "CoreMinimal.h"
#include "KeyActionEventDelegate.generated.h"

class AGingerbreadPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKeyActionEvent, AGingerbreadPlayerController*, PlayerController);

