#pragma once
#include "CoreMinimal.h"
#include "OverlapManagerEndOverlapActorDelegate.generated.h"

class AActor;
class UOverlapManagerComponent;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOverlapManagerEndOverlapActor, UOverlapManagerComponent*, OverlapManagerComponent, UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex);

