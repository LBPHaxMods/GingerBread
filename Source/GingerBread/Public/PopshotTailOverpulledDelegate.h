#pragma once
#include "CoreMinimal.h"
#include "PopshotTailOverpulledDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPopshotTailOverpulled, ASackboy*, Sackboy);
