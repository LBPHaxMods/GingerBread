#pragma once
#include "CoreMinimal.h"
#include "VexConveyorJumpingServerData.generated.h"

USTRUCT(BlueprintType)
struct FVexConveyorJumpingServerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentJumpingTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsJumping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpingTimer;
    
    GINGERBREAD_API FVexConveyorJumpingServerData();
};

