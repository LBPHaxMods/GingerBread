#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SecondaryTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSecondaryTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    GINGERBREAD_API FSecondaryTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSecondaryTickFunction> : public TStructOpsTypeTraitsBase2<FSecondaryTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

