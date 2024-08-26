#pragma once
#include "CoreMinimal.h"
#include "CrateDestroyedDelegate.generated.h"

class ACrateBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCrateDestroyed, ACrateBase*, Crate);

