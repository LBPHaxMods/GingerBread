#pragma once
#include "CoreMinimal.h"
#include "SackboyStateChangedDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSackboyStateChanged, ASackboy*, Sackboy);

