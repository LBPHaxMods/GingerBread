#pragma once
#include "CoreMinimal.h"
#include "ConfigSackboyNetworkDefaults.h"
#include "ConfigSackboyNetwork.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UConfigSackboyNetwork : public UConfigSackboyNetworkDefaults {
    GENERATED_BODY()
public:
    UConfigSackboyNetwork();

};

