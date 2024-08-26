#pragma once
#include "CoreMinimal.h"
#include "3DUI_DigitStruct.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct F3DUI_DigitStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DigitMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharWidth;
    
    GINGERBREAD_API F3DUI_DigitStruct();
};

