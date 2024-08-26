#pragma once
#include "CoreMinimal.h"
#include "SlapElevatorInfo.generated.h"

USTRUCT(BlueprintType)
struct FSlapElevatorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    GINGERBREAD_API FSlapElevatorInfo();
};

