#pragma once
#include "CoreMinimal.h"
#include "MamapedeDamageAppliedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMamapedeDamageApplied, AActor*, DamagedActor);

