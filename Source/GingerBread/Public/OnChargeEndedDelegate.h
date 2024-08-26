#pragma once
#include "CoreMinimal.h"
#include "EChargeFinishReason.h"
#include "OnChargeEndedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChargeEnded, EChargeFinishReason, ChargeFinishReason);

