#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "CarryPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FCarryPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    GINGERBREAD_API FCarryPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FCarryPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FCarryPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

