#pragma once
#include "CoreMinimal.h"
#include "SlapExtenderExtendedDelegate.generated.h"

class ASlapExtender;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSlapExtenderExtended, ASlapExtender*, SlapExtender);

