#pragma once
#include "CoreMinimal.h"
#include "ObjectSpitterLaunchedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectSpitterLaunchedDelegate, AActor*, LaunchedActor);

