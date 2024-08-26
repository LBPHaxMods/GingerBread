#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RammerDazeVFXData.generated.h"

USTRUCT(BlueprintType)
struct FRammerDazeVFXData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DazeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    GINGERBREAD_API FRammerDazeVFXData();
};

