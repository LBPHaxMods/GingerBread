#pragma once
#include "CoreMinimal.h"
#include "ESlapBoltState.generated.h"

UENUM(BlueprintType)
namespace ESlapBoltState {
    enum Type {
        Screwed,
        Fastening,
        PoppingOut,
        MAX,
    };
}

