#pragma once
#include "CoreMinimal.h"
#include "SubjectSplinePhysicalEndDelegateDelegate.generated.h"

class USplineLeaderSubjectComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSubjectSplinePhysicalEndDelegate, USplineLeaderSubjectComponent*, SplineLeaderSubject);

