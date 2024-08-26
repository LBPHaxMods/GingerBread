#pragma once
#include "CoreMinimal.h"
#include "BillboardBlasterHitDelegate.generated.h"

class ABillboardBlaster;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBillboardBlasterHit, ABillboardBlaster*, BillboardBlaster);

