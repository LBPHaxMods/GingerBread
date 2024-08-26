#pragma once
#include "CoreMinimal.h"
#include "CrateDamagedDelegate.generated.h"

class ACrateBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCrateDamaged, ACrateBase*, Crate);

