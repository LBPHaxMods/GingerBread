#pragma once
#include "CoreMinimal.h"
#include "ProximityActivatorEventSignatureDelegate.generated.h"

class AProximityActivator;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProximityActivatorEventSignature, AProximityActivator*, ProximityActivator);

