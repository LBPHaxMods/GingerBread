#pragma once
#include "CoreMinimal.h"
#include "MusicEventType.h"
#include "AkMarkerEventCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAkMarkerEventCallback, TEnumAsByte<MusicEventType>, MusicEvent, FName, MarkerLabel);

