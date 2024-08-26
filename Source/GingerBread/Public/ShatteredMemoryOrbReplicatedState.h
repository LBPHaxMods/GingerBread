#pragma once
#include "CoreMinimal.h"
#include "EShatteredMemoryOrbState.h"
#include "ShatteredMemoryOrbReplicatedState.generated.h"

class ASackboy;

USTRUCT(BlueprintType)
struct FShatteredMemoryOrbReplicatedState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EShatteredMemoryOrbState Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASackboy* CollectingSackboy;
    
    GINGERBREAD_API FShatteredMemoryOrbReplicatedState();
};

