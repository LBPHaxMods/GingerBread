#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "HudActorInterpolationTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FHudActorInterpolationTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    GINGERBREAD_API FHudActorInterpolationTickFunction();
};

template<>
struct TStructOpsTypeTraits<FHudActorInterpolationTickFunction> : public TStructOpsTypeTraitsBase2<FHudActorInterpolationTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

