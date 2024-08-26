#pragma once
#include "CoreMinimal.h"
#include "OverlapManagerBeginInteractionActorDelegate.generated.h"

class AActor;
class UInteractionComponent;
class UOverlapManagerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOverlapManagerBeginInteractionActor, UOverlapManagerComponent*, OverlapManagerComponent, UInteractionComponent*, OverlappedComponent, AActor*, OtherActor, UInteractionComponent*, OtherComp);

