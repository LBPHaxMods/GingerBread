#pragma once
#include "CoreMinimal.h"
#include "VexConveyorJumpingSignpostServerData.generated.h"

USTRUCT(BlueprintType)
struct FVexConveyorJumpingSignpostServerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentJumpingSignpostTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsJumpingSingpost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpingSignpostTimer;
    
    GINGERBREAD_API FVexConveyorJumpingSignpostServerData();
};

