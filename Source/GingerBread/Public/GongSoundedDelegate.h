#pragma once
#include "CoreMinimal.h"
#include "GongSoundedDelegate.generated.h"

class ADinnerGong;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGongSounded, ADinnerGong*, DinnerGong);

