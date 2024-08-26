#pragma once
#include "CoreMinimal.h"
#include "SackboyQuitDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSackboyQuit, ASackboy*, Sackboy);

