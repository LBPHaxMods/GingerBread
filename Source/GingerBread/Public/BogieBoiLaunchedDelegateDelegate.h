#pragma once
#include "CoreMinimal.h"
#include "BogieBoiLaunchedDelegateDelegate.generated.h"

class AActor;
class ABogieBoi;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBogieBoiLaunchedDelegate, ABogieBoi*, BogieBoi, const TArray<AActor*>&, LaunchedActors);

