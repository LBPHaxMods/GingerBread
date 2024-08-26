#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WobbleBlobBaseColorDeclination.generated.h"

USTRUCT(BlueprintType)
struct FWobbleBlobBaseColorDeclination {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PrimaryColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SecondaryColor;
    
    GINGERBREAD_API FWobbleBlobBaseColorDeclination();
};

