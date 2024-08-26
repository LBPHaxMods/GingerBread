#pragma once
#include "CoreMinimal.h"
#include "VexFinalStunStateUpdateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVexFinalStunStateUpdateDelegate, bool, IsStunned);

