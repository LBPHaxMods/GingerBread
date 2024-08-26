#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "GBCharacterMovementPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FGBCharacterMovementPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    GINGERBREAD_API FGBCharacterMovementPostPhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FGBCharacterMovementPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FGBCharacterMovementPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

