#pragma once
#include "CoreMinimal.h"
#include "SplineSubjectSpawnedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSplineSubjectSpawned, AActor*, Subject);

