#pragma once
#include "CoreMinimal.h"
#include "ESportsCrateDamagedDelegate.generated.h"

class AESportsCrateBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FESportsCrateDamaged, AESportsCrateBase*, Crate);

