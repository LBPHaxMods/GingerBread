#pragma once
#include "CoreMinimal.h"
#include "SlapElevatorEventSignatureDelegate.generated.h"

class ASlapElevator;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSlapElevatorEventSignature, ASlapElevator*, SlapElevatorObj);

