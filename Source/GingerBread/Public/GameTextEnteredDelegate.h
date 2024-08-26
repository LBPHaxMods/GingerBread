#pragma once
#include "CoreMinimal.h"
#include "GameTextEnteredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameTextEntered, const FText&, Result, bool, Completed);

