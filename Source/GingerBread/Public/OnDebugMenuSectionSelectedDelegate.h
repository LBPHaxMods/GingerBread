#pragma once
#include "CoreMinimal.h"
#include "OnDebugMenuSectionSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDebugMenuSectionSelected, const FName, sectionName);

