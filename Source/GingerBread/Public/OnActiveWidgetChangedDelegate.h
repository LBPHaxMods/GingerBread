#pragma once
#include "CoreMinimal.h"
#include "OnActiveWidgetChangedDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActiveWidgetChanged, UWidget*, DeselectedWidget, UWidget*, SelectedWidget);

