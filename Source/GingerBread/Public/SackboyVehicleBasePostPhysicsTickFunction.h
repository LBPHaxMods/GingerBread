#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SackboyVehicleBasePostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSackboyVehicleBasePostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    GINGERBREAD_API FSackboyVehicleBasePostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSackboyVehicleBasePostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FSackboyVehicleBasePostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

