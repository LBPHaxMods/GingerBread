#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GBAxis.generated.h"

USTRUCT(BlueprintType)
struct FGBAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInLocalSpace;
    
    GINGERBREAD_API FGBAxis();
};

