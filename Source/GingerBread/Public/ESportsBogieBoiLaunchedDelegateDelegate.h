#pragma once
#include "CoreMinimal.h"
#include "ESportsBogieBoiLaunchedDelegateDelegate.generated.h"

class AActor;
class AESportsBogieBoi;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FESportsBogieBoiLaunchedDelegate, AESportsBogieBoi*, ESportsBogieBoi, const TArray<AActor*>&, LaunchedActors);

