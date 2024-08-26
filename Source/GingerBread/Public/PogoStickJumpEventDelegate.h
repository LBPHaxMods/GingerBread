#pragma once
#include "CoreMinimal.h"
#include "PogoStickJumpEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPogoStickJumpEvent, bool, bigJump, float, jumpStrength);

