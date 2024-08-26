#pragma once
#include "CoreMinimal.h"
#include "ShatteredOrbManagerReplicatedState.generated.h"

class ASackboy;
class AShatteredMemoryOrb;

USTRUCT(BlueprintType)
struct FShatteredOrbManagerReplicatedState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CollectedCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TotalCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShatteredMemoryOrb* CollectedShard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASackboy* CollectingSackboy;
    
    GINGERBREAD_API FShatteredOrbManagerReplicatedState();
};

