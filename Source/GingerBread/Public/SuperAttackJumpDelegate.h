#pragma once
#include "CoreMinimal.h"
#include "SuperAttackJumpDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSuperAttackJump, bool, IsGoingAway);

