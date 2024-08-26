#pragma once
#include "CoreMinimal.h"
#include "OnStartDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStart, ASackboy*, Sackboy);

