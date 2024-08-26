#pragma once
#include "CoreMinimal.h"
#include "GotHitDelegate.generated.h"

class AWAMMole;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGotHit, AWAMMole*, Mole);

