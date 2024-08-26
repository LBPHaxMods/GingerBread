#pragma once
#include "CoreMinimal.h"
#include "ESackboyToyAbility.h"
#include "ToyAbilityEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FToyAbilityEvent, ESackboyToyAbility, Ability);

