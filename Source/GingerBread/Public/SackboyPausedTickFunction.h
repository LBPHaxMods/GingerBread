#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SackboyPausedTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSackboyPausedTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    GINGERBREAD_API FSackboyPausedTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSackboyPausedTickFunction> : public TStructOpsTypeTraitsBase2<FSackboyPausedTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

