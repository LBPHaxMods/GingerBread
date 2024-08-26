#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PinData.generated.h"

USTRUCT(BlueprintType)
struct FPinData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Grade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime DateAwarded;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ActionCount;
    
    GINGERBREAD_API FPinData();
};

