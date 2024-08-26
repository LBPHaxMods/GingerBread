#pragma once
#include "CoreMinimal.h"
#include "PlatapushEventDelDelegate.generated.h"

class APlatapush;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlatapushEventDel, APlatapush*, Platapush);

