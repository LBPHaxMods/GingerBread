#pragma once
#include "CoreMinimal.h"
#include "RammerChargeAtTargetTask.h"
#include "RammerChargeToTeleportLocationTask.generated.h"

UCLASS(Blueprintable)
class URammerChargeToTeleportLocationTask : public URammerChargeAtTargetTask {
    GENERATED_BODY()
public:
    URammerChargeToTeleportLocationTask();

};

