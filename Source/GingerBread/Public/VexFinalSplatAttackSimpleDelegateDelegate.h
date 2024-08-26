#pragma once
#include "CoreMinimal.h"
#include "VexFinalSplatAttackSimpleDelegateDelegate.generated.h"

class AVexFinalSplatAttack;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVexFinalSplatAttackSimpleDelegate, AVexFinalSplatAttack*, SplatAttack);

