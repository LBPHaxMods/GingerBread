#pragma once
#include "CoreMinimal.h"
#include "OnLinkingDisabledDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLinkingDisabled, AActor*, Actor, bool, isImmediate);

