#pragma once
#include "CoreMinimal.h"
#include "TutorialEventDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialEvent, ASackboy*, Sackboy);

