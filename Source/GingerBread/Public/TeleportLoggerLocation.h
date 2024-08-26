#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TeleportLoggerLocation.generated.h"

USTRUCT(BlueprintType)
struct FTeleportLoggerLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    GINGERBREAD_API FTeleportLoggerLocation();
};

