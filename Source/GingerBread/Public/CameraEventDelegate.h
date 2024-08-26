#pragma once
#include "CoreMinimal.h"
#include "CameraEventDelegate.generated.h"

class ASingleScreenCamera;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCameraEvent, ASingleScreenCamera*, Camera);

