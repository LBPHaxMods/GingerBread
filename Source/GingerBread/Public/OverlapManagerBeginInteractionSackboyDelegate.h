#pragma once
#include "CoreMinimal.h"
#include "OverlapManagerBeginInteractionSackboyDelegate.generated.h"

class ASackboy;
class UInteractionComponent;
class UOverlapManagerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOverlapManagerBeginInteractionSackboy, UOverlapManagerComponent*, OverlapManagerComponent, UInteractionComponent*, OverlappedComponent, ASackboy*, OtherSackboy, UInteractionComponent*, OtherComp);

