#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "VirtualConstraintPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FVirtualConstraintPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    GINGERBREAD_API FVirtualConstraintPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FVirtualConstraintPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FVirtualConstraintPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

