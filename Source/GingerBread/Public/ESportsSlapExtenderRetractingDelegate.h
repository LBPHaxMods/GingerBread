#pragma once
#include "CoreMinimal.h"
#include "ESportsSlapExtenderRetractingDelegate.generated.h"

class AESportsSlapExtender;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FESportsSlapExtenderRetracting, AESportsSlapExtender*, ESportsSlapExtender);

