#pragma once
#include "CoreMinimal.h"
#include "FinalSackboyEnteredEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FFinalSackboyEnteredEvent, const TArray<ASackboy*>&, Sackboys);

