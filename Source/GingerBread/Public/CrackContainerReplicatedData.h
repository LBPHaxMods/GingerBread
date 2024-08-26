#pragma once
#include "CoreMinimal.h"
#include "ECrackContainerState.h"
#include "CrackContainerReplicatedData.generated.h"

class ASackboy;

USTRUCT(BlueprintType)
struct FCrackContainerReplicatedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrackContainerState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASackboy* CapturedSackboy;
    
    GINGERBREAD_API FCrackContainerReplicatedData();
};

