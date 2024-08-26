#pragma once
#include "CoreMinimal.h"
#include "SplineSubjectAddedDelegate.generated.h"

class AActor;
class ASplineFollowerLeader;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSplineSubjectAdded, ASplineFollowerLeader*, SubjectsLeader, AActor*, Subject);

