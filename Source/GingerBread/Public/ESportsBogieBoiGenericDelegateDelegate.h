#pragma once
#include "CoreMinimal.h"
#include "ESportsBogieBoiGenericDelegateDelegate.generated.h"

class AESportsBogieBoi;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FESportsBogieBoiGenericDelegate, AESportsBogieBoi*, ESportsBogieBoi);

