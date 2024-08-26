#pragma once
#include "CoreMinimal.h"
#include "SlapExtenderRetractedDelegate.generated.h"

class ASlapExtender;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSlapExtenderRetracted, ASlapExtender*, SlapExtender);

