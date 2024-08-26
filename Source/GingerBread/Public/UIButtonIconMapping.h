#pragma once
#include "CoreMinimal.h"
#include "UIButtonIconMapping.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FUIButtonIconMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DefaultIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PS5Icon;
    
    GINGERBREAD_API FUIButtonIconMapping();
};

