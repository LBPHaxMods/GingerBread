#pragma once
#include "CoreMinimal.h"
#include "SlapExtenderRetractingDelegate.generated.h"

class ASlapExtender;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSlapExtenderRetracting, ASlapExtender*, SlapExtender);

