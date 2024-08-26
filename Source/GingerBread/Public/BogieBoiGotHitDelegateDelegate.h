#pragma once
#include "CoreMinimal.h"
#include "BogieBoiGotHitDelegateDelegate.generated.h"

class AActor;
class ABogieBoi;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBogieBoiGotHitDelegate, ABogieBoi*, BogieBoi, AActor*, HitBy);

