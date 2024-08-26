#pragma once
#include "CoreMinimal.h"
#include "UIScreenStackChangeDelegate.generated.h"

class UGingerbreadScreen;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIScreenStackChange, UGingerbreadScreen*, Screen);

