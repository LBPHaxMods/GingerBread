#pragma once
#include "CoreMinimal.h"
#include "ECollectableAction.h"
#include "CollectableReplicatedState.generated.h"

class ASackboy;

USTRUCT(BlueprintType)
struct FCollectableReplicatedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASackboy* CollectingSackboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollectableAction::Type> Action;
    
    GINGERBREAD_API FCollectableReplicatedState();
};

