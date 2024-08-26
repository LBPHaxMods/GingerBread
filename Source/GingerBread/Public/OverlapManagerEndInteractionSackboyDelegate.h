#pragma once
#include "CoreMinimal.h"
#include "OverlapManagerEndInteractionSackboyDelegate.generated.h"

class ASackboy;
class UInteractionComponent;
class UOverlapManagerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOverlapManagerEndInteractionSackboy, UOverlapManagerComponent*, OverlapManagerComponent, UInteractionComponent*, OverlappedComponent, ASackboy*, OtherSackboy, UInteractionComponent*, OtherComp);

