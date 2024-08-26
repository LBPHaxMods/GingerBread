#pragma once
#include "CoreMinimal.h"
#include "FinalSackboyLandedEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FFinalSackboyLandedEvent, const TArray<ASackboy*>&, Sackboys);

