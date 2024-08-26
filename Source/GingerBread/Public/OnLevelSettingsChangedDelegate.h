#pragma once
#include "CoreMinimal.h"
#include "OnLevelSettingsChangedDelegate.generated.h"

class AGingerbreadLevelSettings;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLevelSettingsChanged, AGingerbreadLevelSettings*, newSettings);

