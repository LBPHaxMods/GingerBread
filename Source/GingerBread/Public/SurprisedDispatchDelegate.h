#pragma once
#include "CoreMinimal.h"
#include "SurprisedDispatchDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSurprisedDispatch, AActor*, LookAtActor);

