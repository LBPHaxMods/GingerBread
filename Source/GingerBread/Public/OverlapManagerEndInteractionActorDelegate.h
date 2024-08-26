#pragma once
#include "CoreMinimal.h"
#include "OverlapManagerEndInteractionActorDelegate.generated.h"

class AActor;
class UInteractionComponent;
class UOverlapManagerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOverlapManagerEndInteractionActor, UOverlapManagerComponent*, OverlapManagerComponent, UInteractionComponent*, OverlappedComponent, AActor*, OtherActor, UInteractionComponent*, OtherComp);

