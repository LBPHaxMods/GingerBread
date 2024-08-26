#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SackboySlapEventDelegate.generated.h"

class AActor;
class ASackboy;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FSackboySlapEvent, AActor*, SlappedActor, UPrimitiveComponent*, SlappedCollider, ASackboy*, Sackboy, int32, SlapLevel, FVector, slapHitLocation, bool, IsLeftHandedSlap);

