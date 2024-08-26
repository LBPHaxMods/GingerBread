#pragma once
#include "CoreMinimal.h"
#include "SpinAttackEmergencyStopSettings.h"
#include "MeanieSpinEmergencyStopEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMeanieSpinEmergencyStopEvent, FSpinAttackEmergencyStopSettings, EmergencyStopSettings);

