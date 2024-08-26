#pragma once
#include "CoreMinimal.h"
#include "ESportsSlapExtenderExtendingDelegate.generated.h"

class AESportsSlapExtender;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FESportsSlapExtenderExtending, AESportsSlapExtender*, ESportsSlapExtender);

