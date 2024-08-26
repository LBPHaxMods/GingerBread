#pragma once
#include "CoreMinimal.h"
#include "BogieBoiGenericDelegateDelegate.generated.h"

class ABogieBoi;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBogieBoiGenericDelegate, ABogieBoi*, BogieBoi);

