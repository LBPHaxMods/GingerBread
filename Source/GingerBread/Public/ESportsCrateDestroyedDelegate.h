#pragma once
#include "CoreMinimal.h"
#include "ESportsCrateDestroyedDelegate.generated.h"

class AESportsCrateBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FESportsCrateDestroyed, AESportsCrateBase*, Crate);

