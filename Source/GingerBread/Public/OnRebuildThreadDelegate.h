#pragma once
#include "CoreMinimal.h"
#include "OnRebuildThreadDelegate.generated.h"

class Asackthread;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRebuildThread, Asackthread*, Thread);

