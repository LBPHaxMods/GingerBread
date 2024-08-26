#pragma once
#include "CoreMinimal.h"
#include "SeesawEventSignatureDelegate.generated.h"

class ASeesawBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSeesawEventSignature, ASeesawBase*, SeesawObj, bool, isForwardEnd);

