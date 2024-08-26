#pragma once
#include "CoreMinimal.h"
#include "ESpaceHopperSynchronisation.generated.h"

UENUM(BlueprintType)
namespace ESpaceHopperSynchronisation {
    enum Type {
        None,
        GameTime,
        TriggerWithBlueprint,
    };
}

