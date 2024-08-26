#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EVexMovePoint.h"
#include "VexMoveData.generated.h"

USTRUCT(BlueprintType)
struct FVexMoveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FromLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVexMovePoint FromPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVexMovePoint ToPoint;
    
    GINGERBREAD_API FVexMoveData();
};

