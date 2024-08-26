#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OverlapManagerBeginOverlapSackboyDelegate.generated.h"

class ASackboy;
class UOverlapManagerComponent;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FOverlapManagerBeginOverlapSackboy, UOverlapManagerComponent*, OverlapManagerComponent, UPrimitiveComponent*, OverlappedComponent, ASackboy*, OtherSackboy, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex, bool, bFromSweep, const FHitResult&, SweepResult);

