#pragma once
#include "CoreMinimal.h"
#include "SubjectSplineVirtualEndDelegateDelegate.generated.h"

class USplineLeaderSubjectComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSubjectSplineVirtualEndDelegate, USplineLeaderSubjectComponent*, SplineLeaderSubject, bool, WasTravellingForward);

