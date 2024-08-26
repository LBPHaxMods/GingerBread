#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OverlapManagerBeginOverlapActorDelegate.generated.h"

class AActor;
class UOverlapManagerComponent;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FOverlapManagerBeginOverlapActor, UOverlapManagerComponent*, OverlapManagerComponent, UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex, bool, bFromSweep, const FHitResult&, SweepResult);

