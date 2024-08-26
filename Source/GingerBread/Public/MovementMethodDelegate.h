#pragma once
#include "CoreMinimal.h"
#include "MovementMethodDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FMovementMethod, float, DeltaTime);

