#pragma once
#include "CoreMinimal.h"
#include "AdminPhaseOverDelegate.generated.h"

class UTouchScreenAppAdminPhase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAdminPhaseOver, UTouchScreenAppAdminPhase*, AdminPhase);

