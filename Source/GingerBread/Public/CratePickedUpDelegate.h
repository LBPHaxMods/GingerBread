#pragma once
#include "CoreMinimal.h"
#include "CratePickedUpDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCratePickedUp, ASackboy*, Sackboy);

