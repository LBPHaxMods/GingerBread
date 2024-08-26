#pragma once
#include "CoreMinimal.h"
#include "EProgressionType.h"
#include "ProgressionData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FProgressionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Number;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EProgressionType::Type> Type;
    
    GINGERBREAD_API FProgressionData();
};

