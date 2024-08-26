#pragma once
#include "CoreMinimal.h"
#include "OverlapManagerEndOverlapSackboyDelegate.generated.h"

class ASackboy;
class UOverlapManagerComponent;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOverlapManagerEndOverlapSackboy, UOverlapManagerComponent*, OverlapManagerComponent, UPrimitiveComponent*, OverlappedComponent, ASackboy*, OtherSackboy, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex);

