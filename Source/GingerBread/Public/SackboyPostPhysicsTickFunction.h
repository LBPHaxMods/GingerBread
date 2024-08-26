#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SackboyPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSackboyPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    GINGERBREAD_API FSackboyPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSackboyPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FSackboyPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

