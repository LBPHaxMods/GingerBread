#pragma once
#include "CoreMinimal.h"
#include "NetworkSessionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FNetworkSessionDelegate, bool, Result);

