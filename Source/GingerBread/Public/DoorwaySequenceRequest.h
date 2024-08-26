#pragma once
#include "CoreMinimal.h"
#include "DoorwaySequenceRequest.generated.h"

class ADoorwayBase;

USTRUCT(BlueprintType)
struct FDoorwaySequenceRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoorwayBase* DoorwayEntrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoorwayBase* DoorwayExit;
    
    GINGERBREAD_API FDoorwaySequenceRequest();
};

