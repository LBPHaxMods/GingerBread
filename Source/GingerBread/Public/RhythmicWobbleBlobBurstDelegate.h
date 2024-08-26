#pragma once
#include "CoreMinimal.h"
#include "RhythmicWobbleBlobBurstDelegate.generated.h"

class ARhythmicWobbleBlob;
class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRhythmicWobbleBlobBurst, ASackboy*, PoppingSackboy, ARhythmicWobbleBlob*, WobbleBlobRef);

