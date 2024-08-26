#pragma once
#include "CoreMinimal.h"
#include "TailComponentOverpulledDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTailComponentOverpulled, ASackboy*, MurdererSackboy);

