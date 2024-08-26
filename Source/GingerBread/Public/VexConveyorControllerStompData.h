#pragma once
#include "CoreMinimal.h"
#include "VexConveyorControllerStompData.generated.h"

USTRUCT(BlueprintType)
struct FVexConveyorControllerStompData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ServerAreOuterConveyorsUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ServerMoveSimultaneously;
    
    GINGERBREAD_API FVexConveyorControllerStompData();
};

