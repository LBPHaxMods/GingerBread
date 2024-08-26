#pragma once
#include "CoreMinimal.h"
#include "ConfigSackboySpawnDefaults.h"
#include "ConfigSackboySpawn.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UConfigSackboySpawn : public UConfigSackboySpawnDefaults {
    GENERATED_BODY()
public:
    UConfigSackboySpawn();

};

