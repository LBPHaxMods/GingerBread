#pragma once
#include "CoreMinimal.h"
#include "ESportsBogieBoiGotHitDelegateDelegate.generated.h"

class AActor;
class AESportsBogieBoi;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FESportsBogieBoiGotHitDelegate, AESportsBogieBoi*, ESportsBogieBoi, AActor*, HitBy);

