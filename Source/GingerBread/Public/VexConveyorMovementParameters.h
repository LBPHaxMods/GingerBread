#pragma once
#include "CoreMinimal.h"
#include "EVexConveyorMoveSpeedMode.h"
#include "VexConveyorMovementParameters.generated.h"

USTRUCT(BlueprintType)
struct FVexConveyorMovementParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVexConveyorMoveSpeedMode StartSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVexConveyorMoveSpeedMode EndSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> ConveyorsInReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MoveBackground;
    
    GINGERBREAD_API FVexConveyorMovementParameters();
};

