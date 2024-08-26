#pragma once
#include "CoreMinimal.h"
#include "EVexFinalTricksterAttackType.h"
#include "VexFinalTricksterAttackSimpleDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVexFinalTricksterAttackSimpleDelegate, EVexFinalTricksterAttackType, AttackType);

