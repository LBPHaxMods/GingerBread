#pragma once
#include "CoreMinimal.h"
#include "ESwallowedObject.generated.h"

UENUM(BlueprintType)
namespace ESwallowedObject {
    enum Type {
        None,
        Sackboy,
        WobbleBlob,
        GenericActor,
        Max,
    };
}

