#pragma once
#include "CoreMinimal.h"
#include "OnDeathDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDeath, AActor*, Murderer, AActor*, AIActor);

