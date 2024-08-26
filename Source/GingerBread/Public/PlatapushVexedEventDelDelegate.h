#pragma once
#include "CoreMinimal.h"
#include "PlatapushVexedEventDelDelegate.generated.h"

class APlatapushVexed;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlatapushVexedEventDel, APlatapushVexed*, Platapush);

