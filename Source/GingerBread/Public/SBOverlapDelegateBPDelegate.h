#pragma once
#include "CoreMinimal.h"
#include "SBOverlapDelegateBPDelegate.generated.h"

class ASackboy;
class UTouchScreenAppSliderComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBOverlapDelegateBP, UTouchScreenAppSliderComponent*, Slider, ASackboy*, Sackboy);

